/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>


using namespace Aws::Utils;

TEST(HashingUtilsTest, TestBase64Encoding)
{
    //these are the standard testing vectors from RFC 4648
    Aws::String test1 = HashingUtils::Base64Encode(ByteBuffer((unsigned char*)"", 0));
    ASSERT_STREQ("", test1.c_str());

    Aws::String test2 = HashingUtils::Base64Encode(ByteBuffer((unsigned char*) "f", 1));
    ASSERT_STREQ("Zg==", test2.c_str());

    Aws::String test3 = HashingUtils::Base64Encode(ByteBuffer((unsigned char*) "fo", 2));
    ASSERT_STREQ("Zm8=", test3.c_str());

    Aws::String test4 = HashingUtils::Base64Encode(ByteBuffer((unsigned char*) "foo", 3));
    ASSERT_STREQ("Zm9v", test4.c_str());

    Aws::String test5 = HashingUtils::Base64Encode(ByteBuffer((unsigned char*) "foob", 4));
    ASSERT_STREQ("Zm9vYg==", test5.c_str());

    Aws::String test6 = HashingUtils::Base64Encode(ByteBuffer((unsigned char*) "fooba", 5));
    ASSERT_STREQ("Zm9vYmE=", test6.c_str());

    Aws::String test7 = HashingUtils::Base64Encode(ByteBuffer((unsigned char*) "foobar", 6));
    ASSERT_STREQ("Zm9vYmFy", test7.c_str());
}

TEST(HashingUtilsTest, TestBase64Decoding)
{
    //these are the standard testing vectors from RFC 4648
    ByteBuffer test0 = HashingUtils::Base64Decode("");
    ASSERT_EQ(ByteBuffer((unsigned char*)"", 0), test0);

    ByteBuffer test1 = HashingUtils::Base64Decode("X");
    ASSERT_EQ(ByteBuffer((unsigned char*)"", 0), test1);

    ByteBuffer test2 = HashingUtils::Base64Decode("Zg==");
    ASSERT_EQ(ByteBuffer((unsigned char*)"f", 1), test2);

    ByteBuffer test3 = HashingUtils::Base64Decode("Zm8=");
    ASSERT_EQ(ByteBuffer((unsigned char*) "fo", 2), test3);

    ByteBuffer test4 = HashingUtils::Base64Decode("Zm9v");
    ASSERT_EQ(ByteBuffer((unsigned char*) "foo", 3), test4);

    ByteBuffer test5 = HashingUtils::Base64Decode("Zm9vYg==");
    ASSERT_EQ(ByteBuffer((unsigned char*) "foob", 4), test5);

    ByteBuffer test6 = HashingUtils::Base64Decode("Zm9vYmE=");
    ASSERT_EQ(ByteBuffer((unsigned char*) "fooba", 5), test6);

    ByteBuffer test7 = HashingUtils::Base64Decode("Zm9vYmFy");
    ASSERT_EQ(ByteBuffer((unsigned char*) "foobar", 6), test7);
}

TEST(HashingUtilsTest, TestHexEncodingDecoding)
{
    unsigned char beforeHexEncoding[32] =
    { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C,
            0x0D, 0x0E, 0x0F, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x78, 0x69,
            0x5A, 0x4B, 0x3C, 0x2D, 0x1E, 0x0F, 0x10, 0x00 };

    Aws::String hexEncodedValue = HashingUtils::HexEncode(ByteBuffer(beforeHexEncoding, 32));

    const char* afterEncoding =
            "0102030405060708090a0b0c0d0e0f1122334455667778695a4b3c2d1e0f1000";
    ASSERT_STREQ(afterEncoding, hexEncodedValue.c_str());

    ByteBuffer hexBuffer(beforeHexEncoding, 32);
    ASSERT_EQ(hexBuffer, HashingUtils::HexDecode(afterEncoding));
}

TEST(HashingUtilsTest, TestSHA256HMAC)
{
    const char* toHash = "TestHash";
    const char* secret = "TestSecret";

    ByteBuffer digest = HashingUtils::CalculateSHA256HMAC(
            ByteBuffer((unsigned char*) toHash, 8), ByteBuffer((unsigned char*) secret, 10));

    Aws::String computedHashAsHex = HashingUtils::HexEncode(digest);

    ASSERT_EQ(32uL, digest.GetLength());
    EXPECT_STREQ("43cf04fa24b873a456670d34ef9af2cb7870483327b5767509336fa66fb7986c", computedHashAsHex.c_str());    
}

