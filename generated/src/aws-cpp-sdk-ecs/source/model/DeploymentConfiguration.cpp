/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeploymentConfiguration.h>
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

DeploymentConfiguration::DeploymentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DeploymentConfiguration& DeploymentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentCircuitBreaker"))
  {
    m_deploymentCircuitBreaker = jsonValue.GetObject("deploymentCircuitBreaker");
    m_deploymentCircuitBreakerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maximumPercent"))
  {
    m_maximumPercent = jsonValue.GetInteger("maximumPercent");
    m_maximumPercentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimumHealthyPercent"))
  {
    m_minimumHealthyPercent = jsonValue.GetInteger("minimumHealthyPercent");
    m_minimumHealthyPercentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarms"))
  {
    m_alarms = jsonValue.GetObject("alarms");
    m_alarmsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("strategy"))
  {
    m_strategy = DeploymentStrategyMapper::GetDeploymentStrategyForName(jsonValue.GetString("strategy"));
    m_strategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bakeTimeInMinutes"))
  {
    m_bakeTimeInMinutes = jsonValue.GetInteger("bakeTimeInMinutes");
    m_bakeTimeInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecycleHooks"))
  {
    Aws::Utils::Array<JsonView> lifecycleHooksJsonList = jsonValue.GetArray("lifecycleHooks");
    for(unsigned lifecycleHooksIndex = 0; lifecycleHooksIndex < lifecycleHooksJsonList.GetLength(); ++lifecycleHooksIndex)
    {
      m_lifecycleHooks.push_back(lifecycleHooksJsonList[lifecycleHooksIndex].AsObject());
    }
    m_lifecycleHooksHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentCircuitBreakerHasBeenSet)
  {
   payload.WithObject("deploymentCircuitBreaker", m_deploymentCircuitBreaker.Jsonize());

  }

  if(m_maximumPercentHasBeenSet)
  {
   payload.WithInteger("maximumPercent", m_maximumPercent);

  }

  if(m_minimumHealthyPercentHasBeenSet)
  {
   payload.WithInteger("minimumHealthyPercent", m_minimumHealthyPercent);

  }

  if(m_alarmsHasBeenSet)
  {
   payload.WithObject("alarms", m_alarms.Jsonize());

  }

  if(m_strategyHasBeenSet)
  {
   payload.WithString("strategy", DeploymentStrategyMapper::GetNameForDeploymentStrategy(m_strategy));
  }

  if(m_bakeTimeInMinutesHasBeenSet)
  {
   payload.WithInteger("bakeTimeInMinutes", m_bakeTimeInMinutes);

  }

  if(m_lifecycleHooksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lifecycleHooksJsonList(m_lifecycleHooks.size());
   for(unsigned lifecycleHooksIndex = 0; lifecycleHooksIndex < lifecycleHooksJsonList.GetLength(); ++lifecycleHooksIndex)
   {
     lifecycleHooksJsonList[lifecycleHooksIndex].AsObject(m_lifecycleHooks[lifecycleHooksIndex].Jsonize());
   }
   payload.WithArray("lifecycleHooks", std::move(lifecycleHooksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
