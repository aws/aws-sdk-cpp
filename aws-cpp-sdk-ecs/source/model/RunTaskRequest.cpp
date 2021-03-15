/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/RunTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RunTaskRequest::RunTaskRequest() : 
    m_capacityProviderStrategyHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_enableECSManagedTags(false),
    m_enableECSManagedTagsHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_placementStrategyHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_propagateTags(PropagateTags::NOT_SET),
    m_propagateTagsHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false)
{
}

Aws::String RunTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capacityProviderStrategyHasBeenSet)
  {
   Array<JsonValue> capacityProviderStrategyJsonList(m_capacityProviderStrategy.size());
   for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
   {
     capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject(m_capacityProviderStrategy[capacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("capacityProviderStrategy", std::move(capacityProviderStrategyJsonList));

  }

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_enableECSManagedTagsHasBeenSet)
  {
   payload.WithBool("enableECSManagedTags", m_enableECSManagedTags);

  }

  if(m_enableExecuteCommandHasBeenSet)
  {
   payload.WithBool("enableExecuteCommand", m_enableExecuteCommand);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_overridesHasBeenSet)
  {
   payload.WithObject("overrides", m_overrides.Jsonize());

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

  if(m_placementStrategyHasBeenSet)
  {
   Array<JsonValue> placementStrategyJsonList(m_placementStrategy.size());
   for(unsigned placementStrategyIndex = 0; placementStrategyIndex < placementStrategyJsonList.GetLength(); ++placementStrategyIndex)
   {
     placementStrategyJsonList[placementStrategyIndex].AsObject(m_placementStrategy[placementStrategyIndex].Jsonize());
   }
   payload.WithArray("placementStrategy", std::move(placementStrategyJsonList));

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithString("propagateTags", PropagateTagsMapper::GetNameForPropagateTags(m_propagateTags));
  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("referenceId", m_referenceId);

  }

  if(m_startedByHasBeenSet)
  {
   payload.WithString("startedBy", m_startedBy);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RunTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.RunTask"));
  return headers;

}




