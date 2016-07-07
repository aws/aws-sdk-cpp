/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */


#include <aws/external/gtest.h>
#include <aws/testing/MemoryTesting.h>

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <climits>

using namespace Aws::Utils;


TEST(StringUtilsTest, TestSplitHappyPath)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String toSplit = "test1,test2,test3,test4";
    Aws::Vector<Aws::String> splits = StringUtils::Split(toSplit, ',');

    ASSERT_EQ(4uL, splits.size());
    EXPECT_STREQ("test1", splits[0].c_str());
    EXPECT_STREQ("test2", splits[1].c_str());
    EXPECT_STREQ("test3", splits[2].c_str());
    EXPECT_STREQ("test4", splits[3].c_str());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestSplitOnLineHappyPath)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::StringStream ss;
    ss << "test1" << std::endl << "test2" << std::endl << "test3" << std::endl << "test4";
    Aws::String toSplit = ss.str();

    Aws::Vector<Aws::String> splits = StringUtils::SplitOnLine(toSplit);

    ASSERT_EQ(4uL, splits.size());
    EXPECT_STREQ("test1", splits[0].c_str());
    EXPECT_STREQ("test2", splits[1].c_str());
    EXPECT_STREQ("test3", splits[2].c_str());
    EXPECT_STREQ("test4", splits[3].c_str());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestSplitWithDelimiterOnTheFrontAndBack)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String toSplit = ",test1,test2,test3,test4,";

    Aws::Vector<Aws::String> splits = StringUtils::Split(toSplit, ',');

    ASSERT_EQ(4uL, splits.size());
    EXPECT_STREQ("test1", splits[0].c_str());
    EXPECT_STREQ("test2", splits[1].c_str());
    EXPECT_STREQ("test3", splits[2].c_str());
    EXPECT_STREQ("test4", splits[3].c_str());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestSplitWithEmptyString)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String toSplit = "";

    Aws::Vector<Aws::String> splits = StringUtils::Split(toSplit, ',');

    ASSERT_EQ(0uL, splits.size());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestSplitDelimiterNotFound)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String toSplit = "BlahBlahBlah";

    Aws::Vector<Aws::String> splits = StringUtils::Split(toSplit, ',');

    ASSERT_EQ(1uL, splits.size());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestToLower)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String toMakeLower = "Make Me Lower Case";
    Aws::String lowered = StringUtils::ToLower(toMakeLower.c_str());

    EXPECT_STREQ("make me lower case", lowered.c_str());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestToUpper)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String toMakeUpper = "Make Me Upper Case";
    Aws::String uppered = StringUtils::ToUpper(toMakeUpper.c_str());

    EXPECT_STREQ("MAKE ME UPPER CASE", uppered.c_str());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestCaselessComparison)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    static const char* upperCase = "WE ARE the Same";
    static const char* lowerCase = "we are the same";
    static const char* bad = "We Are Not the same";

    EXPECT_TRUE(StringUtils::CaselessCompare(upperCase, lowerCase));
    EXPECT_FALSE(StringUtils::CaselessCompare(lowerCase, bad));

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestTrim)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String toTrim = " \n\t Trim me\n\t ";

    ASSERT_STREQ("Trim me\n\t ", StringUtils::LTrim(toTrim.c_str()).c_str());
    ASSERT_STREQ(" \n\t Trim me", StringUtils::RTrim(toTrim.c_str()).c_str());
    EXPECT_STREQ("Trim me", StringUtils::Trim(toTrim.c_str()).c_str());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestURLEncodeAndDecode)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String toEncode = "/Test Path/value=reserved%!";

    //test the encoding happened and was deterministic
    Aws::String encoded = StringUtils::URLEncode(toEncode.c_str());
    ASSERT_STREQ("%2FTest%20Path%2Fvalue%3Dreserved%25%21", encoded.c_str());

    //test that encode and decode are inverse operations.
    Aws::String decoded = StringUtils::URLDecode(encoded.c_str());

    ASSERT_STREQ(toEncode.c_str(), decoded.c_str());

    Aws::String securityTokenSample = "AQoDYXdzEHwa8AQuv9uqBq1xdJgujBb+oQI0m8d6uyXZo5MY1uSK1YIGYRlKSJPC4sOcK30w4EB6g3cA+jJe810K65eDgf60vQBEjwPA9VK4iVbu4M5a0JW2dEgJUnnXG5XNSWEzDhuROjfM+lJ55StL5KxAB7QiNZR1S5p+KdSGLEcIGTsvNRKZ6P1iLD4FRiM+80xo3lZydiLSPRl3jSNYmnSuzBMnpm4xca4BqBFY9vyL0xIvm7bRaObHjuN+ug/wUiELm/XiDexCjTHPh4AHjRovuQNSarsyE7XtvzFVL22TZGbiKT6cI4M+QR7VoJ6Bcwx4sp1DcuilGvXubcPTfrGHe01Vb0cKHysBcidJym1FRb6bA1artV3++CmbzW3z81gi7rG1P6d2vBQUG1PiYJSPDQ8AjEz+NK5sOviMJzo8jJVGwfvs73w51XOBe4DblpR+pDQ0IxEnmlkeHzBTQnqaW8czlaE2dqGfSkA8J/DwhjK+iZTgwUggIYWnaG+OpX8ngV9zkC+QotCx+D8VQ5FvNUV/QpJNpOEunbZTlQHJeF/G7zNstwXPQUTYv/JNmgmOWx1KoHRgCILRGbzj8JhO4ozSbsqDZ4hgGpaDYhU+vIX7kPXWvyGHk8B+3dcZa9NxpSC+CDzW+oj7xXe5y6J+v0q+r3MYv67gE/FpljdpGHvRJ9DeQh7Db83frdeYWjJir3K3ZjLCf6W/Yuaos362bu3RSFIk5def037eGwctuh85zdyvHDai+MGKKAa5xOMkYOb/Wnqd73OTAKRMsQLxPqGP0sDPpAJZm0Q8iMi0JP3JHgIb8GWMliWWcpBDHEtuouuWLLkgmY21rQU=";
    encoded = StringUtils::URLEncode(securityTokenSample.c_str());

    Aws::String urlEncodedSample = "AQoDYXdzEHwa8AQuv9uqBq1xdJgujBb%2BoQI0m8d6uyXZo5MY1uSK1YIGYRlKSJPC4sOcK30w4EB6g3cA%2BjJe810K65eDgf60vQBEjwPA9VK4iVbu4M5a0JW2dEgJUnnXG5XNSWEzDhuROjfM%2BlJ55StL5KxAB7QiNZR1S5p%2BKdSGLEcIGTsvNRKZ6P1iLD4FRiM%2B80xo3lZydiLSPRl3jSNYmnSuzBMnpm4xca4BqBFY9vyL0xIvm7bRaObHjuN%2Bug%2FwUiELm%2FXiDexCjTHPh4AHjRovuQNSarsyE7XtvzFVL22TZGbiKT6cI4M%2BQR7VoJ6Bcwx4sp1DcuilGvXubcPTfrGHe01Vb0cKHysBcidJym1FRb6bA1artV3%2B%2BCmbzW3z81gi7rG1P6d2vBQUG1PiYJSPDQ8AjEz%2BNK5sOviMJzo8jJVGwfvs73w51XOBe4DblpR%2BpDQ0IxEnmlkeHzBTQnqaW8czlaE2dqGfSkA8J%2FDwhjK%2BiZTgwUggIYWnaG%2BOpX8ngV9zkC%2BQotCx%2BD8VQ5FvNUV%2FQpJNpOEunbZTlQHJeF%2FG7zNstwXPQUTYv%2FJNmgmOWx1KoHRgCILRGbzj8JhO4ozSbsqDZ4hgGpaDYhU%2BvIX7kPXWvyGHk8B%2B3dcZa9NxpSC%2BCDzW%2Boj7xXe5y6J%2Bv0q%2Br3MYv67gE%2FFpljdpGHvRJ9DeQh7Db83frdeYWjJir3K3ZjLCf6W%2FYuaos362bu3RSFIk5def037eGwctuh85zdyvHDai%2BMGKKAa5xOMkYOb%2FWnqd73OTAKRMsQLxPqGP0sDPpAJZm0Q8iMi0JP3JHgIb8GWMliWWcpBDHEtuouuWLLkgmY21rQU%3D";
    ASSERT_EQ(urlEncodedSample, encoded);

    //test that a string that doesn't need encoding is not altered.
    Aws::String shouldBeTheSameAsEncoded = StringUtils::URLEncode("IShouldNotChange");
    ASSERT_STREQ("IShouldNotChange", shouldBeTheSameAsEncoded.c_str());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestInt64Conversion)
{
    long long bigIntValue = LLONG_MAX - 1;
    std::stringstream ss;
    ss << bigIntValue;
    ASSERT_EQ(0, StringUtils::ConvertToInt64(NULL));
    ASSERT_EQ(0, StringUtils::ConvertToInt64(""));
    ASSERT_EQ(bigIntValue, StringUtils::ConvertToInt64(ss.str().c_str()));
}

