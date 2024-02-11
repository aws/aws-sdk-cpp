/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ValidatePullThroughCacheRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ValidatePullThroughCacheRuleRequest::ValidatePullThroughCacheRuleRequest() : 
    m_ecrRepositoryPrefixHasBeenSet(false),
    m_registryIdHasBeenSet(false)
{
}

Aws::String ValidatePullThroughCacheRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ecrRepositoryPrefixHasBeenSet)
  {
   payload.WithString("ecrRepositoryPrefix", m_ecrRepositoryPrefix);

  }

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ValidatePullThroughCacheRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.ValidatePullThroughCacheRule"));
  return headers;

}




