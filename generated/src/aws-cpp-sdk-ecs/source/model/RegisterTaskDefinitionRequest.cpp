/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_memoryHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_pidMode(PidMode::NOT_SET),
    m_pidModeHasBeenSet(false),
    m_ipcMode(IpcMode::NOT_SET),
    m_ipcModeHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false),
    m_inferenceAcceleratorsHasBeenSet(false),
    m_ephemeralStorageHasBeenSet(false),
    m_runtimePlatformHasBeenSet(false)
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
   Aws::Utils::Array<JsonValue> containerDefinitionsJsonList(m_containerDefinitions.size());
   for(unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength(); ++containerDefinitionsIndex)
   {
     containerDefinitionsJsonList[containerDefinitionsIndex].AsObject(m_containerDefinitions[containerDefinitionsIndex].Jsonize());
   }
   payload.WithArray("containerDefinitions", std::move(containerDefinitionsJsonList));

  }

  if(m_volumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("volumes", std::move(volumesJsonList));

  }

  if(m_placementConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementConstraintsJsonList(m_placementConstraints.size());
   for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
   {
     placementConstraintsJsonList[placementConstraintsIndex].AsObject(m_placementConstraints[placementConstraintsIndex].Jsonize());
   }
   payload.WithArray("placementConstraints", std::move(placementConstraintsJsonList));

  }

  if(m_requiresCompatibilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiresCompatibilitiesJsonList(m_requiresCompatibilities.size());
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_pidModeHasBeenSet)
  {
   payload.WithString("pidMode", PidModeMapper::GetNameForPidMode(m_pidMode));
  }

  if(m_ipcModeHasBeenSet)
  {
   payload.WithString("ipcMode", IpcModeMapper::GetNameForIpcMode(m_ipcMode));
  }

  if(m_proxyConfigurationHasBeenSet)
  {
   payload.WithObject("proxyConfiguration", m_proxyConfiguration.Jsonize());

  }

  if(m_inferenceAcceleratorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferenceAcceleratorsJsonList(m_inferenceAccelerators.size());
   for(unsigned inferenceAcceleratorsIndex = 0; inferenceAcceleratorsIndex < inferenceAcceleratorsJsonList.GetLength(); ++inferenceAcceleratorsIndex)
   {
     inferenceAcceleratorsJsonList[inferenceAcceleratorsIndex].AsObject(m_inferenceAccelerators[inferenceAcceleratorsIndex].Jsonize());
   }
   payload.WithArray("inferenceAccelerators", std::move(inferenceAcceleratorsJsonList));

  }

  if(m_ephemeralStorageHasBeenSet)
  {
   payload.WithObject("ephemeralStorage", m_ephemeralStorage.Jsonize());

  }

  if(m_runtimePlatformHasBeenSet)
  {
   payload.WithObject("runtimePlatform", m_runtimePlatform.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterTaskDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.RegisterTaskDefinition"));
  return headers;

}




