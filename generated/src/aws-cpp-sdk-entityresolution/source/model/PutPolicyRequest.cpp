/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/PutPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutPolicyRequest::PutPolicyRequest() : 
    m_arnHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

Aws::String PutPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  return payload.View().WriteReadable();
}




