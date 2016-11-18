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
#include <aws/s3-encryption/handlers/DataHandler.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>

using namespace Aws::Utils::Json;
using namespace Aws::Utils::Crypto;

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {
            static const char* const ALLOCATION_TAG = "DataHandler";

            const Aws::String DataHandler::SerializeMap(const Aws::Map<Aws::String, Aws::String>& currentMap)
            {
                JsonValue jsonMap;
                for (auto& mapItem : currentMap)
                {
                    jsonMap.WithString(mapItem.first, mapItem.second);
                }
                return jsonMap.WriteCompact();
            }

            const Aws::Map<Aws::String, Aws::String> DataHandler::DeserializeMap(const Aws::String& jsonString)
            {
                Aws::Map<Aws::String, Aws::String> materialsDescriptionMap;
                JsonValue jsonObject(jsonString);
                if (jsonObject.WasParseSuccessful())
                {
                    Aws::Map<Aws::String, JsonValue> jsonMap = jsonObject.GetAllObjects();
                    for (auto& mapItem : jsonMap)
                    {
                        materialsDescriptionMap[mapItem.first] = mapItem.second.AsString();
                    }
                    return materialsDescriptionMap;
                }
                else
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Json Parse failed with message: " << jsonObject.GetErrorMessage());
                    return materialsDescriptionMap;
                }
            }

            ContentCryptoMaterial DataHandler::ReadMetadata(const Aws::Map<Aws::String, Aws::String>& metadata)
            {
                auto keyIterator = metadata.find(CONTENT_KEY_HEADER);
                auto ivIterator = metadata.find(IV_HEADER);
                auto materialsDescriptionIterator = metadata.find(MATERIALS_DESCRIPTION_HEADER);
                auto schemeIterator = metadata.find(CONTENT_CRYPTO_SCHEME_HEADER);
                auto keyWrapIterator = metadata.find(KEY_WRAP_ALGORITHM);
                auto cryptoTagIterator = metadata.find(CRYPTO_TAG_LENGTH_HEADER);

                if (keyIterator == metadata.end() || ivIterator == metadata.end() ||
                    materialsDescriptionIterator == metadata.end() || schemeIterator == metadata.end() ||
                    keyIterator == metadata.end())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "One or more metadata fields do not exist for decryption.");
                    return ContentCryptoMaterial();
                }

                ContentCryptoMaterial contentCryptoMaterial;
                contentCryptoMaterial.SetEncryptedContentEncryptionKey(Aws::Utils::HashingUtils::Base64Decode(keyIterator->second));
                contentCryptoMaterial.SetIV(Aws::Utils::HashingUtils::Base64Decode(ivIterator->second));
                contentCryptoMaterial.SetMaterialsDescription(DeserializeMap(materialsDescriptionIterator->second));

                Aws::String schemeAsString = schemeIterator->second;
                contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(schemeAsString));

                Aws::String keyWrapAlgorithmAsString = keyWrapIterator->second;
                contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(keyWrapAlgorithmAsString));
                if (cryptoTagIterator != metadata.end())
                {
                    contentCryptoMaterial.SetCryptoTagLength(static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(cryptoTagIterator->second.c_str())));
                }
                else
                {
                    contentCryptoMaterial.SetCryptoTagLength(0u);
                }
                return contentCryptoMaterial;
            }

        }//namespace Handlers
    }//namespace S3Encryption
}//namespace Aws