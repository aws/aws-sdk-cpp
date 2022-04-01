/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DeploymentConfigurationValidationPolicy.h>
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

DeploymentConfigurationValidationPolicy::DeploymentConfigurationValidationPolicy() : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false)
{
}

DeploymentConfigurationValidationPolicy::DeploymentConfigurationValidationPolicy(JsonView jsonValue) : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentConfigurationValidationPolicy& DeploymentConfigurationValidationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInteger("timeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentConfigurationValidationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("timeoutInSeconds", m_timeoutInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
