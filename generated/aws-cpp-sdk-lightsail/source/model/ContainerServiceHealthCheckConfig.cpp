/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceHealthCheckConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

ContainerServiceHealthCheckConfig::ContainerServiceHealthCheckConfig() : 
    m_healthyThreshold(0),
    m_healthyThresholdHasBeenSet(false),
    m_unhealthyThreshold(0),
    m_unhealthyThresholdHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false),
    m_intervalSeconds(0),
    m_intervalSecondsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_successCodesHasBeenSet(false)
{
}

ContainerServiceHealthCheckConfig::ContainerServiceHealthCheckConfig(JsonView jsonValue) : 
    m_healthyThreshold(0),
    m_healthyThresholdHasBeenSet(false),
    m_unhealthyThreshold(0),
    m_unhealthyThresholdHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false),
    m_intervalSeconds(0),
    m_intervalSecondsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_successCodesHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerServiceHealthCheckConfig& ContainerServiceHealthCheckConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("healthyThreshold"))
  {
    m_healthyThreshold = jsonValue.GetInteger("healthyThreshold");

    m_healthyThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unhealthyThreshold"))
  {
    m_unhealthyThreshold = jsonValue.GetInteger("unhealthyThreshold");

    m_unhealthyThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");

    m_timeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intervalSeconds"))
  {
    m_intervalSeconds = jsonValue.GetInteger("intervalSeconds");

    m_intervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("successCodes"))
  {
    m_successCodes = jsonValue.GetString("successCodes");

    m_successCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerServiceHealthCheckConfig::Jsonize() const
{
  JsonValue payload;

  if(m_healthyThresholdHasBeenSet)
  {
   payload.WithInteger("healthyThreshold", m_healthyThreshold);

  }

  if(m_unhealthyThresholdHasBeenSet)
  {
   payload.WithInteger("unhealthyThreshold", m_unhealthyThreshold);

  }

  if(m_timeoutSecondsHasBeenSet)
  {
   payload.WithInteger("timeoutSeconds", m_timeoutSeconds);

  }

  if(m_intervalSecondsHasBeenSet)
  {
   payload.WithInteger("intervalSeconds", m_intervalSeconds);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_successCodesHasBeenSet)
  {
   payload.WithString("successCodes", m_successCodes);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
