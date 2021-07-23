/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails.h>
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

AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails::AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails() : 
    m_enable(false),
    m_enableHasBeenSet(false),
    m_rollback(false),
    m_rollbackHasBeenSet(false)
{
}

AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails::AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails(JsonView jsonValue) : 
    m_enable(false),
    m_enableHasBeenSet(false),
    m_rollback(false),
    m_rollbackHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails& AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enable"))
  {
    m_enable = jsonValue.GetBool("Enable");

    m_enableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rollback"))
  {
    m_rollback = jsonValue.GetBool("Rollback");

    m_rollbackHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_enableHasBeenSet)
  {
   payload.WithBool("Enable", m_enable);

  }

  if(m_rollbackHasBeenSet)
  {
   payload.WithBool("Rollback", m_rollback);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
