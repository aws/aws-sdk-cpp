/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/IoTJobExecutionsRolloutConfig.h>
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

IoTJobExecutionsRolloutConfig::IoTJobExecutionsRolloutConfig() : 
    m_exponentialRateHasBeenSet(false),
    m_maximumPerMinute(0),
    m_maximumPerMinuteHasBeenSet(false)
{
}

IoTJobExecutionsRolloutConfig::IoTJobExecutionsRolloutConfig(JsonView jsonValue) : 
    m_exponentialRateHasBeenSet(false),
    m_maximumPerMinute(0),
    m_maximumPerMinuteHasBeenSet(false)
{
  *this = jsonValue;
}

IoTJobExecutionsRolloutConfig& IoTJobExecutionsRolloutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exponentialRate"))
  {
    m_exponentialRate = jsonValue.GetObject("exponentialRate");

    m_exponentialRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumPerMinute"))
  {
    m_maximumPerMinute = jsonValue.GetInteger("maximumPerMinute");

    m_maximumPerMinuteHasBeenSet = true;
  }

  return *this;
}

JsonValue IoTJobExecutionsRolloutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_exponentialRateHasBeenSet)
  {
   payload.WithObject("exponentialRate", m_exponentialRate.Jsonize());

  }

  if(m_maximumPerMinuteHasBeenSet)
  {
   payload.WithInteger("maximumPerMinute", m_maximumPerMinute);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
