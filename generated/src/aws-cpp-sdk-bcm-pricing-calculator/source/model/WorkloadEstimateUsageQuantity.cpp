/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/WorkloadEstimateUsageQuantity.h>
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

WorkloadEstimateUsageQuantity::WorkloadEstimateUsageQuantity(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkloadEstimateUsageQuantity& WorkloadEstimateUsageQuantity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("amount"))
  {
    m_amount = jsonValue.GetDouble("amount");
    m_amountHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadEstimateUsageQuantity::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

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
