/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServiceDeploymentConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsServiceDeploymentConfigurationDetails::AwsEcsServiceDeploymentConfigurationDetails() : 
    m_deploymentCircuitBreakerHasBeenSet(false),
    m_maximumPercent(0),
    m_maximumPercentHasBeenSet(false),
    m_minimumHealthyPercent(0),
    m_minimumHealthyPercentHasBeenSet(false)
{
}

AwsEcsServiceDeploymentConfigurationDetails::AwsEcsServiceDeploymentConfigurationDetails(JsonView jsonValue) : 
    m_deploymentCircuitBreakerHasBeenSet(false),
    m_maximumPercent(0),
    m_maximumPercentHasBeenSet(false),
    m_minimumHealthyPercent(0),
    m_minimumHealthyPercentHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServiceDeploymentConfigurationDetails& AwsEcsServiceDeploymentConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentCircuitBreaker"))
  {
    m_deploymentCircuitBreaker = jsonValue.GetObject("DeploymentCircuitBreaker");

    m_deploymentCircuitBreakerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumPercent"))
  {
    m_maximumPercent = jsonValue.GetInteger("MaximumPercent");

    m_maximumPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumHealthyPercent"))
  {
    m_minimumHealthyPercent = jsonValue.GetInteger("MinimumHealthyPercent");

    m_minimumHealthyPercentHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServiceDeploymentConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentCircuitBreakerHasBeenSet)
  {
   payload.WithObject("DeploymentCircuitBreaker", m_deploymentCircuitBreaker.Jsonize());

  }

  if(m_maximumPercentHasBeenSet)
  {
   payload.WithInteger("MaximumPercent", m_maximumPercent);

  }

  if(m_minimumHealthyPercentHasBeenSet)
  {
   payload.WithInteger("MinimumHealthyPercent", m_minimumHealthyPercent);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
