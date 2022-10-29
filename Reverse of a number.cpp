#include<iostream>;
using namespace std;
int main()
{
	//initialization of variables
	int num, a, b, c, d, e, f, g, h, i, j;

	cout << "Enter the 10 integer numbers (only) : ";
	cin >> num;
	a = num % 10;
	num = num / 10;
	b = num % 10;
	num = num / 10;
	c = num % 10;
	num = num / 10;
	d = num % 10;
	num = num / 10;
	e = num % 10;
	num = num / 10;
	f = num % 10;
	num = num / 10;
	g= num % 10;
	num = num / 10;
	h = num % 10;
	num = num / 10;
	i = num % 10;
	num = num / 10;
	j= num % 10;
	num = num / 10;
	//printing of numbers
	cout << a << b << c << d << e << f << g << h << i << j << endl;
	system("pause");
	return 0;
}