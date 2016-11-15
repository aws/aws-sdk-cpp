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

#ifndef NO_SYMMETRIC_ENCRYPTION

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/crypto/CryptoBuf.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/crypto/EncryptionMaterials.h>
#include <aws/core/utils/crypto/ContentCryptoMaterial.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
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

static const char* AllocationTag = "EncryptionMaterialsTest";
static Aws::String TEST_CMK_ID = "ARN:SOME_COMBINATION_OF_LETTERS_AND_NUMBERS";

//mock KMS client to handle encrypt and decrypt calls
class MockKMSClient : public KMSClient
{
public:
    MockKMSClient(ClientConfiguration clientConfiguration = ClientConfiguration()) :
        KMSClient(Aws::Auth::AWSCredentials("", ""), clientConfiguration), m_encryptCalledCount(0), m_decryptCalledCount(0)
    {
    }

    EncryptOutcome Encrypt(const EncryptRequest&) const override
    {
        m_encryptCalledCount++;
        return PopulateSuccessfulEncryptOutcome();
    }
    DecryptOutcome Decrypt(const DecryptRequest&) const override
    {
        m_decryptCalledCount++;
        return PopulateSuccessfulDecryptOutcome();
    }

    void PopulateFields(const Aws::String& customerMasterKeyID, const CryptoBuffer& encryptedKey, const CryptoBuffer& decryptedKey)
    {
        m_customerMasterKeyID = customerMasterKeyID;
        m_encryptedKey = encryptedKey;
        m_decryptedKey = decryptedKey;
    }

    //member varibles need to be mutable since Encrypt and Decrypt are const functions
    mutable size_t m_encryptCalledCount;
    mutable size_t m_decryptCalledCount;
    Aws::String m_customerMasterKeyID;
    CryptoBuffer m_encryptedKey;
    CryptoBuffer m_decryptedKey;

private:
    EncryptOutcome PopulateSuccessfulEncryptOutcome() const
    {
        EncryptOutcome outcome;
        EncryptResult result(outcome.GetResult());
        result.SetCiphertextBlob(m_encryptedKey);
        result.SetKeyId(m_customerMasterKeyID);
        return result;
    }

    DecryptOutcome PopulateSuccessfulDecryptOutcome() const
    {
        DecryptOutcome outcome;
        DecryptResult result(outcome.GetResult());
        result.SetPlaintext(m_decryptedKey);
        result.SetKeyId(m_customerMasterKeyID);
        return result;
    }
};

static void InitMockKMSClient(std::shared_ptr<MockKMSClient>& client)
{
    client->PopulateFields(TEST_CMK_ID, SymmetricCipher::GenerateKey(), SymmetricCipher::GenerateKey());
}

namespace
{
    //No current functions.
    class SimpleEncryptionMaterialsTest : public ::testing::Test {};
    class KMSEncryptionMaterialsTest : public ::testing::Test {};

    //This is a simple encryption materials encrypt test using a generated symmetric master key with the same encryption materials.
    TEST_F(SimpleEncryptionMaterialsTest, EncryptDecryptSuccessTest)
    {
        auto masterKey = SymmetricCipher::GenerateKey();
        auto cek = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterials encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(cek, ContentCryptoScheme::CTR);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto encryptBuffer = cipher->EncryptBuffer(cek);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        ASSERT_EQ(finalizeEncryptBuffer, encryptedContentEncryptionKey);

        //creating a new content crypto material since this is how encryption and decryption will be implemented
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);

        ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();

        cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto decryptBuffer = cipher->DecryptBuffer(finalizeEncryptBuffer);
        auto finalizeDecryptBuffer = cipher->FinalizeDecryption();
        ASSERT_EQ(finalizeDecryptBuffer, decryptedContentEncryptionKey);

