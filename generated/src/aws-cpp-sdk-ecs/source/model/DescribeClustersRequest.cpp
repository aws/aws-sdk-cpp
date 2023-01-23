/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DescribeClustersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeClustersRequest::DescribeClustersRequest() : 
    m_clustersHasBeenSet(false),
    m_includeHasBeenSet(false)
{
}

Aws::String DescribeClustersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clustersJsonList(m_clusters.size());
   for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
   {
     clustersJsonList[clustersIndex].AsString(m_clusters[clustersIndex]);
   }
   payload.WithArray("clusters", std::move(clustersJsonList));

  }

  if(m_includeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
   for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
   {
     includeJsonList[includeIndex].AsString(ClusterFieldMapper::GetNameForClusterField(m_include[includeIndex]));
   }
   payload.WithArray("include", std::move(includeJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeClustersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeClusters"));
  return headers;

}




