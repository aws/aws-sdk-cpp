/*
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

#include <aws/ecs/model/ContainerInstance.h>
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

ContainerInstance::ContainerInstance() : 
    m_containerInstanceArnHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_versionInfoHasBeenSet(false),
    m_remainingResourcesHasBeenSet(false),
    m_registeredResourcesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_agentConnected(false),
    m_agentConnectedHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_pendingTasksCount(0),
    m_pendingTasksCountHasBeenSet(false),
    m_agentUpdateStatus(AgentUpdateStatus::NOT_SET),
    m_agentUpdateStatusHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_registeredAtHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ContainerInstance::ContainerInstance(JsonView jsonValue) : 
    m_containerInstanceArnHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_versionInfoHasBeenSet(false),
    m_remainingResourcesHasBeenSet(false),
    m_registeredResourcesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_agentConnected(false),
    m_agentConnectedHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_pendingTasksCount(0),
    m_pendingTasksCountHasBeenSet(false),
    m_agentUpdateStatus(AgentUpdateStatus::NOT_SET),
    m_agentUpdateStatusHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_registeredAtHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerInstance& ContainerInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerInstanceArn"))
  {
    m_containerInstanceArn = jsonValue.GetString("containerInstanceArn");

    m_containerInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceId"))
  {
    m_ec2InstanceId = jsonValue.GetString("ec2InstanceId");

    m_ec2InstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionInfo"))
  {
    m_versionInfo = jsonValue.GetObject("versionInfo");

    m_versionInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remainingResources"))
  {
    Array<JsonView> remainingResourcesJsonList = jsonValue.GetArray("remainingResources");
    for(unsigned remainingResourcesIndex = 0; remainingResourcesIndex < remainingResourcesJsonList.GetLength(); ++remainingResourcesIndex)
    {
      m_remainingResources.push_back(remainingResourcesJsonList[remainingResourcesIndex].AsObject());
    }
    m_remainingResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredResources"))
  {
    Array<JsonView> registeredResourcesJsonList = jsonValue.GetArray("registeredResources");
    for(unsigned registeredResourcesIndex = 0; registeredResourcesIndex < registeredResourcesJsonList.GetLength(); ++registeredResourcesIndex)
    {
      m_registeredResources.push_back(registeredResourcesJsonList[registeredResourcesIndex].AsObject());
    }
    m_registeredResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentConnected"))
  {
    m_agentConnected = jsonValue.GetBool("agentConnected");

    m_agentConnectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runningTasksCount"))
  {
    m_runningTasksCount = jsonValue.GetInteger("runningTasksCount");

    m_runningTasksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingTasksCount"))
  {
    m_pendingTasksCount = jsonValue.GetInteger("pendingTasksCount");

    m_pendingTasksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentUpdateStatus"))
  {
    m_agentUpdateStatus = AgentUpdateStatusMapper::GetAgentUpdateStatusForName(jsonValue.GetString("agentUpdateStatus"));

    m_agentUpdateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredAt"))
  {
    m_registeredAt = jsonValue.GetDouble("registeredAt");

    m_registeredAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachments"))
  {
    Array<JsonView> attachmentsJsonList = jsonValue.GetArray("attachments");
    for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
    {
      m_attachments.push_back(attachmentsJsonList[attachmentsIndex].AsObject());
    }
    m_attachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerInstance::Jsonize() const
{
  JsonValue payload;

  if(m_containerInstanceArnHasBeenSet)
  {
   payload.WithString("containerInstanceArn", m_containerInstanceArn);

  }

  if(m_ec2InstanceIdHasBeenSet)
  {
   payload.WithString("ec2InstanceId", m_ec2InstanceId);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("version", m_version);

  }

  if(m_versionInfoHasBeenSet)
  {
   payload.WithObject("versionInfo", m_versionInfo.Jsonize());

  }

  if(m_remainingResourcesHasBeenSet)
  {
   Array<JsonValue> remainingResourcesJsonList(m_remainingResources.size());
   for(unsigned remainingResourcesIndex = 0; remainingResourcesIndex < remainingResourcesJsonList.GetLength(); ++remainingResourcesIndex)
   {
     remainingResourcesJsonList[remainingResourcesIndex].AsObject(m_remainingResources[remainingResourcesIndex].Jsonize());
   }
   payload.WithArray("remainingResources", std::move(remainingResourcesJsonList));

  }

  if(m_registeredResourcesHasBeenSet)
  {
   Array<JsonValue> registeredResourcesJsonList(m_registeredResources.size());
   for(unsigned registeredResourcesIndex = 0; registeredResourcesIndex < registeredResourcesJsonList.GetLength(); ++registeredResourcesIndex)
   {
     registeredResourcesJsonList[registeredResourcesIndex].AsObject(m_registeredResources[registeredResourcesIndex].Jsonize());
   }
   payload.WithArray("registeredResources", std::move(registeredResourcesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_agentConnectedHasBeenSet)
  {
   payload.WithBool("agentConnected", m_agentConnected);

  }

  if(m_runningTasksCountHasBeenSet)
  {
   payload.WithInteger("runningTasksCount", m_runningTasksCount);

  }

  if(m_pendingTasksCountHasBeenSet)
  {
   payload.WithInteger("pendingTasksCount", m_pendingTasksCount);

  }

  if(m_agentUpdateStatusHasBeenSet)
  {
   payload.WithString("agentUpdateStatus", AgentUpdateStatusMapper::GetNameForAgentUpdateStatus(m_agentUpdateStatus));
  }

  if(m_attributesHasBeenSet)
  {
   Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_registeredAtHasBeenSet)
  {
   payload.WithDouble("registeredAt", m_registeredAt.SecondsWithMSPrecision());
  }

  if(m_attachmentsHasBeenSet)
  {
   Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("attachments", std::move(attachmentsJsonList));

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

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
