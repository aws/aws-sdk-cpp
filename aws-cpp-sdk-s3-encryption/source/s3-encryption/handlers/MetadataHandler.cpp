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
#include <aws/s3-encryption/handlers/MetadataHandler.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::S3::Model;
using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;
using namespace Aws::Utils::Crypto::ContentCryptoSchemeMapper;
using namespace Aws::Utils::Crypto::KeyWrapAlgorithmMapper;
using namespace Aws::S3Encryption::Handlers;

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {
            void MetadataHandler::PopulateRequest(Aws::S3::Model::PutObjectRequest& request, const ContentCryptoMaterial& contentCryptoMaterial)
            {
                Aws::String encodedCEK = HashingUtils::Base64Encode(contentCryptoMaterial.GetEncryptedContentEncryptionKey());
                request.AddMetadata(CONTENT_KEY_HEADER, encodedCEK);

                Aws::String encodedIV = HashingUtils::Base64Encode(contentCryptoMaterial.GetIV());
                request.AddMetadata(IV_HEADER, encodedIV);

                Aws::Map<Aws::String, Aws::String> materialsDescriptionMap = contentCryptoMaterial.GetMaterialsDescription();
                request.AddMetadata(MATERIALS_DESCRIPTION_HEADER, SerializeMap(materialsDescriptionMap));

                ContentCryptoScheme scheme = contentCryptoMaterial.GetContentCryptoScheme();
                request.AddMetadata(CONTENT_CRYPTO_SCHEME_HEADER, GetNameForContentCryptoScheme(scheme));

                request.AddMetadata(CRYPTO_TAG_LENGTH_HEADER, StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength()));

                KeyWrapAlgorithm keyWrapAlgorithm = contentCryptoMaterial.GetKeyWrapAlgorithm();
                request.AddMetadata(KEY_WRAP_ALGORITHM, GetNameForKeyWrapAlgorithm(keyWrapAlgorithm));
            }

            ContentCryptoMaterial MetadataHandler::ReadContentCryptoMaterial(Aws::S3::Model::GetObjectResult& result)
            {
                Aws::Map<Aws::String, Aws::String> metadata = result.GetMetadata();
                return ReadMetadata(metadata);
            }

            ContentCryptoMaterial MetadataHandler::ReadContentCryptoMaterial(const Aws::S3::Model::HeadObjectResult & result)
            {
                Aws::Map<Aws::String, Aws::String> metadata = result.GetMetadata();
                return ReadMetadata(metadata);
            }

        }//namespace Handlers
    }//namespace S3Encryption
}//nameespace Aws
