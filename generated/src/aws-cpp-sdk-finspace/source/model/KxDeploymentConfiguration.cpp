/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDeploymentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxDeploymentConfiguration::KxDeploymentConfiguration() : 
    m_deploymentStrategy(KxDeploymentStrategy::NOT_SET),
    m_deploymentStrategyHasBeenSet(false)
{
}

KxDeploymentConfiguration::KxDeploymentConfiguration(JsonView jsonValue) : 
    m_deploymentStrategy(KxDeploymentStrategy::NOT_SET),
    m_deploymentStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

KxDeploymentConfiguration& KxDeploymentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentStrategy"))
  {
    m_deploymentStrategy = KxDeploymentStrategyMapper::GetKxDeploymentStrategyForName(jsonValue.GetString("deploymentStrategy"));

    m_deploymentStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue KxDeploymentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentStrategyHasBeenSet)
  {
   payload.WithString("deploymentStrategy", KxDeploymentStrategyMapper::GetNameForKxDeploymentStrategy(m_deploymentStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
