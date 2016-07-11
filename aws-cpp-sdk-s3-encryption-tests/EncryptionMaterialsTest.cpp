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
#include <aws/s3-encryption/materials/EncryptionMaterials.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/ContentCryptoMaterial.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/kms/KMSClient.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/ClientConfiguration.h>

using namespace Aws::Client;
using namespace Aws::Utils::Crypto;
using namespace Aws::Utils;
using namespace Aws::S3Encryption::Materials;
using namespace Aws::S3Encryption;
using namespace Aws::KMS;
using namespace Aws::KMS::Model;

//mock KMS client to handle encrypt and decrypt calls
class MockKMSClient : public KMSClient
{
public:
    MockKMSClient(ClientConfiguration clientConfiguration = ClientConfiguration()) : 
       m_encryptCalledCount(0), m_decryptCalledCount(0)
    {
    }

    EncryptOutcome Encrypt(const EncryptRequest&) const override
    {
        m_encryptCalledCount++;
        return EncryptOutcome();
    }
    DecryptOutcome Decrypt(const DecryptRequest&) const override
    {
        m_decryptCalledCount++;
        return DecryptOutcome();
    }
    //member varibles need to be mutable since Encrypt and Decrypt are const functions
    mutable size_t m_encryptCalledCount;
    mutable size_t m_decryptCalledCount;
};

namespace 
{
//No current functions.
class SimpleEncryptionMaterialsTest : public ::testing::Test {};
class KMSEncryptionMaterialsTest : public ::testing::Test {};

//This is a simple encryption materials encrypt test using a generated symmetric master key with the same encryption materials.
TEST_F(SimpleEncryptionMaterialsTest, EncryptDecryptTest) 
{
    auto masterKey = SymmetricCipher::GenerateKey();
    auto cek = SymmetricCipher::GenerateKey();

    SimpleEncryptionMaterials encryptionMaterials(masterKey);
    //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
    ContentCryptoMaterial contentCryptoMaterial(cek, ContentCryptoScheme::CTR);
    auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
    
    encryptionMaterials.EncryptCEK(contentCryptoMaterial);

    auto encryptedContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);
    
    encryptionMaterials.DecryptCEK(contentCryptoMaterial);
    auto decryptedContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    ASSERT_EQ(contentEncryptionKey.GetLength(), decryptedContentEncryptionKey.GetLength());
    ASSERT_EQ(decryptedContentEncryptionKey, contentEncryptionKey);
}

//This tests Simple Encryption Materials by attempting to encrypt and decrypt with seperate
//    materials which have the same master key. 
TEST_F(SimpleEncryptionMaterialsTest, EncryptDecrypyWithDifferentMaterials)
{
    auto masterKey = SymmetricCipher::GenerateKey();

    SimpleEncryptionMaterials encryptionMaterials(masterKey);
    //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
    ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CTR);
    auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    encryptionMaterials.EncryptCEK(contentCryptoMaterial);

    auto encryptedContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

    SimpleEncryptionMaterials otherEncryptionMaterials(masterKey);

    otherEncryptionMaterials.DecryptCEK(contentCryptoMaterial);
    auto decryptedContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    ASSERT_EQ(contentEncryptionKey.GetLength(), decryptedContentEncryptionKey.GetLength());
    ASSERT_EQ(decryptedContentEncryptionKey, contentEncryptionKey);
}

//This tests Simple Encryption Materials by using different materials with different master keys
//  and making sure the decrypted key is not correct.
TEST_F(SimpleEncryptionMaterialsTest, EncryptDecryptWithDifferentKeys) 
{
    auto masterKey = SymmetricCipher::GenerateKey();
    auto otherMasterKey = SymmetricCipher::GenerateKey();

    SimpleEncryptionMaterials encryptionMaterials(masterKey);
    //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
    ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CTR);
    auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    encryptionMaterials.EncryptCEK(contentCryptoMaterial);

    auto encryptedContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

    SimpleEncryptionMaterials otherEncryptionMaterials(otherMasterKey);

    otherEncryptionMaterials.DecryptCEK(contentCryptoMaterial);
    auto decryptedContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
    ASSERT_EQ(decryptedContentEncryptionKey.GetLength(), 0u);
    ASSERT_NE(contentEncryptionKey.GetLength(), decryptedContentEncryptionKey.GetLength());
    ASSERT_NE(decryptedContentEncryptionKey, contentEncryptionKey);
}

//This tests KMS Encryption Materials Encrypt CEK by using a mock KMS Client to count encrypt and decrypt calls.
TEST_F(KMSEncryptionMaterialsTest, TestEncryptCEK) 
{
    Aws::String testCmkID = "someRandomCustomerMasterKeyID";
    auto myClient = std::make_shared<MockKMSClient>(ClientConfiguration());
    KMSEncryptionMaterials encryptionMaterials(testCmkID, myClient);
    
    ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CBC);
    auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    encryptionMaterials.EncryptCEK(contentCryptoMaterial);

    auto encryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();

    ASSERT_NE(contentEncryptionKey, encryptedContentKey);
    ASSERT_EQ(encryptedContentKey, 0u);
    ASSERT_EQ(myClient->m_encryptCalledCount, 1);
    ASSERT_EQ(myClient->m_decryptCalledCount, 0);
}

//This tests KMS Encryption Materials Decrypt CEK by using a mock KMS Client to count encrypt and decrypt calls.
TEST_F(KMSEncryptionMaterialsTest, TestDecryptCEK)
{
    Aws::String testCmkID = "someRandomCustomerMasterKeyID";
    auto myClient = std::make_shared<MockKMSClient>(Aws::Client::ClientConfiguration());
    KMSEncryptionMaterials encryptionMaterials(testCmkID, myClient);

    ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::GCM);
    contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS);
    contentCryptoMaterial.AddMaterialsDescription(cmkID_Identifier, testCmkID);
    auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    encryptionMaterials.DecryptCEK(contentCryptoMaterial);

    auto decryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();

    ASSERT_NE(contentEncryptionKey, decryptedContentKey);
    ASSERT_EQ(decryptedContentKey, 0u);
    ASSERT_EQ(myClient->m_decryptCalledCount, 1);
    ASSERT_EQ(myClient->m_encryptCalledCount, 0);
}
    
}

