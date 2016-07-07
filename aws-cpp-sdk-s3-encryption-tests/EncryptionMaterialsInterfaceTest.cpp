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


//This is a simple encryption materials encrypt test using a generated symmetric master key. This test is assuming the key wrap algorithm is not implemented yet, 
//    and that the encrypt calls will return an emtpy crypto buffer. 
TEST_F(SimpleEncryptionMaterialsInterfaceTest, EncryptTest) {
    auto masterKey = SymmetricCipher::GenerateKey();

    SimpleEncryptionMaterials encryptionMaterialsProvider(masterKey);
    //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
    ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CTR);
    auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
    
    encryptionMaterialsProvider.EncryptCEK(contentCryptoMaterial);

    auto encryptedContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);
    ASSERT_NE(contentEncryptionKey, CryptoBuffer());
    //Should be empty cryptobuffer for now until key wrap is implemented. 
    ASSERT_EQ(encryptedContentEncryptionKey, CryptoBuffer());
}

//This is a simple encryption materials decrypt test using a generated symmetric master key. This test is assuming the key wrap algorithm is not implemented yet, 
//    and that the encrypt calls will return an emtpy crypto buffer. 
TEST_F(SimpleEncryptionMaterialsInterfaceTest, DecryptTest) {
    auto masterKey = SymmetricCipher::GenerateKey();

    SimpleEncryptionMaterials encryptionMaterialsProvider(masterKey);
    //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
    ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CTR);
    auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    encryptionMaterialsProvider.DecryptCEK(contentCryptoMaterial);

    auto encryptedContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

    ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);
    ASSERT_NE(contentEncryptionKey, CryptoBuffer());
    //Should be empty cryptobuffer for now until key wrap is implemented. 
    ASSERT_EQ(encryptedContentEncryptionKey, CryptoBuffer());
}
}

