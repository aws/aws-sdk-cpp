/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/SetRepositoryPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetRepositoryPolicyRequest::SetRepositoryPolicyRequest() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_policyTextHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String SetRepositoryPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_policyTextHasBeenSet)
  {
   payload.WithString("policyText", m_policyText);

  }

  if(m_forceHasBeenSet)
  {
   payload.WithBool("force", m_force);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetRepositoryPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.SetRepositoryPolicy"));
  return headers;

}




