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
#include <aws/ecs/model/Task.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Task::Task() : 
    m_taskArnHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_taskDefinitionArnHasBeenSet(false),
    m_containerInstanceArnHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_lastStatusHasBeenSet(false),
    m_desiredStatusHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_startedByHasBeenSet(false)
{
}

Task::Task(const JsonValue& jsonValue) : 
    m_taskArnHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_taskDefinitionArnHasBeenSet(false),
    m_containerInstanceArnHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_lastStatusHasBeenSet(false),
    m_desiredStatusHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_startedByHasBeenSet(false)
{
  *this = jsonValue;
}

Task& Task::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskDefinitionArn"))
  {
    m_taskDefinitionArn = jsonValue.GetString("taskDefinitionArn");

    m_taskDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerInstanceArn"))
  {
    m_containerInstanceArn = jsonValue.GetString("containerInstanceArn");

    m_containerInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrides"))
  {
    m_overrides = jsonValue.GetObject("overrides");

    m_overridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatus"))
  {
    m_lastStatus = jsonValue.GetString("lastStatus");

    m_lastStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredStatus"))
  {
    m_desiredStatus = jsonValue.GetString("desiredStatus");

    m_desiredStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containers"))
  {
    Array<JsonValue> containersJsonList = jsonValue.GetArray("containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedBy"))
  {
    m_startedBy = jsonValue.GetString("startedBy");

    m_startedByHasBeenSet = true;
  }

  return *this;
}

JsonValue Task::Jsonize() const
{
  JsonValue payload;

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("taskArn", m_taskArn);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_taskDefinitionArnHasBeenSet)
  {
   payload.WithString("taskDefinitionArn", m_taskDefinitionArn);

  }

  if(m_containerInstanceArnHasBeenSet)
  {
   payload.WithString("containerInstanceArn", m_containerInstanceArn);

  }

  if(m_overridesHasBeenSet)
  {
   payload.WithObject("overrides", m_overrides.Jsonize());

  }

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("lastStatus", m_lastStatus);

  }

  if(m_desiredStatusHasBeenSet)
  {
   payload.WithString("desiredStatus", m_desiredStatus);

  }

  if(m_containersHasBeenSet)
  {
   Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("containers", std::move(containersJsonList));

  }

  if(m_startedByHasBeenSet)
  {
   payload.WithString("startedBy", m_startedBy);

  }

  return payload;
}