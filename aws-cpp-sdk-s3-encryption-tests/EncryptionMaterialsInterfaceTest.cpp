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
#include <aws/s3-encryption/materials/EncryptionMaterialsInterface.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/ContentCryptoMaterial.h>

using namespace Aws::Utils::Crypto;
using namespace Aws::Utils;
using namespace Aws::S3Encryption::Materials;
using namespace Aws::S3Encryption;

namespace 
{
//No current functions.
class SimpleEncryptionMaterialsInterfaceTest : public ::testing::Test {};


//This is a simple encryption materials encrypt test using a generated symmetric master key with the same encryption materials.
TEST_F(SimpleEncryptionMaterialsInterfaceTest, EncryptDecryptTest) {
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
}

//This tests Simple Encryption Materials by attempting to encrypt and decrypt with seperate
//    materials which have the same master key. 
TEST_F(SimpleEncryptionMaterialsInterfaceTest, EncryptDecrypyWithDifferentMaterials) {
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
}

//This tests Simple Encryption Materials by 
TEST_F(SimpleEncryptionMaterialsInterfaceTest, EncryptDecrypyWithDifferentKeys) {
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
}
}

