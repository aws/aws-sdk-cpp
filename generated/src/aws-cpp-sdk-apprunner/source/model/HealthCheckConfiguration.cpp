/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/HealthCheckConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

HealthCheckConfiguration::HealthCheckConfiguration() : 
    m_protocol(HealthCheckProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_healthyThreshold(0),
    m_healthyThresholdHasBeenSet(false),
    m_unhealthyThreshold(0),
    m_unhealthyThresholdHasBeenSet(false)
{
}

HealthCheckConfiguration::HealthCheckConfiguration(JsonView jsonValue) : 
    m_protocol(HealthCheckProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_healthyThreshold(0),
    m_healthyThresholdHasBeenSet(false),
    m_unhealthyThreshold(0),
    m_unhealthyThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

HealthCheckConfiguration& HealthCheckConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = HealthCheckProtocolMapper::GetHealthCheckProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = jsonValue.GetInteger("Interval");

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

    m_timeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthyThreshold"))
  {
    m_healthyThreshold = jsonValue.GetInteger("HealthyThreshold");

    m_healthyThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnhealthyThreshold"))
  {
    m_unhealthyThreshold = jsonValue.GetInteger("UnhealthyThreshold");

    m_unhealthyThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue HealthCheckConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", HealthCheckProtocolMapper::GetNameForHealthCheckProtocol(m_protocol));
  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_intervalHasBeenSet)
  {
   payload.WithInteger("Interval", m_interval);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_healthyThresholdHasBeenSet)
  {
   payload.WithInteger("HealthyThreshold", m_healthyThreshold);

  }

  if(m_unhealthyThresholdHasBeenSet)
  {
   payload.WithInteger("UnhealthyThreshold", m_unhealthyThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
