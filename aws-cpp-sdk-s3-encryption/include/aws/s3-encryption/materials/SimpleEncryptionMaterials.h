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
#pragma once
#include <aws/core/utils/crypto/EncryptionMaterials.h>
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>

#if defined(_MSC_VER) && (_MSC_VER <= 1900 )
#pragma warning (disable : 4996)
#endif
namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            /*
            * Simple Encryption Materials is responsible for handling the encryption/decryption of
            * content encryption keys. This class will use a user provided symmetric
            * master key to encrypt/decrypt keys with AES Key Wrap.
            */
            class AWS_S3ENCRYPTION_API SimpleEncryptionMaterialsBase : public Aws::Utils::Crypto::EncryptionMaterials
            {
            public:
                /*
                Initialize with symmetric key.
                */
                SimpleEncryptionMaterialsBase(const Aws::Utils::CryptoBuffer& symmetricKey);

                /*
                * This will encrypt the cek within the Content Crypto material and KeyWrapAlgorithm within the Content Crypto Material.
                * This will occur in place and will directly manipulate the content crypto material passed to it.
                */
                Aws::Utils::Crypto::CryptoOutcome EncryptCEK(Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;

                /*
                * This will decrypt the cek with the symmetric master key.
                * This will occur in place and will directly manipulate the content crypto material passed to it.
                */
                Aws::Utils::Crypto::CryptoOutcome DecryptCEK(Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;

            protected:
                virtual std::shared_ptr<Aws::Utils::Crypto::SymmetricCipher> CreateCipher(Aws::Utils::Crypto::ContentCryptoMaterial&, bool) const;

                virtual Aws::Utils::Crypto::KeyWrapAlgorithm GetKeyWrapAlgorithm() const;

                Aws::Utils::CryptoBuffer m_symmetricMasterKey;
            };

            class AWS_DEPRECATED("This class has been deprecated due to security reason") AWS_S3ENCRYPTION_API SimpleEncryptionMaterials : public SimpleEncryptionMaterialsBase
            {
            public:
                SimpleEncryptionMaterials(const Aws::Utils::CryptoBuffer& symmetricKey) 
                    : SimpleEncryptionMaterialsBase(symmetricKey) {}
            };

            class AWS_S3ENCRYPTION_API SimpleEncryptionMaterialsWithGCMAAD : public SimpleEncryptionMaterialsBase
            {
            public:
                SimpleEncryptionMaterialsWithGCMAAD(const Aws::Utils::CryptoBuffer& symmetricKey) 
                    : SimpleEncryptionMaterialsBase(symmetricKey) {}
                    
            protected:
                std::shared_ptr<Aws::Utils::Crypto::SymmetricCipher> CreateCipher(Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial, bool encrypt) const override;

                Aws::Utils::Crypto::KeyWrapAlgorithm GetKeyWrapAlgorithm() const override;
            };

        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws
