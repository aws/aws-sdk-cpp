/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DescribePullThroughCacheRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePullThroughCacheRulesRequest::DescribePullThroughCacheRulesRequest() : 
    m_registryIdHasBeenSet(false),
    m_ecrRepositoryPrefixesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribePullThroughCacheRulesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_ecrRepositoryPrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ecrRepositoryPrefixesJsonList(m_ecrRepositoryPrefixes.size());
   for(unsigned ecrRepositoryPrefixesIndex = 0; ecrRepositoryPrefixesIndex < ecrRepositoryPrefixesJsonList.GetLength(); ++ecrRepositoryPrefixesIndex)
   {
     ecrRepositoryPrefixesJsonList[ecrRepositoryPrefixesIndex].AsString(m_ecrRepositoryPrefixes[ecrRepositoryPrefixesIndex]);
   }
   payload.WithArray("ecrRepositoryPrefixes", std::move(ecrRepositoryPrefixesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePullThroughCacheRulesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.DescribePullThroughCacheRules"));
  return headers;

}




