/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/PutClusterPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DSQL::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutClusterPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  if(m_bypassPolicyLockoutSafetyCheckHasBeenSet)
  {
   payload.WithBool("bypassPolicyLockoutSafetyCheck", m_bypassPolicyLockoutSafetyCheck);

  }

  if(m_expectedPolicyVersionHasBeenSet)
  {
   payload.WithString("expectedPolicyVersion", m_expectedPolicyVersion);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




