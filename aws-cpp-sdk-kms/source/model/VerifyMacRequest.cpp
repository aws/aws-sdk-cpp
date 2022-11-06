/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/VerifyMacRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifyMacRequest::VerifyMacRequest() : 
    m_messageHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_macAlgorithm(MacAlgorithmSpec::NOT_SET),
    m_macAlgorithmHasBeenSet(false),
    m_macHasBeenSet(false),
    m_grantTokensHasBeenSet(false)
{
}

Aws::String VerifyMacRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", HashingUtils::Base64Encode(m_message));
  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_macAlgorithmHasBeenSet)
  {
   payload.WithString("MacAlgorithm", MacAlgorithmSpecMapper::GetNameForMacAlgorithmSpec(m_macAlgorithm));
  }

  if(m_macHasBeenSet)
  {
   payload.WithString("Mac", HashingUtils::Base64Encode(m_mac));
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

Aws::Http::HeaderValueCollection VerifyMacRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.VerifyMac"));
  return headers;

}




