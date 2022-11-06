/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/EcsParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

EcsParameters::EcsParameters() : 
    m_taskDefinitionArnHasBeenSet(false),
    m_taskCount(0),
    m_taskCountHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_enableECSManagedTags(false),
    m_enableECSManagedTagsHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_placementStrategyHasBeenSet(false),
    m_propagateTags(PropagateTags::NOT_SET),
    m_propagateTagsHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

EcsParameters::EcsParameters(JsonView jsonValue) : 
    m_taskDefinitionArnHasBeenSet(false),
    m_taskCount(0),
    m_taskCountHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_enableECSManagedTags(false),
    m_enableECSManagedTagsHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_placementStrategyHasBeenSet(false),
    m_propagateTags(PropagateTags::NOT_SET),
    m_propagateTagsHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

EcsParameters& EcsParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskDefinitionArn"))
  {
    m_taskDefinitionArn = jsonValue.GetString("TaskDefinitionArn");

    m_taskDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskCount"))
  {
    m_taskCount = jsonValue.GetInteger("TaskCount");

    m_taskCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchType"))
  {
    m_launchType = LaunchTypeMapper::GetLaunchTypeForName(jsonValue.GetString("LaunchType"));

    m_launchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("NetworkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Group"))
  {
    m_group = jsonValue.GetString("Group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityProviderStrategy"))
  {
    Aws::Utils::Array<JsonView> capacityProviderStrategyJsonList = jsonValue.GetArray("CapacityProviderStrategy");
    for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
    {
      m_capacityProviderStrategy.push_back(capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject());
    }
    m_capacityProviderStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableECSManagedTags"))
  {
    m_enableECSManagedTags = jsonValue.GetBool("EnableECSManagedTags");

    m_enableECSManagedTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableExecuteCommand"))
  {
    m_enableExecuteCommand = jsonValue.GetBool("EnableExecuteCommand");

    m_enableExecuteCommandHasBeenSet = true;
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

  if(jsonValue.ValueExists("PlacementStrategy"))
  {
    Aws::Utils::Array<JsonView> placementStrategyJsonList = jsonValue.GetArray("PlacementStrategy");
    for(unsigned placementStrategyIndex = 0; placementStrategyIndex < placementStrategyJsonList.GetLength(); ++placementStrategyIndex)
    {
      m_placementStrategy.push_back(placementStrategyJsonList[placementStrategyIndex].AsObject());
    }
    m_placementStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropagateTags"))
  {
    m_propagateTags = PropagateTagsMapper::GetPropagateTagsForName(jsonValue.GetString("PropagateTags"));

    m_propagateTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceId"))
  {
    m_referenceId = jsonValue.GetString("ReferenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsParameters::Jsonize() const
{
  JsonValue payload;

  if(m_taskDefinitionArnHasBeenSet)
  {
   payload.WithString("TaskDefinitionArn", m_taskDefinitionArn);

  }

  if(m_taskCountHasBeenSet)
  {
   payload.WithInteger("TaskCount", m_taskCount);

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("LaunchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  if(m_capacityProviderStrategyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityProviderStrategyJsonList(m_capacityProviderStrategy.size());
   for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
   {
     capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject(m_capacityProviderStrategy[capacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("CapacityProviderStrategy", std::move(capacityProviderStrategyJsonList));

  }

  if(m_enableECSManagedTagsHasBeenSet)
  {
   payload.WithBool("EnableECSManagedTags", m_enableECSManagedTags);

  }

  if(m_enableExecuteCommandHasBeenSet)
  {
   payload.WithBool("EnableExecuteCommand", m_enableExecuteCommand);

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

  if(m_placementStrategyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementStrategyJsonList(m_placementStrategy.size());
   for(unsigned placementStrategyIndex = 0; placementStrategyIndex < placementStrategyJsonList.GetLength(); ++placementStrategyIndex)
   {
     placementStrategyJsonList[placementStrategyIndex].AsObject(m_placementStrategy[placementStrategyIndex].Jsonize());
   }
   payload.WithArray("PlacementStrategy", std::move(placementStrategyJsonList));

  }

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithString("PropagateTags", PropagateTagsMapper::GetNameForPropagateTags(m_propagateTags));
  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("ReferenceId", m_referenceId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
