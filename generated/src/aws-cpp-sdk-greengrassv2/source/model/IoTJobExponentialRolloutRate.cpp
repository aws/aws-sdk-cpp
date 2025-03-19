/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/IoTJobExponentialRolloutRate.h>
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

IoTJobExponentialRolloutRate::IoTJobExponentialRolloutRate(JsonView jsonValue)
{
  *this = jsonValue;
}

IoTJobExponentialRolloutRate& IoTJobExponentialRolloutRate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("baseRatePerMinute"))
  {
    m_baseRatePerMinute = jsonValue.GetInteger("baseRatePerMinute");
    m_baseRatePerMinuteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("incrementFactor"))
  {
    m_incrementFactor = jsonValue.GetDouble("incrementFactor");
    m_incrementFactorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateIncreaseCriteria"))
  {
    m_rateIncreaseCriteria = jsonValue.GetObject("rateIncreaseCriteria");
    m_rateIncreaseCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue IoTJobExponentialRolloutRate::Jsonize() const
{
  JsonValue payload;

  if(m_baseRatePerMinuteHasBeenSet)
  {
   payload.WithInteger("baseRatePerMinute", m_baseRatePerMinute);

  }

  if(m_incrementFactorHasBeenSet)
  {
   payload.WithDouble("incrementFactor", m_incrementFactor);

  }

  if(m_rateIncreaseCriteriaHasBeenSet)
  {
   payload.WithObject("rateIncreaseCriteria", m_rateIncreaseCriteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
