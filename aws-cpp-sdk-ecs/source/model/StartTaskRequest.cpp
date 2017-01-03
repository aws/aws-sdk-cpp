﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ecs/model/StartTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTaskRequest::StartTaskRequest() : 
    m_clusterHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_containerInstancesHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_groupHasBeenSet(false)
{
}

Aws::String StartTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  if(m_overridesHasBeenSet)
  {
   payload.WithObject("overrides", m_overrides.Jsonize());

  }

  if(m_containerInstancesHasBeenSet)
  {
   Array<JsonValue> containerInstancesJsonList(m_containerInstances.size());
   for(unsigned containerInstancesIndex = 0; containerInstancesIndex < containerInstancesJsonList.GetLength(); ++containerInstancesIndex)
   {
     containerInstancesJsonList[containerInstancesIndex].AsString(m_containerInstances[containerInstancesIndex]);
   }
   payload.WithArray("containerInstances", std::move(containerInstancesJsonList));

  }

  if(m_startedByHasBeenSet)
  {
   payload.WithString("startedBy", m_startedBy);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.StartTask"));
  return headers;

}



