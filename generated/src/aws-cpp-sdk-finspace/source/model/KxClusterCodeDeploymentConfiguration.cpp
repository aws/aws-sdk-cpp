/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxClusterCodeDeploymentConfiguration.h>
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

KxClusterCodeDeploymentConfiguration::KxClusterCodeDeploymentConfiguration() : 
    m_deploymentStrategy(KxClusterCodeDeploymentStrategy::NOT_SET),
    m_deploymentStrategyHasBeenSet(false)
{
}

KxClusterCodeDeploymentConfiguration::KxClusterCodeDeploymentConfiguration(JsonView jsonValue) : 
    m_deploymentStrategy(KxClusterCodeDeploymentStrategy::NOT_SET),
    m_deploymentStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

KxClusterCodeDeploymentConfiguration& KxClusterCodeDeploymentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentStrategy"))
  {
    m_deploymentStrategy = KxClusterCodeDeploymentStrategyMapper::GetKxClusterCodeDeploymentStrategyForName(jsonValue.GetString("deploymentStrategy"));

    m_deploymentStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue KxClusterCodeDeploymentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentStrategyHasBeenSet)
  {
   payload.WithString("deploymentStrategy", KxClusterCodeDeploymentStrategyMapper::GetNameForKxClusterCodeDeploymentStrategy(m_deploymentStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
