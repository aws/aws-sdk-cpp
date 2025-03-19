/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaTaskExecutionRolloutConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

OtaTaskExecutionRolloutConfig::OtaTaskExecutionRolloutConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OtaTaskExecutionRolloutConfig& OtaTaskExecutionRolloutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExponentialRolloutRate"))
  {
    m_exponentialRolloutRate = jsonValue.GetObject("ExponentialRolloutRate");
    m_exponentialRolloutRateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumPerMinute"))
  {
    m_maximumPerMinute = jsonValue.GetInteger("MaximumPerMinute");
    m_maximumPerMinuteHasBeenSet = true;
  }
  return *this;
}

JsonValue OtaTaskExecutionRolloutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_exponentialRolloutRateHasBeenSet)
  {
   payload.WithObject("ExponentialRolloutRate", m_exponentialRolloutRate.Jsonize());

  }

  if(m_maximumPerMinuteHasBeenSet)
  {
   payload.WithInteger("MaximumPerMinute", m_maximumPerMinute);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
