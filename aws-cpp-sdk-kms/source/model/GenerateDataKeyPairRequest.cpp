/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GenerateDataKeyPairRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GenerateDataKeyPairRequest::GenerateDataKeyPairRequest() : 
    m_encryptionContextHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyPairSpec(DataKeyPairSpec::NOT_SET),
    m_keyPairSpecHasBeenSet(false),
    m_grantTokensHasBeenSet(false)
{
}

Aws::String GenerateDataKeyPairRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_encryptionContextHasBeenSet)
  {
   JsonValue encryptionContextJsonMap;
   for(auto& encryptionContextItem : m_encryptionContext)
   {
     encryptionContextJsonMap.WithString(encryptionContextItem.first, encryptionContextItem.second);
   }
   payload.WithObject("EncryptionContext", std::move(encryptionContextJsonMap));

  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_keyPairSpecHasBeenSet)
  {
   payload.WithString("KeyPairSpec", DataKeyPairSpecMapper::GetNameForDataKeyPairSpec(m_keyPairSpec));
  }

  if(m_grantTokensHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantTokensJsonList(m_grantTokens.size());
   for(unsigned grantTokensIndex = 0; grantTokensIndex < grantTokensJsonList.GetLength(); ++grantTokensIndex)
   {
     grantTokensJsonList[grantTokensIndex].AsString(m_grantTokens[grantTokensIndex]);
   }
   payload.WithArray("GrantTokens", std::move(grantTokensJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GenerateDataKeyPairRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.GenerateDataKeyPair"));
  return headers;

}




