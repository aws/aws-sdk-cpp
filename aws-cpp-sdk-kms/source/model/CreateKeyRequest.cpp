/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/CreateKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateKeyRequest::CreateKeyRequest() : 
    m_policyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keyUsage(KeyUsageType::NOT_SET),
    m_keyUsageHasBeenSet(false),
    m_customerMasterKeySpec(CustomerMasterKeySpec::NOT_SET),
    m_customerMasterKeySpecHasBeenSet(false),
    m_origin(OriginType::NOT_SET),
    m_originHasBeenSet(false),
    m_customKeyStoreIdHasBeenSet(false),
    m_bypassPolicyLockoutSafetyCheck(false),
    m_bypassPolicyLockoutSafetyCheckHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_keyUsageHasBeenSet)
  {
   payload.WithString("KeyUsage", KeyUsageTypeMapper::GetNameForKeyUsageType(m_keyUsage));
  }

  if(m_customerMasterKeySpecHasBeenSet)
  {
   payload.WithString("CustomerMasterKeySpec", CustomerMasterKeySpecMapper::GetNameForCustomerMasterKeySpec(m_customerMasterKeySpec));
  }

  if(m_originHasBeenSet)
  {
   payload.WithString("Origin", OriginTypeMapper::GetNameForOriginType(m_origin));
  }

  if(m_customKeyStoreIdHasBeenSet)
  {
   payload.WithString("CustomKeyStoreId", m_customKeyStoreId);

  }

  if(m_bypassPolicyLockoutSafetyCheckHasBeenSet)
  {
   payload.WithBool("BypassPolicyLockoutSafetyCheck", m_bypassPolicyLockoutSafetyCheck);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.CreateKey"));
  return headers;

}




