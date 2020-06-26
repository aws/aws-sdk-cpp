/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/utils/crypto/EncryptionMaterials.h>
#include <aws/core/utils/crypto/ContentCryptoMaterial.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/kms/KMSClient.h>
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
            //identifier for materials description
            extern AWS_S3ENCRYPTION_API const char* cmkID_Identifier;
            extern AWS_S3ENCRYPTION_API const char* kmsEncryptionContextKey;

            /*
            * KMS Encryption Materials is responsible for handling the encryption/decryption of
            * content encryption keys using KMS. This class will use a user provided customer
            * master key ID to encrypt/decrypt keys. It also allows the user to pass in their
            * own KMS Client, or a Client Configuration where it will create a KMS Client
            * with that configuration.
            */
            class AWS_S3ENCRYPTION_API KMSEncryptionMaterialsBase : public Aws::Utils::Crypto::EncryptionMaterials
            {
            public:
                /*
                Initialize with customer master key ID and client configuration. If no configuration is supplied, then use the default.
                Client configuration will be used to setup KMS Client.
                */
                KMSEncryptionMaterialsBase(const Aws::String& customerMasterKeyID, const Aws::Client::ClientConfiguration& clientConfig = Aws::Client::ClientConfiguration());

                /*
                Initialize with customer master key ID and KMS Client.
                */
                KMSEncryptionMaterialsBase(const Aws::String& customerMasterKeyID, const std::shared_ptr<Aws::KMS::KMSClient>& kmsClient);

                /*
                * This will encrypt the cek by calling to KMS. This will occur in place.
                * It will set the key ID to the current customer master key ID and also set the encryption context to the materials
                * description.
                * A invalid customer master key ID will result in an empty content encryption key.
                */
                Aws::Utils::Crypto::CryptoOutcome EncryptCEK(Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;

                /*
                * This will decrypt the cek by calling to KMS. This will occur in place.
                * It will check to make sure that the key wrap algorithm is KMS and that the materials description matches
                * the identifier + customer master key ID. It will then decrypt.
                * A invalid customer master key ID will result in an empty content encryption key.
                */
                Aws::Utils::Crypto::CryptoOutcome DecryptCEK(Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;

            protected:
                virtual bool ValidateDecryptCEKMaterials(const Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) const;

                Aws::String m_customerMasterKeyID;
                std::shared_ptr<Aws::KMS::KMSClient> m_kmsClient;
            };

            class AWS_DEPRECATED("This class has been deprecated due to security reason") AWS_S3ENCRYPTION_API KMSEncryptionMaterials : public KMSEncryptionMaterialsBase
            {
            public:
                KMSEncryptionMaterials(const Aws::String& customerMasterKeyID, const Aws::Client::ClientConfiguration& clientConfig = Aws::Client::ClientConfiguration())
                    : KMSEncryptionMaterialsBase(customerMasterKeyID, clientConfig) {}

                KMSEncryptionMaterials(const Aws::String& customerMasterKeyID, const std::shared_ptr<Aws::KMS::KMSClient>& kmsClient)
                    : KMSEncryptionMaterialsBase(customerMasterKeyID, kmsClient) {}
            };


            class AWS_S3ENCRYPTION_API KMSWithContextEncryptionMaterials : public KMSEncryptionMaterialsBase
            {
            public:
                KMSWithContextEncryptionMaterials(const Aws::String& customerMasterKeyID, const Aws::Client::ClientConfiguration& clientConfig = Aws::Client::ClientConfiguration())
                    : KMSEncryptionMaterialsBase(customerMasterKeyID, clientConfig) {}

                KMSWithContextEncryptionMaterials(const Aws::String& customerMasterKeyID, const std::shared_ptr<Aws::KMS::KMSClient>& kmsClient)
                    : KMSEncryptionMaterialsBase(customerMasterKeyID, kmsClient) {}

                Aws::Utils::Crypto::CryptoOutcome EncryptCEK(Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;
            protected:
                virtual bool ValidateDecryptCEKMaterials(const Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) const override;
            };
        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws
