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
#include <aws/s3-encryption/materials/EncryptionMaterialsProvider.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/kms/KMSClient.h>
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            class AWS_S3ENCRYPTION_API KMSEncryptionMaterialsProvider : public EncryptionMaterialsProvider {
            public:
                KMSEncryptionMaterialsProvider(const Aws::String& customerMasterKeyID, const Aws::Client::ClientConfiguration& clientConfig);

                KMSEncryptionMaterialsProvider::KMSEncryptionMaterialsProvider(const Aws::String& customerMasterKeyID, const Aws::KMS::KMSClient& kmsClient = Aws::KMS::KMSClient());

                Aws::Utils::CryptoBuffer EncryptCEK(Aws::Utils::CryptoBuffer contentKey) override;

                Aws::Utils::CryptoBuffer DecryptCEK(Aws::Utils::CryptoBuffer contentKey) override;

                const EncryptionMaterials FetchEncryptionMaterials() override;
            private:
                Aws::String m_customerMasterKeyID;
                //Aws::KMS::KMSClient m_kmsClient;
                Aws::KMS::KMSClient m_kmsClient;
            };
        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws
