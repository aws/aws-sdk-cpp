/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/EncryptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EncryptRequest::EncryptRequest() : 
    m_keyIdHasBeenSet(false),
    m_plaintextHasBeenSet(false),
    m_encryptionContextHasBeenSet(false),
    m_grantTokensHasBeenSet(false),
    m_encryptionAlgorithm(EncryptionAlgorithmSpec::NOT_SET),
    m_encryptionAlgorithmHasBeenSet(false)
{
}

Aws::String EncryptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_plaintextHasBeenSet)
  {
   payload.WithString("Plaintext", HashingUtils::Base64Encode(m_plaintext));
  }

  if(m_encryptionContextHasBeenSet)
  {
   JsonValue encryptionContextJsonMap;
   for(auto& encryptionContextItem : m_encryptionContext)
   {
     encryptionContextJsonMap.WithString(encryptionContextItem.first, encryptionContextItem.second);
   }
   payload.WithObject("EncryptionContext", std::move(encryptionContextJsonMap));

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

  if(m_encryptionAlgorithmHasBeenSet)
  {
   payload.WithString("EncryptionAlgorithm", EncryptionAlgorithmSpecMapper::GetNameForEncryptionAlgorithmSpec(m_encryptionAlgorithm));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EncryptRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.Encrypt"));
  return headers;

}




