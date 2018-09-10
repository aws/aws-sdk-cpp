﻿/*
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

#include <aws/ecs/model/ContainerOverride.h>
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

ContainerOverride::ContainerOverride() : 
    m_nameHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false)
{
}

ContainerOverride::ContainerOverride(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerOverride& ContainerOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    Array<JsonView> environmentJsonList = jsonValue.GetArray("environment");
    for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
    {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetInteger("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInteger("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryReservation"))
  {
    m_memoryReservation = jsonValue.GetInteger("memoryReservation");

    m_memoryReservationHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerOverride::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_commandHasBeenSet)
  {
   Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("command", std::move(commandJsonList));

  }

  if(m_environmentHasBeenSet)
  {
   Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("environment", std::move(environmentJsonList));

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithInteger("cpu", m_cpu);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("memory", m_memory);

  }

  if(m_memoryReservationHasBeenSet)
  {
   payload.WithInteger("memoryReservation", m_memoryReservation);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
