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

using namespace Aws::Utils;
using namespace Aws::S3Encryption::ContentCryptoSchemeMapper;
using namespace Aws::S3Encryption::KeyWrapAlgorithmMapper;

namespace Aws
{
namespace S3Encryption
{
namespace Handlers
{

void InstructionFileHandler::WriteData(Aws::S3::Model::PutObjectRequest & request, const ContentCryptoMaterial & contentCryptoMaterial)
{
    request.SetKey(request.GetKey() + DEFAULT_INSTRUCTION_FILE_SUFFIX);
    request.AddMetadata(INSTRUCTION_FILE_HEADER, "");
    Aws::Map<Aws::String, Aws::String> contentCryptoMap;

    contentCryptoMap[CONTENT_KEY_HEADER] = HashingUtils::Base64Encode(contentCryptoMaterial.GetEncryptedContentEncryptionKey());
    contentCryptoMap[IV_HEADER] = HashingUtils::Base64Encode(contentCryptoMaterial.GetIV());
    contentCryptoMap[MATERIALS_DESCRIPTION_HEADER] = SerializeMap(contentCryptoMaterial.GetMaterialsDescription());
    contentCryptoMap[CONTENT_CRYPTO_SCHEME_HEADER] = GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme());
    contentCryptoMap[KEY_WRAP_ALGORITHM] = GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm());

    size_t cryptoTagLength = contentCryptoMaterial.GetCryptoTagLength();
    Aws::StringStream ss;
    ss << cryptoTagLength;
    contentCryptoMap[CRYPTO_TAG_LENGTH_HEADER] = ss.str();

    Aws::String jsonCryptoMap = SerializeMap(contentCryptoMap);
    std::shared_ptr<Aws::StringStream> streamPtr = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, jsonCryptoMap);
    request.SetBody(streamPtr);
}

ContentCryptoMaterial InstructionFileHandler::ReadData(Aws::S3::Model::GetObjectResult & result)
{
    IOStream& stream = result.GetBody();
    Aws::String jsonString;
    stream >> jsonString;
    Aws::Map<Aws::String, Aws::String> cryptoContentMap = DeSerializeMap(jsonString);

    ContentCryptoMaterial cryptoContentMaterial;
    cryptoContentMaterial.SetEncryptedContentEncryptionKey(HashingUtils::Base64Decode(cryptoContentMap[CONTENT_KEY_HEADER]));
    cryptoContentMaterial.SetIV(HashingUtils::Base64Decode(cryptoContentMap[IV_HEADER]));
    cryptoContentMaterial.SetMaterialsDescription(DeSerializeMap(cryptoContentMap[MATERIALS_DESCRIPTION_HEADER]));
    cryptoContentMaterial.SetContentCryptoScheme(GetContentCryptoSchemeForName(cryptoContentMap[CONTENT_CRYPTO_SCHEME_HEADER]));
    cryptoContentMaterial.SetKeyWrapAlgorithm(GetKeyWrapAlgorithmForName(cryptoContentMap[KEY_WRAP_ALGORITHM]));

    Aws::StringStream ss;
    size_t cryptoTag;
    ss << cryptoContentMap[CRYPTO_TAG_LENGTH_HEADER];
    ss >> cryptoTag;
    cryptoContentMaterial.SetCryptoTagLength(cryptoTag);
    return cryptoContentMaterial;
}

}//namespace Handlers
}//namespace S3Encryption
}//namespace Aws

