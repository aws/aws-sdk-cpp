/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaExecutionParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

LambdaExecutionParameters::LambdaExecutionParameters() : 
    m_eventSourcesHasBeenSet(false),
    m_maxQueueSize(0),
    m_maxQueueSizeHasBeenSet(false),
    m_maxInstancesCount(0),
    m_maxInstancesCountHasBeenSet(false),
    m_maxIdleTimeInSeconds(0),
    m_maxIdleTimeInSecondsHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_statusTimeoutInSeconds(0),
    m_statusTimeoutInSecondsHasBeenSet(false),
    m_pinned(false),
    m_pinnedHasBeenSet(false),
    m_inputPayloadEncodingType(LambdaInputPayloadEncodingType::NOT_SET),
    m_inputPayloadEncodingTypeHasBeenSet(false),
    m_execArgsHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_linuxProcessParamsHasBeenSet(false)
{
}

LambdaExecutionParameters::LambdaExecutionParameters(JsonView jsonValue) : 
    m_eventSourcesHasBeenSet(false),
    m_maxQueueSize(0),
    m_maxQueueSizeHasBeenSet(false),
    m_maxInstancesCount(0),
    m_maxInstancesCountHasBeenSet(false),
    m_maxIdleTimeInSeconds(0),
    m_maxIdleTimeInSecondsHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_statusTimeoutInSeconds(0),
    m_statusTimeoutInSecondsHasBeenSet(false),
    m_pinned(false),
    m_pinnedHasBeenSet(false),
    m_inputPayloadEncodingType(LambdaInputPayloadEncodingType::NOT_SET),
    m_inputPayloadEncodingTypeHasBeenSet(false),
    m_execArgsHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_linuxProcessParamsHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaExecutionParameters& LambdaExecutionParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventSources"))
  {
    Aws::Utils::Array<JsonView> eventSourcesJsonList = jsonValue.GetArray("eventSources");
    for(unsigned eventSourcesIndex = 0; eventSourcesIndex < eventSourcesJsonList.GetLength(); ++eventSourcesIndex)
    {
      m_eventSources.push_back(eventSourcesJsonList[eventSourcesIndex].AsObject());
    }
    m_eventSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxQueueSize"))
  {
    m_maxQueueSize = jsonValue.GetInteger("maxQueueSize");

    m_maxQueueSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxInstancesCount"))
  {
    m_maxInstancesCount = jsonValue.GetInteger("maxInstancesCount");

    m_maxInstancesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxIdleTimeInSeconds"))
  {
    m_maxIdleTimeInSeconds = jsonValue.GetInteger("maxIdleTimeInSeconds");

    m_maxIdleTimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInteger("timeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusTimeoutInSeconds"))
  {
    m_statusTimeoutInSeconds = jsonValue.GetInteger("statusTimeoutInSeconds");

    m_statusTimeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pinned"))
  {
    m_pinned = jsonValue.GetBool("pinned");

    m_pinnedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputPayloadEncodingType"))
  {
    m_inputPayloadEncodingType = LambdaInputPayloadEncodingTypeMapper::GetLambdaInputPayloadEncodingTypeForName(jsonValue.GetString("inputPayloadEncodingType"));

    m_inputPayloadEncodingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("execArgs"))
  {
    Aws::Utils::Array<JsonView> execArgsJsonList = jsonValue.GetArray("execArgs");
    for(unsigned execArgsIndex = 0; execArgsIndex < execArgsJsonList.GetLength(); ++execArgsIndex)
    {
      m_execArgs.push_back(execArgsJsonList[execArgsIndex].AsString());
    }
    m_execArgsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for(auto& environmentVariablesItem : environmentVariablesJsonMap)
    {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linuxProcessParams"))
  {
    m_linuxProcessParams = jsonValue.GetObject("linuxProcessParams");

    m_linuxProcessParamsHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaExecutionParameters::Jsonize() const
{
  JsonValue payload;

  if(m_eventSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventSourcesJsonList(m_eventSources.size());
   for(unsigned eventSourcesIndex = 0; eventSourcesIndex < eventSourcesJsonList.GetLength(); ++eventSourcesIndex)
   {
     eventSourcesJsonList[eventSourcesIndex].AsObject(m_eventSources[eventSourcesIndex].Jsonize());
   }
   payload.WithArray("eventSources", std::move(eventSourcesJsonList));

  }

  if(m_maxQueueSizeHasBeenSet)
  {
   payload.WithInteger("maxQueueSize", m_maxQueueSize);

  }

  if(m_maxInstancesCountHasBeenSet)
  {
   payload.WithInteger("maxInstancesCount", m_maxInstancesCount);

  }

  if(m_maxIdleTimeInSecondsHasBeenSet)
  {
   payload.WithInteger("maxIdleTimeInSeconds", m_maxIdleTimeInSeconds);

  }

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("timeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_statusTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("statusTimeoutInSeconds", m_statusTimeoutInSeconds);

  }

  if(m_pinnedHasBeenSet)
  {
   payload.WithBool("pinned", m_pinned);

  }

  if(m_inputPayloadEncodingTypeHasBeenSet)
  {
   payload.WithString("inputPayloadEncodingType", LambdaInputPayloadEncodingTypeMapper::GetNameForLambdaInputPayloadEncodingType(m_inputPayloadEncodingType));
  }

  if(m_execArgsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> execArgsJsonList(m_execArgs.size());
   for(unsigned execArgsIndex = 0; execArgsIndex < execArgsJsonList.GetLength(); ++execArgsIndex)
   {
     execArgsJsonList[execArgsIndex].AsString(m_execArgs[execArgsIndex]);
   }
   payload.WithArray("execArgs", std::move(execArgsJsonList));

  }

  if(m_environmentVariablesHasBeenSet)
  {
   JsonValue environmentVariablesJsonMap;
   for(auto& environmentVariablesItem : m_environmentVariables)
   {
     environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
   }
   payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));

  }

  if(m_linuxProcessParamsHasBeenSet)
  {
   payload.WithObject("linuxProcessParams", m_linuxProcessParams.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
