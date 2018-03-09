﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ecs/model/RegisterTaskDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterTaskDefinitionRequest::RegisterTaskDefinitionRequest() : 
    m_familyHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_networkMode(NetworkMode::NOT_SET),
    m_networkModeHasBeenSet(false),
    m_containerDefinitionsHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_requiresCompatibilitiesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false)
{
}

Aws::String RegisterTaskDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_familyHasBeenSet)
  {
   payload.WithString("family", m_family);

  }

  if(m_taskRoleArnHasBeenSet)
  {
   payload.WithString("taskRoleArn", m_taskRoleArn);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_networkModeHasBeenSet)
  {
   payload.WithString("networkMode", NetworkModeMapper::GetNameForNetworkMode(m_networkMode));
  }

  if(m_containerDefinitionsHasBeenSet)
  {
   Array<JsonValue> containerDefinitionsJsonList(m_containerDefinitions.size());
   for(unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength(); ++containerDefinitionsIndex)
   {
     containerDefinitionsJsonList[containerDefinitionsIndex].AsObject(m_containerDefinitions[containerDefinitionsIndex].Jsonize());
   }
   payload.WithArray("containerDefinitions", std::move(containerDefinitionsJsonList));

  }

  if(m_volumesHasBeenSet)
  {
   Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("volumes", std::move(volumesJsonList));

  }

  if(m_placementConstraintsHasBeenSet)
  {
   Array<JsonValue> placementConstraintsJsonList(m_placementConstraints.size());
   for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
   {
     placementConstraintsJsonList[placementConstraintsIndex].AsObject(m_placementConstraints[placementConstraintsIndex].Jsonize());
   }
   payload.WithArray("placementConstraints", std::move(placementConstraintsJsonList));

  }

  if(m_requiresCompatibilitiesHasBeenSet)
  {
   Array<JsonValue> requiresCompatibilitiesJsonList(m_requiresCompatibilities.size());
   for(unsigned requiresCompatibilitiesIndex = 0; requiresCompatibilitiesIndex < requiresCompatibilitiesJsonList.GetLength(); ++requiresCompatibilitiesIndex)
   {
     requiresCompatibilitiesJsonList[requiresCompatibilitiesIndex].AsString(CompatibilityMapper::GetNameForCompatibility(m_requiresCompatibilities[requiresCompatibilitiesIndex]));
   }
   payload.WithArray("requiresCompatibilities", std::move(requiresCompatibilitiesJsonList));

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithString("cpu", m_cpu);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithString("memory", m_memory);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterTaskDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.RegisterTaskDefinition"));
  return headers;

}