TEST(HashingUtilsTest, TestSHA256FromString)
{
    Aws::String toHash = "TestToHash";

    ByteBuffer digest = HashingUtils::CalculateSHA256(toHash);
    ASSERT_EQ(32uL, digest.GetLength());

    Aws::String base64Hash = HashingUtils::Base64Encode(digest);
    EXPECT_STREQ("No9GqyFhBA5QWj9+YUchjN83IByaCH5Lqji0McSOKyg=", base64Hash.c_str()); 

    // SHA256 results come from https://www.di-mgt.com.au/sha_testvectors.html
    EXPECT_STREQ(HashingUtils::HexEncode(HashingUtils::CalculateSHA256("")).c_str(), 
            "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855");

    EXPECT_STREQ(HashingUtils::HexEncode(HashingUtils::CalculateSHA256("abc")).c_str(), 
            "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad");

    EXPECT_STREQ(HashingUtils::HexEncode(HashingUtils::CalculateSHA256(
            "abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmnhijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu")).c_str(),
            "cf5b16a778af8380036ce59e7b0492370b249b11e8f07a51afac45037afee9d1");
}

TEST(HashingUtilsTest, TestSHA256FromStream)
{
    Aws::StringStream toHash;
    toHash << "TestToHash";

    ByteBuffer digest = HashingUtils::CalculateSHA256(toHash);
    ASSERT_EQ(32uL, digest.GetLength());

    Aws::String base64Hash = HashingUtils::Base64Encode(digest);
    EXPECT_STREQ("No9GqyFhBA5QWj9+YUchjN83IByaCH5Lqji0McSOKyg=", base64Hash.c_str());

    // SHA256 results come from https://www.di-mgt.com.au/sha_testvectors.html
    toHash.str("");
    toHash.clear();
    EXPECT_STREQ(HashingUtils::HexEncode(HashingUtils::CalculateSHA256(toHash)).c_str(), 
            "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855");

    toHash.str("");
    toHash.clear();
    toHash << "abc";
    EXPECT_STREQ(HashingUtils::HexEncode(HashingUtils::CalculateSHA256(toHash)).c_str(), 
            "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad");

    toHash.str("");
    toHash.clear();
    toHash << "abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmnhijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu";
    EXPECT_STREQ(HashingUtils::HexEncode(HashingUtils::CalculateSHA256(toHash)).c_str(),
            "cf5b16a778af8380036ce59e7b0492370b249b11e8f07a51afac45037afee9d1");
}

TEST(HashingUtilsTest, TestSHA256TreeHashEqualsSHA256FromStringWhenSizeLessEqualThanOneMB)
{
    Aws::Vector<Aws::String> strVec;
    strVec.push_back("");
    strVec.push_back("abc");
    strVec.push_back("abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmnhijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu");
    strVec.push_back("TestToHash");
    strVec.push_back(Aws::String(1024 * 1024 - 1, 'A'));
    strVec.push_back(Aws::String(1024 * 1024, 'A'));
    for (size_t i = 0; i < strVec.size(); i++)
    {
        ByteBuffer sha256Digest = HashingUtils::CalculateSHA256(strVec[i]);
        ByteBuffer sha256TreeHashDigest = HashingUtils::CalculateSHA256TreeHash(strVec[i]);
        ASSERT_EQ(32uL, sha256Digest.GetLength());
        ASSERT_EQ(32uL, sha256TreeHashDigest.GetLength());

        Aws::String base64Hash = HashingUtils::Base64Encode(sha256Digest);
        Aws::String base64TreeHash = HashingUtils::Base64Encode(sha256TreeHashDigest);

        EXPECT_STREQ(base64Hash.c_str(), base64TreeHash.c_str());
    }
}

TEST(HashingUtilsTest, TestSHA256TreeHashFromStringWhenSizeMoreThanOneMB)
{
    // All cases are generated by java example code supplied at:
    // http://docs.aws.amazon.com/amazonglacier/latest/dev/checksum-calculations.html#checksum-calculations-examples
    // 2MB buffer filled with char '0'
    Aws::String TwoMBStr(1024 * 1024 * 2, '0');
    EXPECT_STREQ("489117033ee4cf06991b60ce56830ac409862a6ec8afdfb3b510e8fad3b80d24", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(TwoMBStr)).c_str());
    // 3MB
    Aws::String ThreeMBStr(1024 * 1024 * 3, '0');
    EXPECT_STREQ("940257b3e0d13f92c98dc3fc32182e3acd07a81fe82f2b2dcd1802e1eedc5a3c", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(ThreeMBStr)).c_str());
    // 4MB
    Aws::String FourMBStr(1024 * 1024 * 4, '0');
    EXPECT_STREQ("0c2c286faeadbb8ef7aab5e1198af77b1c00d6ff634a739f0e4d55ea3a40ad2d", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(FourMBStr)).c_str());
    // 5.5MB
    Aws::String FivePointFiveMBStr(5767168, '0');
    EXPECT_STREQ("154e26c78fd74d0c2c9b3cc4644191619dc4f2cd539ae2a74d5fd07957a3ee6a", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(FivePointFiveMBStr)).c_str());
    // 8MB
    Aws::String EightMBStr(1024 * 1024 * 8, '0');
    EXPECT_STREQ("ff9ea39186cb33cd5ade7aca078e297a1622f8c1abdd4cc47bcbf66dc5877e1f", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(EightMBStr)).c_str());
}

TEST(HashingUtilsTest, TestSHA256TreeHashEqualsSHA256FromStreamWhenSizeLessEqualThanOneMB)
{
    Aws::Vector<Aws::StringStream> streamVec(6);
    streamVec[0] << "";
    streamVec[1] << "abc";
    streamVec[2] << "abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmnhijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu";
    streamVec[3] << "TestToHash";
    streamVec[4] << Aws::String(1024 * 1024 - 1, 'A');
    streamVec[5] << Aws::String(1024 * 1024, 'A');
    for (size_t i = 0; i < streamVec.size(); i++)
    {
        ByteBuffer sha256Digest = HashingUtils::CalculateSHA256(streamVec[i]);
        ByteBuffer sha256TreeHashDigest = HashingUtils::CalculateSHA256TreeHash(streamVec[i]);
        ASSERT_EQ(32uL, sha256Digest.GetLength());
        ASSERT_EQ(32uL, sha256TreeHashDigest.GetLength());

        Aws::String base64Hash = HashingUtils::Base64Encode(sha256Digest);
        Aws::String base64TreeHash = HashingUtils::Base64Encode(sha256TreeHashDigest);

        EXPECT_STREQ(base64Hash.c_str(), base64TreeHash.c_str());
    }
}

TEST(HashingUtilsTest, TestSHA256TreeHashFromStreamWhenSizeMoreThanOneMB)
{
    // All cases are generated by java example code supplied at:
    // http://docs.aws.amazon.com/amazonglacier/latest/dev/checksum-calculations.html#checksum-calculations-examples
    // 2MB buffer filled with char '0'
    Aws::StringStream TwoMBStream;
    TwoMBStream << Aws::String(1024 * 1024 * 2, '0');
    EXPECT_STREQ("489117033ee4cf06991b60ce56830ac409862a6ec8afdfb3b510e8fad3b80d24", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(TwoMBStream)).c_str());
    // 3MB
    Aws::StringStream ThreeMBStream;
    ThreeMBStream << Aws::String(1024 * 1024 * 3, '0');
    EXPECT_STREQ("940257b3e0d13f92c98dc3fc32182e3acd07a81fe82f2b2dcd1802e1eedc5a3c", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(ThreeMBStream)).c_str());
    // 4MB
    Aws::StringStream FourMBStream;
    FourMBStream << Aws::String(1024 * 1024 * 4, '0');
    EXPECT_STREQ("0c2c286faeadbb8ef7aab5e1198af77b1c00d6ff634a739f0e4d55ea3a40ad2d", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(FourMBStream)).c_str());
    // 5.5MB
    Aws::StringStream FivePointFiveMBStream;
    FivePointFiveMBStream << Aws::String(5767168, '0');
    EXPECT_STREQ("154e26c78fd74d0c2c9b3cc4644191619dc4f2cd539ae2a74d5fd07957a3ee6a", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(FivePointFiveMBStream)).c_str());
    // 8MB
    Aws::StringStream EightMBStream;
    EightMBStream << Aws::String(1024 * 1024 * 8, '0');
    EXPECT_STREQ("ff9ea39186cb33cd5ade7aca078e297a1622f8c1abdd4cc47bcbf66dc5877e1f", HashingUtils::HexEncode(HashingUtils::CalculateSHA256TreeHash(EightMBStream)).c_str());
}

static void TestMD5FromString(const char* value, const char* expectedBase64Hash)
{
    Aws::String source(value);

    ByteBuffer digest = HashingUtils::CalculateMD5(source);
    ASSERT_EQ(16uL, digest.GetLength());

    Aws::String base64Hash = HashingUtils::Base64Encode(digest);
    ASSERT_STREQ(expectedBase64Hash, base64Hash.c_str());
}

