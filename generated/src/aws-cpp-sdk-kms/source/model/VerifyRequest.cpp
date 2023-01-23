/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/VerifyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifyRequest::VerifyRequest() : 
    m_keyIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_signingAlgorithm(SigningAlgorithmSpec::NOT_SET),
    m_signingAlgorithmHasBeenSet(false),
    m_grantTokensHasBeenSet(false)
{
}

Aws::String VerifyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", HashingUtils::Base64Encode(m_message));
  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_signatureHasBeenSet)
  {
   payload.WithString("Signature", HashingUtils::Base64Encode(m_signature));
  }

  if(m_signingAlgorithmHasBeenSet)
  {
   payload.WithString("SigningAlgorithm", SigningAlgorithmSpecMapper::GetNameForSigningAlgorithmSpec(m_signingAlgorithm));
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

Aws::Http::HeaderValueCollection VerifyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.Verify"));
  return headers;

}




