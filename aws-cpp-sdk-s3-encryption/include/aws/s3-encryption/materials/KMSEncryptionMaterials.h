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
#pragma once
#include <aws/s3-encryption/materials/EncryptionMaterials.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/s3-encryption/ContentCryptoMaterial.h>
#include <aws/kms/KMSClient.h>
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            static const char* KMSEncryptionMaterials_Tag = "KMSEncryptionMaterials";
            //identifier for materials description
            static const char* cmkID_Identifier = "kms_cmk_id";

            class AWS_S3ENCRYPTION_API KMSEncryptionMaterials : public EncryptionMaterials 
            {
            public:
                /*
                Initialize with customer master key ID and client configuration. If no configuration is supplied, then use the default.
                Client configuration will be used to setup KMS Client.
                */
                KMSEncryptionMaterials(const Aws::String& customerMasterKeyID, const Aws::Client::ClientConfiguration& clientConfig = Aws::Client::ClientConfiguration());

                /*
                Initialize with customer master key ID and KMS Client.
                */
                KMSEncryptionMaterials(const Aws::String& customerMasterKeyID, const std::shared_ptr<Aws::KMS::KMSClient>& kmsClient);

                /*
                * This will encrypt the cek by calling to KMS. This will occur in place. 
                * It will set the key ID to the current customer master key ID and also set the encryption context to the materials
                * description.
                * A invalid customer master key ID will result in an empty content encryption key.
                */
                void EncryptCEK(Aws::S3Encryption::ContentCryptoMaterial& contentCryptoMaterial);

                /*
                * This will decrypt the cek by calling to KMS. This will occur in place. 
                * It will check to make sure that the key wrap algorithm is KMS and that the materials description matches
                * the identifier + customer master key ID. It will then decrypt. 
                * A invalid customer master key ID will result in an empty content encryption key.
                */
                void DecryptCEK(Aws::S3Encryption::ContentCryptoMaterial& contentCryptoMaterial);

            private:
                const Aws::String m_customerMasterKeyID;
                const std::shared_ptr<Aws::KMS::KMSClient> m_kmsClient;
            };
        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws
