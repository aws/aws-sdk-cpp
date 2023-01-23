/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/PutRegistryPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRegistryPolicyRequest::PutRegistryPolicyRequest() : 
    m_policyTextHasBeenSet(false)
{
}

Aws::String PutRegistryPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyTextHasBeenSet)
  {
   payload.WithString("policyText", m_policyText);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRegistryPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.PutRegistryPolicy"));
  return headers;

}




