/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateEmailIdentityPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEmailIdentityPolicyRequest::CreateEmailIdentityPolicyRequest() : 
    m_emailIdentityHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String CreateEmailIdentityPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  return payload.View().WriteReadable();
}




