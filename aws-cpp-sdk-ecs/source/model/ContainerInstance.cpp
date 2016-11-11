/*
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
    m_versionInfoHasBeenSet(false),
    m_remainingResourcesHasBeenSet(false),
    m_registeredResourcesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_agentConnected(false),
    m_agentConnectedHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_pendingTasksCount(0),
    m_pendingTasksCountHasBeenSet(false),
    m_agentUpdateStatus(AgentUpdateStatus::NOT_SET),
    m_agentUpdateStatusHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

ContainerInstance::ContainerInstance(const JsonValue& jsonValue) : 
    m_containerInstanceArnHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_versionInfoHasBeenSet(false),
    m_remainingResourcesHasBeenSet(false),
    m_registeredResourcesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_agentConnected(false),
    m_agentConnectedHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_pendingTasksCount(0),
    m_pendingTasksCountHasBeenSet(false),
    m_agentUpdateStatus(AgentUpdateStatus::NOT_SET),
    m_agentUpdateStatusHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerInstance& ContainerInstance::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("versionInfo"))
  {
    m_versionInfo = jsonValue.GetObject("versionInfo");

    m_versionInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remainingResources"))
  {
    Array<JsonValue> remainingResourcesJsonList = jsonValue.GetArray("remainingResources");
    for(unsigned remainingResourcesIndex = 0; remainingResourcesIndex < remainingResourcesJsonList.GetLength(); ++remainingResourcesIndex)
    {
      m_remainingResources.push_back(remainingResourcesJsonList[remainingResourcesIndex].AsObject());
    }
    m_remainingResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredResources"))
  {
    Array<JsonValue> registeredResourcesJsonList = jsonValue.GetArray("registeredResources");
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
    Array<JsonValue> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
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

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws