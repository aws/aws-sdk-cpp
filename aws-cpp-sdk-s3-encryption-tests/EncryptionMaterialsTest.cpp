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
#include <aws/core/Aws.h>
#include <aws/core/utils/crypto/CryptoBuf.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3-encryption/materials/EncryptionMaterialsProvider.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterialsProvider.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterialsProvider.h>
#include <aws/core/utils/memory/stl/AWSQueue.h>
#include <aws/kms/KMSClient.h>

using namespace Aws::Utils::Crypto;
using namespace Aws::Utils;
using namespace Aws::S3Encryption::Materials;
using namespace Aws::KMS;


class MockSymmetricCipher : public SymmetricCipher
{
public:
    MockSymmetricCipher() : SymmetricCipher(SymmetricCipher::GenerateKey(), SymmetricCipher::GenerateIV(16)),
        m_resetCalledCount(0), m_encryptCalledCount(0),
        m_decryptCalledCount(0), m_finalizeEncryptionCalledCount(0), m_finalizeDecryptionCalledCount(0)
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

using namespace Aws::S3Encryption;
class EncryptionMaterialsProviderTest : public ::testing::Test
{
public:

protected:

};
/*
This is a simple implementation using the same encryption materials with a master key
and description.
*/
TEST_F(EncryptionMaterialsProviderTest, SimpleEncryptionMaterialsTestWithMaterialDescription) {
    auto contentKey = SymmetricCipher::GenerateKey();
    auto masterKey = SymmetricCipher::GenerateKey();
    auto description = "myUserSymmetricMasterKey";

    SimpleEncryptionMaterialsProvider encryptionMaterials(masterKey, description);

    auto encryptedCEK = encryptionMaterials.EncryptCEK(contentKey);

    ASSERT_NE(contentKey, encryptedCEK);

    //auto decryptedCEK = encryptionMaterials.DecryptCEK(encryptedCEK);

    //ASSERT_EQ(contentKey, decryptedCEK);

}

/*
This is the same implementation as the previous one but excluding a description material.
*/
TEST_F(EncryptionMaterialsProviderTest, SimpleEncryptionMaterialsTestWithoutMaterialDescription) {
    auto contentKey = SymmetricCipher::GenerateKey();
    auto masterKey = SymmetricCipher::GenerateKey();

    SimpleEncryptionMaterialsProvider encryptionMaterials(masterKey);
    auto encryptedCEK = encryptionMaterials.EncryptCEK(contentKey);

    ASSERT_NE(contentKey, encryptedCEK);
    //auto decryptedCEK = encryptionMaterials.DecryptCEK(encryptedCEK);

   // ASSERT_EQ(contentKey, decryptedCEK);
}

/*
This is an implementation using seperate encryption and decryption materials.
*/
TEST_F(EncryptionMaterialsProviderTest, SimpleEncryptionMaterialsTestSeperateMaterials) {
    auto contentKey = SymmetricCipher::GenerateKey();
    auto masterKey = SymmetricCipher::GenerateKey();

    SimpleEncryptionMaterialsProvider encryptionMaterials(masterKey);
    auto encryptedCEK = encryptionMaterials.EncryptCEK(contentKey);

    //grab iv -- not needed for keywrap but this test is necessary once key wrap is available.
    //auto iv = encryptionMaterials.FetchEncryptionMaterials().GetIV();

    ASSERT_NE(contentKey, encryptedCEK);

    //SimpleEncryptionMaterialsProvider decryptionMaterials(masterKey); //iv temporary
    //auto decryptedCEK = decryptionMaterials.DecryptCEK(encryptedCEK);

    //ASSERT_EQ(contentKey, decryptedCEK);
}

TEST_F(EncryptionMaterialsProviderTest, KMSEncryptionMaterialsProviderEncrypt) {
    //KMSClient testClient;
    KMSClient testClient;
    const Aws::String customerKey = "Hello";
    KMSEncryptionMaterialsProvider materialsProvider(customerKey, testClient);
    KMSEncryptionMaterialsProvider materials2(customerKey);
    CreateAES_CBCImplementation(SymmetricCipher::GenerateKey());

}

