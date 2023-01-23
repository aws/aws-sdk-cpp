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

DeploymentConfiguration::DeploymentConfiguration() : 
    m_deploymentCircuitBreakerHasBeenSet(false),
    m_maximumPercent(0),
    m_maximumPercentHasBeenSet(false),
    m_minimumHealthyPercent(0),
    m_minimumHealthyPercentHasBeenSet(false),
    m_alarmsHasBeenSet(false)
{
}

DeploymentConfiguration::DeploymentConfiguration(JsonView jsonValue) : 
    m_deploymentCircuitBreakerHasBeenSet(false),
    m_maximumPercent(0),
    m_maximumPercentHasBeenSet(false),
    m_minimumHealthyPercent(0),
    m_minimumHealthyPercentHasBeenSet(false),
    m_alarmsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
