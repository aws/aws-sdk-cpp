/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/UpdatePullThroughCacheRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePullThroughCacheRuleRequest::UpdatePullThroughCacheRuleRequest() : 
    m_registryIdHasBeenSet(false),
    m_ecrRepositoryPrefixHasBeenSet(false),
    m_credentialArnHasBeenSet(false)
{
}

Aws::String UpdatePullThroughCacheRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_ecrRepositoryPrefixHasBeenSet)
  {
   payload.WithString("ecrRepositoryPrefix", m_ecrRepositoryPrefix);

  }

  if(m_credentialArnHasBeenSet)
  {
   payload.WithString("credentialArn", m_credentialArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePullThroughCacheRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.UpdatePullThroughCacheRule"));
  return headers;

}




