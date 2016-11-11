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
    m_networkMode(NetworkMode::NOT_SET),
    m_networkModeHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_status(TaskDefinitionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_requiresAttributesHasBeenSet(false)
{
}

TaskDefinition::TaskDefinition(const JsonValue& jsonValue) : 
    m_taskDefinitionArnHasBeenSet(false),
    m_containerDefinitionsHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_networkMode(NetworkMode::NOT_SET),
    m_networkModeHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_status(TaskDefinitionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_requiresAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

TaskDefinition& TaskDefinition::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("taskDefinitionArn"))
  {
    m_taskDefinitionArn = jsonValue.GetString("taskDefinitionArn");

    m_taskDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerDefinitions"))
  {
    Array<JsonValue> containerDefinitionsJsonList = jsonValue.GetArray("containerDefinitions");
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
    Array<JsonValue> volumesJsonList = jsonValue.GetArray("volumes");
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
    Array<JsonValue> requiresAttributesJsonList = jsonValue.GetArray("requiresAttributes");
    for(unsigned requiresAttributesIndex = 0; requiresAttributesIndex < requiresAttributesJsonList.GetLength(); ++requiresAttributesIndex)
    {
      m_requiresAttributes.push_back(requiresAttributesJsonList[requiresAttributesIndex].AsObject());
    }
    m_requiresAttributesHasBeenSet = true;
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
   Array<JsonValue> containerDefinitionsJsonList(m_containerDefinitions.size());
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
   Array<JsonValue> volumesJsonList(m_volumes.size());
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
   Array<JsonValue> requiresAttributesJsonList(m_requiresAttributes.size());
   for(unsigned requiresAttributesIndex = 0; requiresAttributesIndex < requiresAttributesJsonList.GetLength(); ++requiresAttributesIndex)
   {
     requiresAttributesJsonList[requiresAttributesIndex].AsObject(m_requiresAttributes[requiresAttributesIndex].Jsonize());
   }
   payload.WithArray("requiresAttributes", std::move(requiresAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws