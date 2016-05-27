/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/crypto/CryptoStream.h>
#include <aws/core/utils/memory/stl/AWSQueue.h>
#include <aws/core/utils/memory/stl/AWSString.h>

using namespace Aws::Utils::Crypto;
using namespace Aws::Utils;

class MockSymmetricCipher : public SymmetricCipher
{    
public:
    MockSymmetricCipher() : SymmetricCipher(SymmetricCipher::GenerateKey(), SymmetricCipher::GenerateIV(16)), m_resetCalledCount(0), m_encryptCalledCount(0), m_finalizeEncryptionCalledCount(0),
        m_decryptCalledCount(0), m_finalizeDecryptionCalledCount(0)
    {
    }

    CryptoBuffer EncryptBuffer(const CryptoBuffer&) override
    {
        m_encryptCalledCount++;
        return PopQueue();
    }

    CryptoBuffer FinalizeEncryption() override
    {
        m_finalizeEncryptionCalledCount++;
        return m_finalResponse;
    }

    CryptoBuffer DecryptBuffer(const CryptoBuffer&) override
    {
        m_decryptCalledCount++;
        return PopQueue();
    }

    CryptoBuffer FinalizeDecryption() override
    {
        m_finalizeDecryptionCalledCount++;
        return m_finalResponse;
    }

    void Reset() override
    {
        m_encryptDecryptResponses = m_encryptDecryptResponsesCpy;
        m_resetCalledCount++;
        m_failure = false;
    }

    void QueueEncryptDecryptResponse(const CryptoBuffer& toQueue)
    {
        m_encryptDecryptResponses.push(toQueue);
        m_encryptDecryptResponsesCpy.push(toQueue);
    }

    void SetFinalResponse(const CryptoBuffer& finalResponse)
    {
        m_finalResponse = finalResponse;
    }

    void Fail()
    {
        m_failure = true;
    }

    CryptoBuffer PopQueue()
    {
        if (m_encryptDecryptResponses.size() > 0)
        {
            auto top = m_encryptDecryptResponses.front();
            m_encryptDecryptResponses.pop();

            return top;
        }
        return CryptoBuffer();
    }

    Aws::Queue<CryptoBuffer> m_encryptDecryptResponses;
    Aws::Queue<CryptoBuffer> m_encryptDecryptResponsesCpy;
    CryptoBuffer m_finalResponse;
    size_t m_resetCalledCount;
    size_t m_encryptCalledCount;
    size_t m_decryptCalledCount;
    size_t m_finalizeEncryptionCalledCount;
    size_t m_finalizeDecryptionCalledCount;
};

static const char* TEST_RESPONSE_1 = "BLAH_1_BLAH_1_BLAH_1_BLAH_1_BLAH_1_B";
static const char* TEST_RESPONSE_2 = "BLAH_2_BLAH_2_BLAH_2_BLAH_2_BLAH_2_B";
static const char* TEST_RESPONSE_FINAL = "BLAH_FIN_BLAH_FIN_BLAH_FIN_BLAH_FIN";
static const char* ORIGINAL_SRC = "This is a test message for encryption and decryption. It doesn't actually matter if it is encrypted or not.";

static void InitMockCipher(MockSymmetricCipher& cipher)
{
    cipher.QueueEncryptDecryptResponse(CryptoBuffer((unsigned char*)TEST_RESPONSE_1, strlen(TEST_RESPONSE_1)));
    cipher.QueueEncryptDecryptResponse(CryptoBuffer((unsigned char*)TEST_RESPONSE_2, strlen(TEST_RESPONSE_2)));
    cipher.SetFinalResponse(CryptoBuffer((unsigned char*)TEST_RESPONSE_FINAL, strlen(TEST_RESPONSE_FINAL)));
}

static Aws::String ComputeCompleteOutput()
{
    Aws::String str;
    str.append(TEST_RESPONSE_1);
    str.append(TEST_RESPONSE_2);
    str.append(TEST_RESPONSE_FINAL);

    return str;
}

static Aws::String ComputePartialOutput()
{
    Aws::String str;
    str.append(TEST_RESPONSE_1);
    str.append(TEST_RESPONSE_FINAL);

    return str;
}

