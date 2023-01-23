/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

TaskDefinition::TaskDefinition() : 
    m_taskDefinitionArnHasBeenSet(false),
    m_containerDefinitionsHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_networkMode(NetworkMode::NOT_SET),
    m_networkModeHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_status(TaskDefinitionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_requiresAttributesHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_compatibilitiesHasBeenSet(false),
    m_runtimePlatformHasBeenSet(false),
    m_requiresCompatibilitiesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_inferenceAcceleratorsHasBeenSet(false),
    m_pidMode(PidMode::NOT_SET),
    m_pidModeHasBeenSet(false),
    m_ipcMode(IpcMode::NOT_SET),
    m_ipcModeHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false),
    m_registeredAtHasBeenSet(false),
    m_deregisteredAtHasBeenSet(false),
    m_registeredByHasBeenSet(false),
    m_ephemeralStorageHasBeenSet(false)
{
}

TaskDefinition::TaskDefinition(JsonView jsonValue) : 
    m_taskDefinitionArnHasBeenSet(false),
    m_containerDefinitionsHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_networkMode(NetworkMode::NOT_SET),
    m_networkModeHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_status(TaskDefinitionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_requiresAttributesHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_compatibilitiesHasBeenSet(false),
    m_runtimePlatformHasBeenSet(false),
    m_requiresCompatibilitiesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_inferenceAcceleratorsHasBeenSet(false),
    m_pidMode(PidMode::NOT_SET),
    m_pidModeHasBeenSet(false),
    m_ipcMode(IpcMode::NOT_SET),
    m_ipcModeHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false),
    m_registeredAtHasBeenSet(false),
    m_deregisteredAtHasBeenSet(false),
    m_registeredByHasBeenSet(false),
    m_ephemeralStorageHasBeenSet(false)
{
  *this = jsonValue;
}

TaskDefinition& TaskDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskDefinitionArn"))
  {
    m_taskDefinitionArn = jsonValue.GetString("taskDefinitionArn");

    m_taskDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerDefinitions"))
  {
    Aws::Utils::Array<JsonView> containerDefinitionsJsonList = jsonValue.GetArray("containerDefinitions");
    for(unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength(); ++containerDefinitionsIndex)
    {
      m_containerDefinitions.push_back(containerDefinitionsJsonList[containerDefinitionsIndex].AsObject());
    }
    m_containerDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("family"))
  {
    m_family = jsonValue.GetString("family");

    m_familyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskRoleArn"))
  {
    m_taskRoleArn = jsonValue.GetString("taskRoleArn");

    m_taskRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkMode"))
  {
    m_networkMode = NetworkModeMapper::GetNetworkModeForName(jsonValue.GetString("networkMode"));

    m_networkModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInteger("revision");

    m_revisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TaskDefinitionStatusMapper::GetTaskDefinitionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requiresAttributes"))
  {
    Aws::Utils::Array<JsonView> requiresAttributesJsonList = jsonValue.GetArray("requiresAttributes");
    for(unsigned requiresAttributesIndex = 0; requiresAttributesIndex < requiresAttributesJsonList.GetLength(); ++requiresAttributesIndex)
    {
      m_requiresAttributes.push_back(requiresAttributesJsonList[requiresAttributesIndex].AsObject());
    }
    m_requiresAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("placementConstraints"))
  {
    Aws::Utils::Array<JsonView> placementConstraintsJsonList = jsonValue.GetArray("placementConstraints");
    for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
    {
      m_placementConstraints.push_back(placementConstraintsJsonList[placementConstraintsIndex].AsObject());
    }
    m_placementConstraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compatibilities"))
  {
    Aws::Utils::Array<JsonView> compatibilitiesJsonList = jsonValue.GetArray("compatibilities");
    for(unsigned compatibilitiesIndex = 0; compatibilitiesIndex < compatibilitiesJsonList.GetLength(); ++compatibilitiesIndex)
    {
      m_compatibilities.push_back(CompatibilityMapper::GetCompatibilityForName(compatibilitiesJsonList[compatibilitiesIndex].AsString()));
    }
    m_compatibilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimePlatform"))
  {
    m_runtimePlatform = jsonValue.GetObject("runtimePlatform");

    m_runtimePlatformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requiresCompatibilities"))
  {
    Aws::Utils::Array<JsonView> requiresCompatibilitiesJsonList = jsonValue.GetArray("requiresCompatibilities");
    for(unsigned requiresCompatibilitiesIndex = 0; requiresCompatibilitiesIndex < requiresCompatibilitiesJsonList.GetLength(); ++requiresCompatibilitiesIndex)
    {
      m_requiresCompatibilities.push_back(CompatibilityMapper::GetCompatibilityForName(requiresCompatibilitiesJsonList[requiresCompatibilitiesIndex].AsString()));
    }
    m_requiresCompatibilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetString("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetString("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inferenceAccelerators"))
  {
    Aws::Utils::Array<JsonView> inferenceAcceleratorsJsonList = jsonValue.GetArray("inferenceAccelerators");
    for(unsigned inferenceAcceleratorsIndex = 0; inferenceAcceleratorsIndex < inferenceAcceleratorsJsonList.GetLength(); ++inferenceAcceleratorsIndex)
    {
      m_inferenceAccelerators.push_back(inferenceAcceleratorsJsonList[inferenceAcceleratorsIndex].AsObject());
    }
    m_inferenceAcceleratorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pidMode"))
  {
    m_pidMode = PidModeMapper::GetPidModeForName(jsonValue.GetString("pidMode"));

    m_pidModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipcMode"))
  {
    m_ipcMode = IpcModeMapper::GetIpcModeForName(jsonValue.GetString("ipcMode"));

    m_ipcModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("proxyConfiguration"))
  {
    m_proxyConfiguration = jsonValue.GetObject("proxyConfiguration");

    m_proxyConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredAt"))
  {
    m_registeredAt = jsonValue.GetDouble("registeredAt");

    m_registeredAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deregisteredAt"))
  {
    m_deregisteredAt = jsonValue.GetDouble("deregisteredAt");

    m_deregisteredAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredBy"))
  {
    m_registeredBy = jsonValue.GetString("registeredBy");

    m_registeredByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ephemeralStorage"))
  {
    m_ephemeralStorage = jsonValue.GetObject("ephemeralStorage");

    m_ephemeralStorageHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_taskDefinitionArnHasBeenSet)
  {
   payload.WithString("taskDefinitionArn", m_taskDefinitionArn);

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

  if(m_revisionHasBeenSet)
  {
   payload.WithInteger("revision", m_revision);

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TaskDefinitionStatusMapper::GetNameForTaskDefinitionStatus(m_status));
  }

  if(m_requiresAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiresAttributesJsonList(m_requiresAttributes.size());
   for(unsigned requiresAttributesIndex = 0; requiresAttributesIndex < requiresAttributesJsonList.GetLength(); ++requiresAttributesIndex)
   {
     requiresAttributesJsonList[requiresAttributesIndex].AsObject(m_requiresAttributes[requiresAttributesIndex].Jsonize());
   }
   payload.WithArray("requiresAttributes", std::move(requiresAttributesJsonList));

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

  if(m_compatibilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compatibilitiesJsonList(m_compatibilities.size());
   for(unsigned compatibilitiesIndex = 0; compatibilitiesIndex < compatibilitiesJsonList.GetLength(); ++compatibilitiesIndex)
   {
     compatibilitiesJsonList[compatibilitiesIndex].AsString(CompatibilityMapper::GetNameForCompatibility(m_compatibilities[compatibilitiesIndex]));
   }
   payload.WithArray("compatibilities", std::move(compatibilitiesJsonList));

  }

  if(m_runtimePlatformHasBeenSet)
  {
   payload.WithObject("runtimePlatform", m_runtimePlatform.Jsonize());

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

  if(m_inferenceAcceleratorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferenceAcceleratorsJsonList(m_inferenceAccelerators.size());
   for(unsigned inferenceAcceleratorsIndex = 0; inferenceAcceleratorsIndex < inferenceAcceleratorsJsonList.GetLength(); ++inferenceAcceleratorsIndex)
   {
     inferenceAcceleratorsJsonList[inferenceAcceleratorsIndex].AsObject(m_inferenceAccelerators[inferenceAcceleratorsIndex].Jsonize());
   }
   payload.WithArray("inferenceAccelerators", std::move(inferenceAcceleratorsJsonList));

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

  if(m_registeredAtHasBeenSet)
  {
   payload.WithDouble("registeredAt", m_registeredAt.SecondsWithMSPrecision());
  }

  if(m_deregisteredAtHasBeenSet)
  {
   payload.WithDouble("deregisteredAt", m_deregisteredAt.SecondsWithMSPrecision());
  }

  if(m_registeredByHasBeenSet)
  {
   payload.WithString("registeredBy", m_registeredBy);

  }

  if(m_ephemeralStorageHasBeenSet)
  {
   payload.WithObject("ephemeralStorage", m_ephemeralStorage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
