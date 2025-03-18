/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeploymentConfiguration.h>
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

DeploymentConfiguration::DeploymentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DeploymentConfiguration& DeploymentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProtectionStrategy"))
  {
    m_protectionStrategy = DeploymentProtectionStrategyMapper::GetDeploymentProtectionStrategyForName(jsonValue.GetString("ProtectionStrategy"));
    m_protectionStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinimumHealthyPercentage"))
  {
    m_minimumHealthyPercentage = jsonValue.GetInteger("MinimumHealthyPercentage");
    m_minimumHealthyPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImpairmentStrategy"))
  {
    m_impairmentStrategy = DeploymentImpairmentStrategyMapper::GetDeploymentImpairmentStrategyForName(jsonValue.GetString("ImpairmentStrategy"));
    m_impairmentStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_protectionStrategyHasBeenSet)
  {
   payload.WithString("ProtectionStrategy", DeploymentProtectionStrategyMapper::GetNameForDeploymentProtectionStrategy(m_protectionStrategy));
  }

  if(m_minimumHealthyPercentageHasBeenSet)
  {
   payload.WithInteger("MinimumHealthyPercentage", m_minimumHealthyPercentage);

  }

  if(m_impairmentStrategyHasBeenSet)
  {
   payload.WithString("ImpairmentStrategy", DeploymentImpairmentStrategyMapper::GetNameForDeploymentImpairmentStrategy(m_impairmentStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
