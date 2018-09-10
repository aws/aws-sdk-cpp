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

#include <aws/ecs/model/HealthCheck.h>
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

HealthCheck::HealthCheck() : 
    m_commandHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_retries(0),
    m_retriesHasBeenSet(false),
    m_startPeriod(0),
    m_startPeriodHasBeenSet(false)
{
}

HealthCheck::HealthCheck(JsonView jsonValue) : 
    m_commandHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_retries(0),
    m_retriesHasBeenSet(false),
    m_startPeriod(0),
    m_startPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

HealthCheck& HealthCheck::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("command"))
  {
    Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interval"))
  {
    m_interval = jsonValue.GetInteger("interval");

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeout"))
  {
    m_timeout = jsonValue.GetInteger("timeout");

    m_timeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retries"))
  {
    m_retries = jsonValue.GetInteger("retries");

    m_retriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startPeriod"))
  {
    m_startPeriod = jsonValue.GetInteger("startPeriod");

    m_startPeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue HealthCheck::Jsonize() const
{
  JsonValue payload;

  if(m_commandHasBeenSet)
  {
   Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("command", std::move(commandJsonList));

  }

  if(m_intervalHasBeenSet)
  {
   payload.WithInteger("interval", m_interval);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("timeout", m_timeout);

  }

  if(m_retriesHasBeenSet)
  {
   payload.WithInteger("retries", m_retries);

  }

  if(m_startPeriodHasBeenSet)
  {
   payload.WithInteger("startPeriod", m_startPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
