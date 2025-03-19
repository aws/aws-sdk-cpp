/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ExponentialRolloutRate.h>
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

ExponentialRolloutRate::ExponentialRolloutRate(JsonView jsonValue)
{
  *this = jsonValue;
}

ExponentialRolloutRate& ExponentialRolloutRate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseRatePerMinute"))
  {
    m_baseRatePerMinute = jsonValue.GetInteger("BaseRatePerMinute");
    m_baseRatePerMinuteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncrementFactor"))
  {
    m_incrementFactor = jsonValue.GetDouble("IncrementFactor");
    m_incrementFactorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RateIncreaseCriteria"))
  {
    m_rateIncreaseCriteria = jsonValue.GetObject("RateIncreaseCriteria");
    m_rateIncreaseCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue ExponentialRolloutRate::Jsonize() const
{
  JsonValue payload;

  if(m_baseRatePerMinuteHasBeenSet)
  {
   payload.WithInteger("BaseRatePerMinute", m_baseRatePerMinute);

  }

  if(m_incrementFactorHasBeenSet)
  {
   payload.WithDouble("IncrementFactor", m_incrementFactor);

  }

  if(m_rateIncreaseCriteriaHasBeenSet)
  {
   payload.WithObject("RateIncreaseCriteria", m_rateIncreaseCriteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
