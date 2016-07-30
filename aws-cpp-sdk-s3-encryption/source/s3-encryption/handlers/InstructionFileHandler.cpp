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
using namespace Aws::S3Encryption::ContentCryptoSchemeMapper;
using namespace Aws::S3Encryption::KeyWrapAlgorithmMapper;

namespace Aws
{
namespace S3Encryption
{
namespace Handlers
{

static const char* const Allocation_Tag = "InstructionFileHandler";

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
    contentCryptoMap[CRYPTO_TAG_LENGTH_HEADER] = StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength());

    Aws::String jsonCryptoMap = SerializeMap(contentCryptoMap);
    std::shared_ptr<Aws::StringStream> streamPtr = Aws::MakeShared<Aws::StringStream>(Allocation_Tag, jsonCryptoMap);
    request.SetBody(streamPtr);
}

ContentCryptoMaterial InstructionFileHandler::ReadData(Aws::S3::Model::GetObjectResult & result)
{
    IOStream& stream = result.GetBody();
    Aws::String jsonString;
    stream >> jsonString;
    Aws::Map<Aws::String, Aws::String> cryptoContentMap = DeserializeMap(jsonString);

	auto keyIterator = cryptoContentMap.find(CONTENT_KEY_HEADER);
	auto ivIterator = cryptoContentMap.find(IV_HEADER);
	auto materialsDescriptionIterator = cryptoContentMap.find(MATERIALS_DESCRIPTION_HEADER);
	auto schemeIterator = cryptoContentMap.find(CONTENT_CRYPTO_SCHEME_HEADER);
	auto keyWrapIterator = cryptoContentMap.find(KEY_WRAP_ALGORITHM);
	auto cryptoTagIterator = cryptoContentMap.find(CRYPTO_TAG_LENGTH_HEADER);

	if (keyIterator == cryptoContentMap.end() || ivIterator == cryptoContentMap.end() ||
		materialsDescriptionIterator == cryptoContentMap.end() || schemeIterator == cryptoContentMap.end() ||
		keyIterator == cryptoContentMap.end())
	{
		AWS_LOGSTREAM_ERROR(Allocation_Tag, "One or more cryptoContentMap fields do not exist for decryption.");
		return ContentCryptoMaterial();
	}

	ContentCryptoMaterial contentCryptoMaterial;
	contentCryptoMaterial.SetEncryptedContentEncryptionKey(HashingUtils::Base64Decode(keyIterator->second));
	contentCryptoMaterial.SetIV(HashingUtils::Base64Decode(ivIterator->second));
	contentCryptoMaterial.SetMaterialsDescription(DeserializeMap(materialsDescriptionIterator->second));

	Aws::String schemeAsString = schemeIterator->second;
	contentCryptoMaterial.SetContentCryptoScheme(GetContentCryptoSchemeForName(schemeAsString));

	Aws::String keyWrapAlgorithmAsString = keyWrapIterator->second;
	contentCryptoMaterial.SetKeyWrapAlgorithm(GetKeyWrapAlgorithmForName(keyWrapAlgorithmAsString));
	if (cryptoTagIterator != cryptoContentMap.end())
	{
		contentCryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(cryptoTagIterator->second.c_str())));
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

