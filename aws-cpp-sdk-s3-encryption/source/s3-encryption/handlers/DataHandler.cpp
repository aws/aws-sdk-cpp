/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-encryption/handlers/DataHandler.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>

using namespace Aws::Utils;
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
                return jsonMap.View().WriteCompact();
            }

            const Aws::Map<Aws::String, Aws::String> DataHandler::DeserializeMap(const Aws::String& jsonString)
            {
                Aws::Map<Aws::String, Aws::String> materialsDescriptionMap;
                JsonValue jsonObject(jsonString);
                if (jsonObject.WasParseSuccessful())
                {
                    Aws::Map<Aws::String, JsonView> jsonMap = jsonObject.View().GetAllObjects();
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
                Aws::String keyWrapAlgorithmAsString = keyWrapIterator->second;
                contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(keyWrapAlgorithmAsString));

                // if the key wrap algorithm is AES_GCM, we need to split 12 bytes IV and 16 bytes tag out of it.
                CryptoBuffer finalCEK = Aws::Utils::HashingUtils::Base64Decode(keyIterator->second);
                contentCryptoMaterial.SetFinalCEK(finalCEK);
                if (contentCryptoMaterial.GetKeyWrapAlgorithm() == KeyWrapAlgorithm::AES_GCM)
                {
                    contentCryptoMaterial.SetCekIV(CryptoBuffer(finalCEK.GetUnderlyingData(), AES_GCM_IV_BYTES));
                    contentCryptoMaterial.SetEncryptedContentEncryptionKey(CryptoBuffer(finalCEK.GetUnderlyingData() + AES_GCM_IV_BYTES, AES_GCM_KEY_BYTES));
                    contentCryptoMaterial.SetCEKGCMTag(CryptoBuffer(finalCEK.GetUnderlyingData() + AES_GCM_IV_BYTES + AES_GCM_KEY_BYTES, AES_GCM_TAG_BYTES));
                }
                else
                {
                    contentCryptoMaterial.SetEncryptedContentEncryptionKey(finalCEK);
                    contentCryptoMaterial.SetCEKGCMTag(CryptoBuffer());
                }
                
                contentCryptoMaterial.SetIV(Aws::Utils::HashingUtils::Base64Decode(ivIterator->second));
                contentCryptoMaterial.SetMaterialsDescription(DeserializeMap(materialsDescriptionIterator->second));

                Aws::String schemeAsString = schemeIterator->second;
                contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(schemeAsString));

                // value of x-amz-cek-alg is used as AES/GCM AAD info for CEK encryption/decryption
                contentCryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)schemeAsString.c_str(), schemeAsString.size()));

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
