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
#include <aws/kms/model/ReEncryptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReEncryptRequest::ReEncryptRequest() : 
    m_ciphertextBlobHasBeenSet(false),
    m_sourceEncryptionContextHasBeenSet(false),
    m_destinationKeyIdHasBeenSet(false),
    m_destinationEncryptionContextHasBeenSet(false),
    m_grantTokensHasBeenSet(false)
{
}

Aws::String ReEncryptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ciphertextBlobHasBeenSet)
  {
   payload.WithString("CiphertextBlob", HashingUtils::Base64Encode(m_ciphertextBlob));
  }

  if(m_sourceEncryptionContextHasBeenSet)
  {
   JsonValue sourceEncryptionContextJsonMap;
   for(auto& sourceEncryptionContextItem : m_sourceEncryptionContext)
   {
     sourceEncryptionContextJsonMap.WithString(sourceEncryptionContextItem.first, sourceEncryptionContextItem.second);
   }
   payload.WithObject("SourceEncryptionContext", std::move(sourceEncryptionContextJsonMap));

  }

  if(m_destinationKeyIdHasBeenSet)
  {
   payload.WithString("DestinationKeyId", m_destinationKeyId);

  }

  if(m_destinationEncryptionContextHasBeenSet)
  {
   JsonValue destinationEncryptionContextJsonMap;
   for(auto& destinationEncryptionContextItem : m_destinationEncryptionContext)
   {
     destinationEncryptionContextJsonMap.WithString(destinationEncryptionContextItem.first, destinationEncryptionContextItem.second);
   }
   payload.WithObject("DestinationEncryptionContext", std::move(destinationEncryptionContextJsonMap));

  }

  if(m_grantTokensHasBeenSet)
  {
   Array<JsonValue> grantTokensJsonList(m_grantTokens.size());
   for(unsigned grantTokensIndex = 0; grantTokensIndex < grantTokensJsonList.GetLength(); ++grantTokensIndex)
   {
     grantTokensJsonList[grantTokensIndex].AsString(m_grantTokens[grantTokensIndex]);
   }
   payload.WithArray("GrantTokens", std::move(grantTokensJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ReEncryptRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.ReEncrypt"));
  return headers;

}



