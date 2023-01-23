/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GetPublicKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPublicKeyRequest::GetPublicKeyRequest() : 
    m_keyIdHasBeenSet(false),
    m_grantTokensHasBeenSet(false)
{
}

Aws::String GetPublicKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

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

Aws::Http::HeaderValueCollection GetPublicKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.GetPublicKey"));
  return headers;

}




