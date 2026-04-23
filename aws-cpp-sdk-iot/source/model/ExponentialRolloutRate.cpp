/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/ExponentialRolloutRate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ExponentialRolloutRate::ExponentialRolloutRate() : 
    m_baseRatePerMinute(0),
    m_baseRatePerMinuteHasBeenSet(false),
    m_incrementFactor(0.0),
    m_incrementFactorHasBeenSet(false),
    m_rateIncreaseCriteriaHasBeenSet(false)
{
}

ExponentialRolloutRate::ExponentialRolloutRate(JsonView jsonValue) : 
    m_baseRatePerMinute(0),
    m_baseRatePerMinuteHasBeenSet(false),
    m_incrementFactor(0.0),
    m_incrementFactorHasBeenSet(false),
    m_rateIncreaseCriteriaHasBeenSet(false)
{
  *this = jsonValue;
}

ExponentialRolloutRate& ExponentialRolloutRate::operator =(JsonView jsonValue)
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

JsonValue ExponentialRolloutRate::Jsonize() const
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
} // namespace IoT
} // namespace Aws
