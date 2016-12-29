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
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;
using namespace Aws::Utils::Crypto::ContentCryptoSchemeMapper;
using namespace Aws::Utils::Crypto::KeyWrapAlgorithmMapper;

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {

            static const char* const ALLOCATION_TAG = "InstructionFileHandler";
            static const char* const INSTRUCTION_HEADER_VALUE = "default instruction file header";

            void InstructionFileHandler::PopulateRequest(Aws::S3::Model::PutObjectRequest & request, const ContentCryptoMaterial & contentCryptoMaterial)
            {
                request.SetKey(request.GetKey() + DEFAULT_INSTRUCTION_FILE_SUFFIX);

                Aws::Map<Aws::String, Aws::String> instructionMetadata;
                instructionMetadata[INSTRUCTION_FILE_HEADER] = INSTRUCTION_HEADER_VALUE;
                request.SetMetadata(instructionMetadata);

                Aws::Map<Aws::String, Aws::String> contentCryptoMap;
                contentCryptoMap[CONTENT_KEY_HEADER] = HashingUtils::Base64Encode(contentCryptoMaterial.GetEncryptedContentEncryptionKey());
                contentCryptoMap[IV_HEADER] = HashingUtils::Base64Encode(contentCryptoMaterial.GetIV());
                contentCryptoMap[MATERIALS_DESCRIPTION_HEADER] = SerializeMap(contentCryptoMaterial.GetMaterialsDescription());
                contentCryptoMap[CONTENT_CRYPTO_SCHEME_HEADER] = GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme());
                contentCryptoMap[KEY_WRAP_ALGORITHM] = GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm());
                contentCryptoMap[CRYPTO_TAG_LENGTH_HEADER] = StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength());

                Aws::String jsonCryptoMap = SerializeMap(contentCryptoMap);
                std::shared_ptr<Aws::StringStream> streamPtr = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, jsonCryptoMap);
                request.SetBody(streamPtr);
            }

            ContentCryptoMaterial InstructionFileHandler::ReadContentCryptoMaterial(Aws::S3::Model::GetObjectResult & result)
            {
                IOStream& stream = result.GetBody();
                Aws::String jsonString;
                stream >> jsonString;
                Aws::Map<Aws::String, Aws::String> cryptoContentMap = DeserializeMap(jsonString);
                return ReadMetadata(cryptoContentMap);
            }

        }//namespace Handlers
    }//namespace S3Encryption
}//namespace Aws

