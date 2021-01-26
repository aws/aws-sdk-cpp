/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/HealthCheckCustomConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

HealthCheckCustomConfig::HealthCheckCustomConfig() : 
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false)
{
}

HealthCheckCustomConfig::HealthCheckCustomConfig(JsonView jsonValue) : 
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

HealthCheckCustomConfig& HealthCheckCustomConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailureThreshold"))
  {
    m_failureThreshold = jsonValue.GetInteger("FailureThreshold");

    m_failureThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue HealthCheckCustomConfig::Jsonize() const
{
  JsonValue payload;

  if(m_failureThresholdHasBeenSet)
  {
   payload.WithInteger("FailureThreshold", m_failureThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
