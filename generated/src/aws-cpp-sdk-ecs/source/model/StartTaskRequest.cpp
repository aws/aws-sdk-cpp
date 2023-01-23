/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/StartTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTaskRequest::StartTaskRequest() : 
    m_clusterHasBeenSet(false),
    m_containerInstancesHasBeenSet(false),
    m_enableECSManagedTags(false),
    m_enableECSManagedTagsHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_propagateTags(PropagateTags::NOT_SET),
    m_propagateTagsHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false)
{
}

Aws::String StartTaskRequest::SerializePayload() const
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

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_overridesHasBeenSet)
  {
   payload.WithObject("overrides", m_overrides.Jsonize());

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
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
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

Aws::Http::HeaderValueCollection StartTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.StartTask"));
  return headers;

}




