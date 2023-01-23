/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DeploymentIoTJobConfiguration.h>
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

DeploymentIoTJobConfiguration::DeploymentIoTJobConfiguration() : 
    m_jobExecutionsRolloutConfigHasBeenSet(false),
    m_abortConfigHasBeenSet(false),
    m_timeoutConfigHasBeenSet(false)
{
}

DeploymentIoTJobConfiguration::DeploymentIoTJobConfiguration(JsonView jsonValue) : 
    m_jobExecutionsRolloutConfigHasBeenSet(false),
    m_abortConfigHasBeenSet(false),
    m_timeoutConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentIoTJobConfiguration& DeploymentIoTJobConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobExecutionsRolloutConfig"))
  {
    m_jobExecutionsRolloutConfig = jsonValue.GetObject("jobExecutionsRolloutConfig");

    m_jobExecutionsRolloutConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("abortConfig"))
  {
    m_abortConfig = jsonValue.GetObject("abortConfig");

    m_abortConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutConfig"))
  {
    m_timeoutConfig = jsonValue.GetObject("timeoutConfig");

    m_timeoutConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentIoTJobConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jobExecutionsRolloutConfigHasBeenSet)
  {
   payload.WithObject("jobExecutionsRolloutConfig", m_jobExecutionsRolloutConfig.Jsonize());

  }

  if(m_abortConfigHasBeenSet)
  {
   payload.WithObject("abortConfig", m_abortConfig.Jsonize());

  }

  if(m_timeoutConfigHasBeenSet)
  {
   payload.WithObject("timeoutConfig", m_timeoutConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
