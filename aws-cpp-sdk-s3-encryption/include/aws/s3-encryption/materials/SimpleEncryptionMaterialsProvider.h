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

namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            class AWS_S3ENCRYPTION_API SimpleEncryptionMaterialsProvider : public EncryptionMaterialsProvider {
            public:
                /*
                Initialize with symmetric key and materials description. If a materials description is not provided, provide an empty string.
                */
                SimpleEncryptionMaterialsProvider(const Aws::Utils::CryptoBuffer& symmetricKey, const Aws::String& materialsDescription = "");

                Aws::Utils::CryptoBuffer EncryptCEK(Aws::Utils::CryptoBuffer contentKey) override;

                Aws::Utils::CryptoBuffer DecryptCEK(Aws::Utils::CryptoBuffer contentKey) override;

                const EncryptionMaterials FetchEncryptionMaterials() override;

                /**
                * Description used to identify master key.
                */
                inline const Aws::String& GetMaterialsDescription() const { return m_materialsDescription; }
            private:
                Aws::Utils::CryptoBuffer m_symmetricKey;
                Aws::String m_materialsDescription;
            };
        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws