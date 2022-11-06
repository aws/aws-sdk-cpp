/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DescribeTaskSetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTaskSetsRequest::DescribeTaskSetsRequest() : 
    m_clusterHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_taskSetsHasBeenSet(false),
    m_includeHasBeenSet(false)
{
}

Aws::String DescribeTaskSetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_taskSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskSetsJsonList(m_taskSets.size());
   for(unsigned taskSetsIndex = 0; taskSetsIndex < taskSetsJsonList.GetLength(); ++taskSetsIndex)
   {
     taskSetsJsonList[taskSetsIndex].AsString(m_taskSets[taskSetsIndex]);
   }
   payload.WithArray("taskSets", std::move(taskSetsJsonList));

  }

  if(m_includeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
   for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
   {
     includeJsonList[includeIndex].AsString(TaskSetFieldMapper::GetNameForTaskSetField(m_include[includeIndex]));
   }
   payload.WithArray("include", std::move(includeJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTaskSetsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeTaskSets"));
  return headers;

}