TEST(HashingUtilsTest, TestMD5FromString)
{
    // "" -> d41d8cd98f00b204e9800998ecf8427e -> 1B2M2Y8AsgTpgAmY7PhCfg== (base 64)
    TestMD5FromString( "", "1B2M2Y8AsgTpgAmY7PhCfg==" );

    // "a" -> 0cc175b9c0f1b6a831c399e269772661 -> DMF1ucDxtqgxw5niaXcmYQ== (base 64)
    TestMD5FromString( "a", "DMF1ucDxtqgxw5niaXcmYQ==" );

    // "abc" -> 900150983cd24fb0d6963f7d28e17f72 -> kAFQmDzST7DWlj99KOF/cg== (base 64)
    TestMD5FromString( "abc", "kAFQmDzST7DWlj99KOF/cg==" );

    // "message digest" -> f96b697d7cb7938d525a2f31aaf161d0 -> +WtpfXy3k41SWi8xqvFh0A== (base 64)
    TestMD5FromString( "message digest", "+WtpfXy3k41SWi8xqvFh0A==" );

    // "abcdefghijklmnopqrstuvwxyz" -> c3fcd3d76192e4007dfb496cca67e13b -> w/zT12GS5AB9+0lsymfhOw== (base 64)
    TestMD5FromString( "abcdefghijklmnopqrstuvwxyz", "w/zT12GS5AB9+0lsymfhOw==" );

    // "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" -> d174ab98d277d9f5a5611c2c9f419d9f -> 0XSrmNJ32fWlYRwsn0Gdnw== (base 64)
    TestMD5FromString( "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789", "0XSrmNJ32fWlYRwsn0Gdnw==" );

    // "12345678901234567890123456789012345678901234567890123456789012345678901234567890" -> 57edf4a22be3c955ac49da2e2107b67a -> V+30oivjyVWsSdouIQe2eg== (base 64)
    TestMD5FromString( "12345678901234567890123456789012345678901234567890123456789012345678901234567890", "V+30oivjyVWsSdouIQe2eg==" );
}

static void TestMD5FromStream(const char* value, const char* expectedBase64Hash)
{
    Aws::StringStream stream;

    stream.str(value);
    ByteBuffer digest = HashingUtils::CalculateMD5(stream);
    ASSERT_EQ(16uL, digest.GetLength());

    Aws::String base64Hash = HashingUtils::Base64Encode(digest);
    ASSERT_STREQ(expectedBase64Hash, base64Hash.c_str());
}

TEST(HashingUtilsTest, TestMD5FromStream)
{
    // "" -> d41d8cd98f00b204e9800998ecf8427e -> 1B2M2Y8AsgTpgAmY7PhCfg== (base 64)
    TestMD5FromStream( "", "1B2M2Y8AsgTpgAmY7PhCfg==" );

    // "a" -> 0cc175b9c0f1b6a831c399e269772661 -> DMF1ucDxtqgxw5niaXcmYQ== (base 64)
    TestMD5FromStream( "a", "DMF1ucDxtqgxw5niaXcmYQ==" );

    // "abc" -> 900150983cd24fb0d6963f7d28e17f72 -> kAFQmDzST7DWlj99KOF/cg== (base 64)
    TestMD5FromStream( "abc", "kAFQmDzST7DWlj99KOF/cg==" );

    // "message digest" -> f96b697d7cb7938d525a2f31aaf161d0 -> +WtpfXy3k41SWi8xqvFh0A== (base 64)
    TestMD5FromStream( "message digest", "+WtpfXy3k41SWi8xqvFh0A==" );

    // "abcdefghijklmnopqrstuvwxyz" -> c3fcd3d76192e4007dfb496cca67e13b -> w/zT12GS5AB9+0lsymfhOw== (base 64)
    TestMD5FromStream( "abcdefghijklmnopqrstuvwxyz", "w/zT12GS5AB9+0lsymfhOw==" );

    // "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" -> d174ab98d277d9f5a5611c2c9f419d9f -> 0XSrmNJ32fWlYRwsn0Gdnw== (base 64)
    TestMD5FromStream( "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789", "0XSrmNJ32fWlYRwsn0Gdnw==" );

    // "12345678901234567890123456789012345678901234567890123456789012345678901234567890" -> 57edf4a22be3c955ac49da2e2107b67a -> V+30oivjyVWsSdouIQe2eg== (base 64)
    TestMD5FromStream( "12345678901234567890123456789012345678901234567890123456789012345678901234567890", "V+30oivjyVWsSdouIQe2eg==" );
}