        ASSERT_EQ(contentEncryptionKey.GetLength(), decryptedContentEncryptionKey.GetLength());
        //Test for success by comparing decrypted key to original key
        ASSERT_EQ(decryptedContentEncryptionKey, contentEncryptionKey);
    }

    //This tests Simple Encryption Materials by attempting to encrypt and decrypt with seperate
    //    materials which have the same master key. 
    TEST_F(SimpleEncryptionMaterialsTest, EncryptDecrypyWithDifferentMaterialsSuccess)
    {
        auto masterKey = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterials encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CTR);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto encryptBuffer = cipher->EncryptBuffer(contentEncryptionKey);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        ASSERT_EQ(finalizeEncryptBuffer, encryptedContentEncryptionKey);

        //creating a new content crypto material since this is how encryption and decryption will be implemented
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);

        ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

        SimpleEncryptionMaterials otherEncryptionMaterials(masterKey);

        otherEncryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();

        cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto decryptBuffer = cipher->DecryptBuffer(finalizeEncryptBuffer);
        auto finalizeDecryptBuffer = cipher->FinalizeDecryption();
        ASSERT_EQ(finalizeDecryptBuffer, decryptedContentEncryptionKey);

        ASSERT_EQ(contentEncryptionKey.GetLength(), decryptedContentEncryptionKey.GetLength());
        //Test for success by comparing decrypted key to original key
        ASSERT_EQ(decryptedContentEncryptionKey, contentEncryptionKey);
    }

    //This tests Simple Encryption Materials by using different materials with different master keys
    //  and making sure the decrypted key is not correct.
    TEST_F(SimpleEncryptionMaterialsTest, EncryptDecryptWithDifferentKeysFailure)
    {
        auto masterKey = SymmetricCipher::GenerateKey();
        auto otherMasterKey = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterials encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CTR);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto encryptBuffer = cipher->EncryptBuffer(contentEncryptionKey);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        ASSERT_EQ(finalizeEncryptBuffer, encryptedContentEncryptionKey);

        //creating a new content crypto material since this is how encryption and decryption will be implemented
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);

        ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

        SimpleEncryptionMaterials otherEncryptionMaterials(otherMasterKey);

        otherEncryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();

        cipher = CreateAES_KeyWrapImplementation(otherMasterKey);
        auto decryptBuffer = cipher->DecryptBuffer(finalizeEncryptBuffer);
        auto finalizeDecryptBuffer = cipher->FinalizeDecryption();
        ASSERT_EQ(finalizeDecryptBuffer, decryptedContentEncryptionKey);

        ASSERT_EQ(decryptedContentEncryptionKey.GetLength(), 0u);
        ASSERT_NE(contentEncryptionKey.GetLength(), decryptedContentEncryptionKey.GetLength());
        //Test for failure by comparing decrypted key to original key
        ASSERT_NE(decryptedContentEncryptionKey, contentEncryptionKey);
    }

    //This test simple encryption materials by setting the key wrap algorithm to KMS to see if 
    //  it will not decrypt the encrypted content encryption key.
    TEST_F(SimpleEncryptionMaterialsTest, EncryptDecryptWithWrongKeyWrapAlgorithm)
    {
        auto masterKey = SymmetricCipher::GenerateKey();
        auto cek = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterials encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(cek, ContentCryptoScheme::CTR);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto encryptBuffer = cipher->EncryptBuffer(contentEncryptionKey);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        ASSERT_EQ(finalizeEncryptBuffer, encryptedContentEncryptionKey);

        //creating a new content crypto material since this is how encryption and decryption will be implemented
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS);

        ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();

        ASSERT_EQ(decryptedContentEncryptionKey.GetLength(), 0u);
        ASSERT_EQ(encryptedContentCryptoMaterial.GetEncryptedContentEncryptionKey(), encryptedContentEncryptionKey);
    }

    //This tests KMS Encryption Materials Encrypt CEK by using a KMS Client with an invalid customer
    //  master key which will cause an error and the content encryption key will not be encrypted.
    TEST_F(KMSEncryptionMaterialsTest, TestEncryptCEKInvalidCmkID)
    {
        Aws::String testCmkID = "someRandomCustomerMasterKeyID";
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        KMSEncryptionMaterials encryptionMaterials(testCmkID, myClient);

        ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CBC);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto newContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        //make sure that the content encryption key never changed since KMS will fail
        // with an invalid customer master key ID
        ASSERT_EQ(contentEncryptionKey, newContentEncryptionKey);
    }

    //This tests KMS Encryption Materials Encrypt CEK by using a mock KMS Client to count encrypt and decrypt calls.
    // This also test for a successful outcome for encrypt and decrypt calls.
    TEST_F(KMSEncryptionMaterialsTest, TestMockEncryptDecryptCEK)
    {
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        InitMockKMSClient(myClient);

        KMSEncryptionMaterials encryptionMaterials(TEST_CMK_ID, myClient);

        ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CBC);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
        encryptionMaterials.EncryptCEK(contentCryptoMaterial);
        auto encryptedContentKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, encryptedContentKey);

        //Use separate crypto material for decryption but add fields to test
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetMaterialsDescription(contentCryptoMaterial.GetMaterialsDescription());
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS);
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentKey);

        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(encryptedContentKey, decryptedContentKey);

        ASSERT_EQ(myClient->m_encryptCalledCount, 1u);
        ASSERT_EQ(myClient->m_decryptCalledCount, 1u);
        ASSERT_NE(contentEncryptionKey, encryptedContentKey);
        ASSERT_NE(encryptedContentKey, decryptedContentKey);
    }

    //This tests KMS Encryption Materials Decrypt CEK by using a mock KMS Client with an invalid customer master key.
    TEST_F(KMSEncryptionMaterialsTest, TestInvalidKeyWrapAlgorithmDecryptCEK)
    {
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        KMSEncryptionMaterials encryptionMaterials(TEST_CMK_ID, myClient);

        ContentCryptoMaterial contentCryptoMaterial;
        contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);
        contentCryptoMaterial.AddMaterialsDescription(cmkID_Identifier, TEST_CMK_ID);
        //randomly generate an encrypted content encryption key
        contentCryptoMaterial.SetEncryptedContentEncryptionKey(SymmetricCipher::GenerateKey());
        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        encryptionMaterials.DecryptCEK(contentCryptoMaterial);

        auto decryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();

        ASSERT_EQ(decryptedContentKey.GetLength(), 0u);
        ASSERT_NE(encryptedContentEncryptionKey, decryptedContentKey);
        ASSERT_EQ(encryptedContentEncryptionKey, contentCryptoMaterial.GetEncryptedContentEncryptionKey());
        //Decrypt returns early, so counter not incremented
        ASSERT_EQ(myClient->m_decryptCalledCount, 0u);
        ASSERT_EQ(myClient->m_encryptCalledCount, 0u);
    }

    //This tests KMS Encryption Materials Decrypt CEK by using a mock KMS Client with an invalid materials description.
    TEST_F(KMSEncryptionMaterialsTest, TestInvalidMaterialsDescriptionDecryptCEK)
    {
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        KMSEncryptionMaterials encryptionMaterials(TEST_CMK_ID, myClient);

        ContentCryptoMaterial contentCryptoMaterial;
        contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS);
        //Add a blank materials description
        contentCryptoMaterial.AddMaterialsDescription(cmkID_Identifier, "");
        //randomly generate an encrypted content encryption key
        contentCryptoMaterial.SetEncryptedContentEncryptionKey(SymmetricCipher::GenerateKey());
        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        encryptionMaterials.DecryptCEK(contentCryptoMaterial);

        auto decryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();

        ASSERT_EQ(decryptedContentKey.GetLength(), 0u);
        ASSERT_NE(encryptedContentEncryptionKey, decryptedContentKey);
        ASSERT_EQ(encryptedContentEncryptionKey, contentCryptoMaterial.GetEncryptedContentEncryptionKey());
        //Decrypt returns early, so counter not incremented
        ASSERT_EQ(myClient->m_decryptCalledCount, 0u);
        ASSERT_EQ(myClient->m_encryptCalledCount, 0u);
    }

    //This tests KMS Encryption Materials Decrypt CEK by using a mock KMS Client with a missing encrypted key.
    TEST_F(KMSEncryptionMaterialsTest, TestMissingEncryptedContentKeyDecryptCEK)
    {
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        KMSEncryptionMaterials encryptionMaterials(TEST_CMK_ID, myClient);

        ContentCryptoMaterial contentCryptoMaterial;
        //Have a crypto material with no encrypted key
        contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS);
        contentCryptoMaterial.AddMaterialsDescription(cmkID_Identifier, TEST_CMK_ID);
        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        encryptionMaterials.DecryptCEK(contentCryptoMaterial);

        auto decryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();

        ASSERT_EQ(decryptedContentKey.GetLength(), 0u);
        ASSERT_EQ(encryptedContentEncryptionKey, contentCryptoMaterial.GetEncryptedContentEncryptionKey());
        //Decrypt returns early, so counter not incremented
        ASSERT_EQ(myClient->m_decryptCalledCount, 0u);
        ASSERT_EQ(myClient->m_encryptCalledCount, 0u);
    }
}

#endif