TEST(StringUtilsTest, TestInt32Conversion)
{
    long long intValue = INT_MAX - 1;
    std::stringstream ss;
    ss << intValue;

    ASSERT_EQ(0, StringUtils::ConvertToInt32(NULL));
    ASSERT_EQ(0, StringUtils::ConvertToInt32(""));
    ASSERT_EQ(intValue, StringUtils::ConvertToInt32(ss.str().c_str()));
}

TEST(StringUtilsTest, TestBoolConversion)
{
    ASSERT_FALSE(StringUtils::ConvertToBool(NULL));
    ASSERT_FALSE(StringUtils::ConvertToBool(""));
    ASSERT_FALSE(StringUtils::ConvertToBool("false"));
    ASSERT_FALSE(StringUtils::ConvertToBool("False"));
    ASSERT_FALSE(StringUtils::ConvertToBool("0"));
    ASSERT_TRUE(StringUtils::ConvertToBool("1"));
    ASSERT_TRUE(StringUtils::ConvertToBool("True"));
    ASSERT_TRUE(StringUtils::ConvertToBool("true"));
}

TEST(StringUtilsTest, TestDoubleConversion)
{
    double doubleValue = DBL_MAX - 0.0001;
    ASSERT_DOUBLE_EQ(0.0, StringUtils::ConvertToDouble(NULL));
    ASSERT_DOUBLE_EQ(0.0, StringUtils::ConvertToDouble(""));

    std::stringstream ss;
    ss << std::setprecision(20) << doubleValue;
    ASSERT_DOUBLE_EQ(doubleValue, StringUtils::ConvertToDouble(ss.str().c_str()));
}

