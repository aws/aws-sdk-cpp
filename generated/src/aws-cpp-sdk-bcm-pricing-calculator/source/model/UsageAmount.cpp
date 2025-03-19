/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/UsageAmount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

UsageAmount::UsageAmount(JsonView jsonValue)
{
  *this = jsonValue;
}

UsageAmount& UsageAmount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startHour"))
  {
    m_startHour = jsonValue.GetDouble("startHour");
    m_startHourHasBeenSet = true;
  }
  if(jsonValue.ValueExists("amount"))
  {
    m_amount = jsonValue.GetDouble("amount");
    m_amountHasBeenSet = true;
  }
  return *this;
}

JsonValue UsageAmount::Jsonize() const
{
  JsonValue payload;

  if(m_startHourHasBeenSet)
  {
   payload.WithDouble("startHour", m_startHour.SecondsWithMSPrecision());
  }

  if(m_amountHasBeenSet)
  {
   payload.WithDouble("amount", m_amount);

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