TEST(CryptoStreamsTest, TestEncryptSrcStreamEvenBoundaries)
{
    std::istringstream is(ORIGINAL_SRC);
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    SymmetricCryptoStream stream(is, CipherMode::Encrypt, cipher, srcLen / 2);
    Aws::String encryptedOutput;

    stream >> encryptedOutput;

    ASSERT_STREQ(ComputeCompleteOutput().c_str(), encryptedOutput.c_str());
    ASSERT_EQ(2u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestDecyptSrcStreamEvenBoundaries)
{
    std::istringstream is(ORIGINAL_SRC);
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    SymmetricCryptoStream stream(is, CipherMode::Decrypt, cipher, srcLen / 2);
    Aws::String decyptedOutput;

    stream >> decyptedOutput;

    ASSERT_STREQ(ComputeCompleteOutput().c_str(), decyptedOutput.c_str());
    ASSERT_EQ(0u, cipher.m_encryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(2u, cipher.m_decryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSrcStreamLargeBuffer)
{
    std::istringstream is(ORIGINAL_SRC);
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    SymmetricCryptoStream stream(is, CipherMode::Encrypt, cipher, srcLen);
    Aws::String encryptedOutput;

    stream >> encryptedOutput;

    ASSERT_STREQ(ComputePartialOutput().c_str(), encryptedOutput.c_str());
    ASSERT_EQ(1u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestDecyptSrcStreamLargeBuffer)
{
    std::istringstream is(ORIGINAL_SRC);
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    SymmetricCryptoStream stream(is, CipherMode::Decrypt, cipher, srcLen);
    Aws::String decyptedOutput;

    stream >> decyptedOutput;

    ASSERT_STREQ(ComputePartialOutput().c_str(), decyptedOutput.c_str());
    ASSERT_EQ(0u, cipher.m_encryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(1u, cipher.m_decryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSinkStreamEvenBoundariesDestructorFinalizes)
{
    std::ostringstream os;
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    {
        SymmetricCryptoStream stream(os, CipherMode::Encrypt, cipher, srcLen / 2);
        stream << ORIGINAL_SRC;
    }

    ASSERT_STREQ(ComputeCompleteOutput().c_str(), os.str().c_str());
    ASSERT_EQ(2u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSinkStreamEvenBoundariesExplicitFinalize)
{
    std::ostringstream os;
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    SymmetricCryptoStream stream(os, CipherMode::Encrypt, cipher, srcLen / 2);
    stream << ORIGINAL_SRC;
    stream.Finalize();

    ASSERT_STREQ(ComputeCompleteOutput().c_str(), os.str().c_str());
    ASSERT_EQ(2u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestDecyptSinkStreamEvenBoundariesDestructorFinalizes)
{
    std::ostringstream os;
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    {
        SymmetricCryptoStream stream(os, CipherMode::Decrypt, cipher, srcLen / 2);
        stream << ORIGINAL_SRC;
    }

    ASSERT_STREQ(ComputeCompleteOutput().c_str(), os.str().c_str());
    ASSERT_EQ(0u, cipher.m_encryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(2u, cipher.m_decryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestDecryptSinkStreamEvenBoundariesExplicitFinalize)
{
    std::ostringstream os;
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    SymmetricCryptoStream stream(os, CipherMode::Decrypt, cipher, srcLen / 2);
    stream << ORIGINAL_SRC;
    stream.Finalize();

    ASSERT_STREQ(ComputeCompleteOutput().c_str(), os.str().c_str());
    ASSERT_EQ(0u, cipher.m_encryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(2u, cipher.m_decryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSinkStreamLargeBufferDestructorFinalizes)
{
    std::ostringstream os;
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    {
        SymmetricCryptoStream stream(os, CipherMode::Encrypt, cipher, srcLen);
        stream << ORIGINAL_SRC;
    }

    ASSERT_STREQ(ComputePartialOutput().c_str(), os.str().c_str());
    ASSERT_EQ(1u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSinkStreamLargeBufferExplicitFinalize)
{
    std::ostringstream os;
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    SymmetricCryptoStream stream(os, CipherMode::Encrypt, cipher, srcLen);
    stream << ORIGINAL_SRC;
    stream.Finalize();

    ASSERT_STREQ(ComputePartialOutput().c_str(), os.str().c_str());
    ASSERT_EQ(1u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestDecyptSinkStreamLargeBufferDestructorFinalizes)
{
    std::ostringstream os;
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    {
        SymmetricCryptoStream stream(os, CipherMode::Decrypt, cipher, srcLen);
        stream << ORIGINAL_SRC;
    }

    ASSERT_STREQ(ComputePartialOutput().c_str(), os.str().c_str());
    ASSERT_EQ(0u, cipher.m_encryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(1u, cipher.m_decryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestDecryptSinkStreamLargeBufferExplicitFinalize)
{
    std::ostringstream os;
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t srcLen = strlen(ORIGINAL_SRC) + 1;

    SymmetricCryptoStream stream(os, CipherMode::Decrypt, cipher, srcLen);
    stream << ORIGINAL_SRC;
    stream.Finalize();

    ASSERT_STREQ(ComputePartialOutput().c_str(), os.str().c_str());
    ASSERT_EQ(0u, cipher.m_encryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(1u, cipher.m_decryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSrcStreamSeekBeginning)
{
    std::istringstream is(ORIGINAL_SRC);
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t bufferLen = strlen(TEST_RESPONSE_1) + 1;    

    SymmetricCryptoStream stream(is, CipherMode::Encrypt, cipher, bufferLen);

    Array<char> buffer(bufferLen);
    memset(buffer.GetUnderlyingData(), 0, buffer.GetLength());
    stream.read(buffer.GetUnderlyingData(), buffer.GetLength() - 1);

    ASSERT_STREQ(TEST_RESPONSE_1, buffer.GetUnderlyingData());
    stream.seekg(0, std::ios_base::beg);
    ASSERT_EQ(1u, cipher.m_resetCalledCount);
    ASSERT_EQ(0, stream.tellg());

    Aws::String encryptedOutput;
    stream >> encryptedOutput;

    ASSERT_STREQ(ComputeCompleteOutput().c_str(), encryptedOutput.c_str());
    //due to bufferLen size, we should have called 1 the first time, and then 2 times on the next read + 1 empty reads     
    ASSERT_EQ(4u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);    
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSrcStreamSeekBack)
{
    std::istringstream is(ORIGINAL_SRC);
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t bufferLen = strlen(TEST_RESPONSE_1) + 1;

    SymmetricCryptoStream stream(is, CipherMode::Encrypt, cipher, bufferLen);

    Array<char> buffer(bufferLen);
    memset(buffer.GetUnderlyingData(), 0, buffer.GetLength());
    stream.read(buffer.GetUnderlyingData(), buffer.GetLength() - 1);

    ASSERT_STREQ(TEST_RESPONSE_1, buffer.GetUnderlyingData());
    stream.seekg(10, std::ios_base::beg);
    ASSERT_EQ(1u, cipher.m_resetCalledCount);
    ASSERT_EQ(10, stream.tellg());

    Aws::String encryptedOutput;
    stream >> encryptedOutput;

    ASSERT_STREQ(ComputeCompleteOutput().c_str() + 10, encryptedOutput.c_str());
    //due to bufferLen size and the seek being less than one buffer, we should have called 1 the first time which was empty, and then 2 times on the next read + 2 empty reads 
    ASSERT_EQ(5u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSrcStreamSeekNop)
{
    std::istringstream is(ORIGINAL_SRC);
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t bufferLen = strlen(TEST_RESPONSE_1) + 1;

    SymmetricCryptoStream stream(is, CipherMode::Encrypt, cipher, bufferLen);

    Array<char> buffer(bufferLen);
    memset(buffer.GetUnderlyingData(), 0, buffer.GetLength());
    stream.read(buffer.GetUnderlyingData(), buffer.GetLength() - 1);

    ASSERT_STREQ(TEST_RESPONSE_1, buffer.GetUnderlyingData());
    stream.seekg(0, std::ios_base::cur);
    ASSERT_EQ(0u, cipher.m_resetCalledCount);
    ASSERT_EQ(buffer.GetLength(), stream.tellg());

    Aws::String fullOutput(buffer.GetUnderlyingData());
    Aws::String encryptedOutput;    
    stream >> encryptedOutput;
    fullOutput.append(encryptedOutput);


    ASSERT_STREQ(ComputeCompleteOutput().c_str(), fullOutput.c_str());
    //due to bufferLen size, we should have called 1 the first time, and then 1 on the next read + 1 empty read
    ASSERT_EQ(3u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSrcStreamSeekForward)
{
    std::istringstream is(ORIGINAL_SRC);
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t bufferLen = strlen(TEST_RESPONSE_1) + 1;

    SymmetricCryptoStream stream(is, CipherMode::Encrypt, cipher, bufferLen);

    Array<char> buffer(bufferLen);
    memset(buffer.GetUnderlyingData(), 0, buffer.GetLength());
    stream.read(buffer.GetUnderlyingData(), buffer.GetLength() - 1);

    ASSERT_STREQ(TEST_RESPONSE_1, buffer.GetUnderlyingData());
    stream.seekg(strlen(TEST_RESPONSE_2), std::ios_base::cur);
    ASSERT_EQ(0u, cipher.m_resetCalledCount);
    ASSERT_EQ(buffer.GetLength() + strlen(TEST_RESPONSE_2), stream.tellg());

    Aws::String fullOutput(buffer.GetUnderlyingData());
    Aws::String encryptedOutput;
    stream >> encryptedOutput;
    fullOutput.append(encryptedOutput);


    ASSERT_STREQ(ComputePartialOutput().c_str(), fullOutput.c_str());
    //due to bufferLen size, we should have called 1 the first time, and then 1 on the next read + 1 empty read    
    ASSERT_EQ(3u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}

TEST(CryptoStreamsTest, TestEncryptSrcStreamSeekEnd)
{
    std::istringstream is(ORIGINAL_SRC);
    MockSymmetricCipher cipher;
    InitMockCipher(cipher);
    size_t bufferLen = strlen(TEST_RESPONSE_1) + 1;

    SymmetricCryptoStream stream(is, CipherMode::Encrypt, cipher, bufferLen);

    stream.seekg(0, std::ios_base::end);
    ASSERT_EQ(0u, cipher.m_resetCalledCount);
    ASSERT_EQ(ComputeCompleteOutput().length(), stream.tellg());

    Aws::String encryptedOutput;
    stream >> encryptedOutput;    


    ASSERT_STREQ("", encryptedOutput.c_str());
    //due to bufferLen size, we should have called 2 on the seek + 1 empty reads 
    //because the src stream is larger than the buffers we've setup.
    ASSERT_EQ(3u, cipher.m_encryptCalledCount);
    ASSERT_EQ(1u, cipher.m_finalizeEncryptionCalledCount);
    ASSERT_EQ(0u, cipher.m_decryptCalledCount);
    ASSERT_EQ(0u, cipher.m_finalizeDecryptionCalledCount);
}