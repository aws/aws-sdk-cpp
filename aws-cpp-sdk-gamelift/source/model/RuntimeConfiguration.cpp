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

#include <aws/gamelift/model/RuntimeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

RuntimeConfiguration::RuntimeConfiguration() : 
    m_serverProcessesHasBeenSet(false),
    m_maxConcurrentGameSessionActivations(0),
    m_maxConcurrentGameSessionActivationsHasBeenSet(false),
    m_gameSessionActivationTimeoutSeconds(0),
    m_gameSessionActivationTimeoutSecondsHasBeenSet(false)
{
}

RuntimeConfiguration::RuntimeConfiguration(JsonView jsonValue) : 
    m_serverProcessesHasBeenSet(false),
    m_maxConcurrentGameSessionActivations(0),
    m_maxConcurrentGameSessionActivationsHasBeenSet(false),
    m_gameSessionActivationTimeoutSeconds(0),
    m_gameSessionActivationTimeoutSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimeConfiguration& RuntimeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerProcesses"))
  {
    Array<JsonView> serverProcessesJsonList = jsonValue.GetArray("ServerProcesses");
    for(unsigned serverProcessesIndex = 0; serverProcessesIndex < serverProcessesJsonList.GetLength(); ++serverProcessesIndex)
    {
      m_serverProcesses.push_back(serverProcessesJsonList[serverProcessesIndex].AsObject());
    }
    m_serverProcessesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConcurrentGameSessionActivations"))
  {
    m_maxConcurrentGameSessionActivations = jsonValue.GetInteger("MaxConcurrentGameSessionActivations");

    m_maxConcurrentGameSessionActivationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionActivationTimeoutSeconds"))
  {
    m_gameSessionActivationTimeoutSeconds = jsonValue.GetInteger("GameSessionActivationTimeoutSeconds");

    m_gameSessionActivationTimeoutSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverProcessesHasBeenSet)
  {
   Array<JsonValue> serverProcessesJsonList(m_serverProcesses.size());
   for(unsigned serverProcessesIndex = 0; serverProcessesIndex < serverProcessesJsonList.GetLength(); ++serverProcessesIndex)
   {
     serverProcessesJsonList[serverProcessesIndex].AsObject(m_serverProcesses[serverProcessesIndex].Jsonize());
   }
   payload.WithArray("ServerProcesses", std::move(serverProcessesJsonList));

  }

  if(m_maxConcurrentGameSessionActivationsHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentGameSessionActivations", m_maxConcurrentGameSessionActivations);

  }

  if(m_gameSessionActivationTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("GameSessionActivationTimeoutSeconds", m_gameSessionActivationTimeoutSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
