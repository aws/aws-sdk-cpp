/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryRunConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryRunConfigInput::CanaryRunConfigInput() : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_memoryInMB(0),
    m_memoryInMBHasBeenSet(false),
    m_activeTracing(false),
    m_activeTracingHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false)
{
}

CanaryRunConfigInput::CanaryRunConfigInput(JsonView jsonValue) : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_memoryInMB(0),
    m_memoryInMBHasBeenSet(false),
    m_activeTracing(false),
    m_activeTracingHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryRunConfigInput& CanaryRunConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInteger("TimeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryInMB"))
  {
    m_memoryInMB = jsonValue.GetInteger("MemoryInMB");

    m_memoryInMBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveTracing"))
  {
    m_activeTracing = jsonValue.GetBool("ActiveTracing");

    m_activeTracingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("EnvironmentVariables").GetAllObjects();
    for(auto& environmentVariablesItem : environmentVariablesJsonMap)
    {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryRunConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("TimeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_memoryInMBHasBeenSet)
  {
   payload.WithInteger("MemoryInMB", m_memoryInMB);

  }

  if(m_activeTracingHasBeenSet)
  {
   payload.WithBool("ActiveTracing", m_activeTracing);

  }

  if(m_environmentVariablesHasBeenSet)
  {
   JsonValue environmentVariablesJsonMap;
   for(auto& environmentVariablesItem : m_environmentVariables)
   {
     environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
   }
   payload.WithObject("EnvironmentVariables", std::move(environmentVariablesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