TEST(StringUtilsTest, TestDoubleURLEncoding)
{
    double doubleValue = 56789432.08;
    ASSERT_TRUE( "5.67894e%2B07" == StringUtils::URLEncode(doubleValue) || "5.67894e%2B007" == StringUtils::URLEncode(doubleValue));

    doubleValue = 567894;
    ASSERT_EQ("567894", StringUtils::URLEncode(doubleValue));

    doubleValue = 0.00005678;
    ASSERT_TRUE("5.678e-05" == StringUtils::URLEncode(doubleValue) || "5.678e-005" == StringUtils::URLEncode(doubleValue));

    doubleValue = 0.0005678;
    ASSERT_EQ("0.0005678", StringUtils::URLEncode(doubleValue));
}

TEST(StringUtilsTest, TestUnicodeURLEncoding)
{
    ASSERT_EQ("sample%E4%B8%AD%E5%9B%BD", StringUtils::URLEncode("sample中国"));
}

TEST(StringUtilsTest, TestUnicodeURLDecoding)
{
    ASSERT_EQ("sample中国", StringUtils::URLDecode("sample%E4%B8%AD%E5%9B%BD"));
}

#ifdef _WIN32

TEST(StringUtilsTest, TestWCharToString)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    static const wchar_t* wcharString = L"Test this string";

    Aws::String outString = StringUtils::FromWString(wcharString);

    ASSERT_STREQ("Test this string", outString.c_str());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestCharToWString)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    static const char* charString = "Test this string";

    Aws::WString outString = StringUtils::ToWString(charString);

    ASSERT_STREQ(L"Test this string", outString.c_str());

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestWStringNonAsciiToString)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::WString startString;

    // Toss in a couple ascii characters to start, then go over 127
    const char startVal = 115;
    int addValue = startVal;
    const char incrementVal = 10;
    const char loopCount = 10;
    for (char i = 0; i < loopCount; ++i)
    {
        startString.push_back(static_cast<wchar_t>(addValue));
        addValue += incrementVal;
    }

    Aws::String outString = StringUtils::FromWString(startString.c_str());
    ASSERT_EQ(outString.length(), loopCount);

    for (size_t i = 0; i < outString.length(); ++i)
    {
        char testValue = outString[i];
        ASSERT_EQ(testValue, static_cast<char>(startVal + incrementVal * i));
    }

    // This loop will cross the byte limit
    for (char i = 0; i < loopCount; ++i)
    {
        startString.push_back(static_cast<wchar_t>(addValue));
        addValue += incrementVal;
    }
    // Verify the length, not the values though
    outString = StringUtils::FromWString(startString.c_str());
    ASSERT_EQ(outString.length(), loopCount * 2);

    AWS_END_MEMORY_TEST
}

TEST(StringUtilsTest, TestStringNonAsciiToWString)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String startString;

    const char startVal = 115;
    
    const char incrementVal = 10;
    const char loopCount = 10;
    for (char i = 0; i < loopCount; ++i)
    {
        startString.push_back(static_cast<char>(startVal + incrementVal * i));
    }

    Aws::WString outString = StringUtils::ToWString(startString.c_str());
    ASSERT_EQ(outString.length(), loopCount);

    AWS_END_MEMORY_TEST
}

#endif



