/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/PutKeyPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutKeyPolicyRequest::PutKeyPolicyRequest() : 
    m_keyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_bypassPolicyLockoutSafetyCheck(false),
    m_bypassPolicyLockoutSafetyCheckHasBeenSet(false)
{
}

Aws::String PutKeyPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_bypassPolicyLockoutSafetyCheckHasBeenSet)
  {
   payload.WithBool("BypassPolicyLockoutSafetyCheck", m_bypassPolicyLockoutSafetyCheck);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutKeyPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.PutKeyPolicy"));
  return headers;

}




