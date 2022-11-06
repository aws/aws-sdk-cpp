/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DescribeContainerInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeContainerInstancesRequest::DescribeContainerInstancesRequest() : 
    m_clusterHasBeenSet(false),
    m_containerInstancesHasBeenSet(false),
    m_includeHasBeenSet(false)
{
}

Aws::String DescribeContainerInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_containerInstancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerInstancesJsonList(m_containerInstances.size());
   for(unsigned containerInstancesIndex = 0; containerInstancesIndex < containerInstancesJsonList.GetLength(); ++containerInstancesIndex)
   {
     containerInstancesJsonList[containerInstancesIndex].AsString(m_containerInstances[containerInstancesIndex]);
   }
   payload.WithArray("containerInstances", std::move(containerInstancesJsonList));

  }

  if(m_includeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
   for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
   {
     includeJsonList[includeIndex].AsString(ContainerInstanceFieldMapper::GetNameForContainerInstanceField(m_include[includeIndex]));
   }
   payload.WithArray("include", std::move(includeJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeContainerInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeContainerInstances"));
  return headers;

}




