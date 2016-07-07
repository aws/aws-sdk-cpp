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
#include <aws/s3-encryption/materials/SimpleEncryptionMaterialsProvider.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

namespace Aws
{
namespace S3Encryption
{
namespace Materials
{
    SimpleEncryptionMaterialsProvider::SimpleEncryptionMaterialsProvider(const Aws::Utils::CryptoBuffer & symmetricKey, const Aws::String & materialsDescription):
        m_symmetricKey(symmetricKey), m_materialsDescription(materialsDescription)
    {
    }

    CryptoBuffer SimpleEncryptionMaterialsProvider::EncryptCEK(CryptoBuffer contentKey)
    {
        //use keywrap
        std::shared_ptr<Utils::Crypto::SymmetricCipher> cipher; //This will change to encrypt using keywrap.
        //auto cipher = CreateAES_CTRImplementation(m_symmetricKey);
        auto part1 = cipher->EncryptBuffer(contentKey);
        auto part2 = cipher->FinalizeEncryption();
        return CryptoBuffer({ &part1, &part2 });
    }

    CryptoBuffer SimpleEncryptionMaterialsProvider::DecryptCEK(CryptoBuffer contentKey)
    {
        //use keywrap
        std::shared_ptr<Utils::Crypto::SymmetricCipher> cipher; 
        //auto cipher = CreateAES_CTRImplementation(m_symmetricKey);
        auto part1 = cipher->DecryptBuffer(contentKey);
        auto part2 = cipher->FinalizeDecryption();
        return CryptoBuffer({ &part1, &part2 });
    }

    const EncryptionMaterials SimpleEncryptionMaterialsProvider::FetchEncryptionMaterials() {
        EncryptionMaterials materials(m_symmetricKey);
        return materials;
    }
}
}
}