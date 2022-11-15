/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionDetails::AwsEcsTaskDefinitionDetails() : 
    m_containerDefinitionsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_inferenceAcceleratorsHasBeenSet(false),
    m_ipcModeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_networkModeHasBeenSet(false),
    m_pidModeHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false),
    m_requiresCompatibilitiesHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
}

AwsEcsTaskDefinitionDetails::AwsEcsTaskDefinitionDetails(JsonView jsonValue) : 
    m_containerDefinitionsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_inferenceAcceleratorsHasBeenSet(false),
    m_ipcModeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_networkModeHasBeenSet(false),
    m_pidModeHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false),
    m_requiresCompatibilitiesHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionDetails& AwsEcsTaskDefinitionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerDefinitions"))
  {
    Aws::Utils::Array<JsonView> containerDefinitionsJsonList = jsonValue.GetArray("ContainerDefinitions");
    for(unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength(); ++containerDefinitionsIndex)
    {
      m_containerDefinitions.push_back(containerDefinitionsJsonList[containerDefinitionsIndex].AsObject());
    }
    m_containerDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cpu"))
  {
    m_cpu = jsonValue.GetString("Cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Family"))
  {
    m_family = jsonValue.GetString("Family");

    m_familyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceAccelerators"))
  {
    Aws::Utils::Array<JsonView> inferenceAcceleratorsJsonList = jsonValue.GetArray("InferenceAccelerators");
    for(unsigned inferenceAcceleratorsIndex = 0; inferenceAcceleratorsIndex < inferenceAcceleratorsJsonList.GetLength(); ++inferenceAcceleratorsIndex)
    {
      m_inferenceAccelerators.push_back(inferenceAcceleratorsJsonList[inferenceAcceleratorsIndex].AsObject());
    }
    m_inferenceAcceleratorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpcMode"))
  {
    m_ipcMode = jsonValue.GetString("IpcMode");

    m_ipcModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Memory"))
  {
    m_memory = jsonValue.GetString("Memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkMode"))
  {
    m_networkMode = jsonValue.GetString("NetworkMode");

    m_networkModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PidMode"))
  {
    m_pidMode = jsonValue.GetString("PidMode");

    m_pidModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlacementConstraints"))
  {
    Aws::Utils::Array<JsonView> placementConstraintsJsonList = jsonValue.GetArray("PlacementConstraints");
    for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
    {
      m_placementConstraints.push_back(placementConstraintsJsonList[placementConstraintsIndex].AsObject());
    }
    m_placementConstraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProxyConfiguration"))
  {
    m_proxyConfiguration = jsonValue.GetObject("ProxyConfiguration");

    m_proxyConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequiresCompatibilities"))
  {
    Aws::Utils::Array<JsonView> requiresCompatibilitiesJsonList = jsonValue.GetArray("RequiresCompatibilities");
    for(unsigned requiresCompatibilitiesIndex = 0; requiresCompatibilitiesIndex < requiresCompatibilitiesJsonList.GetLength(); ++requiresCompatibilitiesIndex)
    {
      m_requiresCompatibilities.push_back(requiresCompatibilitiesJsonList[requiresCompatibilitiesIndex].AsString());
    }
    m_requiresCompatibilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskRoleArn"))
  {
    m_taskRoleArn = jsonValue.GetString("TaskRoleArn");

    m_taskRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("Volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containerDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerDefinitionsJsonList(m_containerDefinitions.size());
   for(unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength(); ++containerDefinitionsIndex)
   {
     containerDefinitionsJsonList[containerDefinitionsIndex].AsObject(m_containerDefinitions[containerDefinitionsIndex].Jsonize());
   }
   payload.WithArray("ContainerDefinitions", std::move(containerDefinitionsJsonList));

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithString("Cpu", m_cpu);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_familyHasBeenSet)
  {
   payload.WithString("Family", m_family);

  }

  if(m_inferenceAcceleratorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferenceAcceleratorsJsonList(m_inferenceAccelerators.size());
   for(unsigned inferenceAcceleratorsIndex = 0; inferenceAcceleratorsIndex < inferenceAcceleratorsJsonList.GetLength(); ++inferenceAcceleratorsIndex)
   {
     inferenceAcceleratorsJsonList[inferenceAcceleratorsIndex].AsObject(m_inferenceAccelerators[inferenceAcceleratorsIndex].Jsonize());
   }
   payload.WithArray("InferenceAccelerators", std::move(inferenceAcceleratorsJsonList));

  }

  if(m_ipcModeHasBeenSet)
  {
   payload.WithString("IpcMode", m_ipcMode);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithString("Memory", m_memory);

  }

  if(m_networkModeHasBeenSet)
  {
   payload.WithString("NetworkMode", m_networkMode);

  }

  if(m_pidModeHasBeenSet)
  {
   payload.WithString("PidMode", m_pidMode);

  }

  if(m_placementConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementConstraintsJsonList(m_placementConstraints.size());
   for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
   {
     placementConstraintsJsonList[placementConstraintsIndex].AsObject(m_placementConstraints[placementConstraintsIndex].Jsonize());
   }
   payload.WithArray("PlacementConstraints", std::move(placementConstraintsJsonList));

  }

  if(m_proxyConfigurationHasBeenSet)
  {
   payload.WithObject("ProxyConfiguration", m_proxyConfiguration.Jsonize());

  }

  if(m_requiresCompatibilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiresCompatibilitiesJsonList(m_requiresCompatibilities.size());
   for(unsigned requiresCompatibilitiesIndex = 0; requiresCompatibilitiesIndex < requiresCompatibilitiesJsonList.GetLength(); ++requiresCompatibilitiesIndex)
   {
     requiresCompatibilitiesJsonList[requiresCompatibilitiesIndex].AsString(m_requiresCompatibilities[requiresCompatibilitiesIndex]);
   }
   payload.WithArray("RequiresCompatibilities", std::move(requiresCompatibilitiesJsonList));

  }

  if(m_taskRoleArnHasBeenSet)
  {
   payload.WithString("TaskRoleArn", m_taskRoleArn);

  }

  if(m_volumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("Volumes", std::move(volumesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
