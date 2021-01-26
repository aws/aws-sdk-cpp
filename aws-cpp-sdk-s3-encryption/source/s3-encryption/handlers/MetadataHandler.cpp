/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
                Aws::String encodedCEK = HashingUtils::Base64Encode(contentCryptoMaterial.GetFinalCEK());
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
