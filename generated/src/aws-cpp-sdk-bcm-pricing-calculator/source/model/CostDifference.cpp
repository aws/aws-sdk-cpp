/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/CostDifference.h>
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

CostDifference::CostDifference(JsonView jsonValue)
{
  *this = jsonValue;
}

CostDifference& CostDifference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("historicalCost"))
  {
    m_historicalCost = jsonValue.GetObject("historicalCost");
    m_historicalCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedCost"))
  {
    m_estimatedCost = jsonValue.GetObject("estimatedCost");
    m_estimatedCostHasBeenSet = true;
  }
  return *this;
}

JsonValue CostDifference::Jsonize() const
{
  JsonValue payload;

  if(m_historicalCostHasBeenSet)
  {
   payload.WithObject("historicalCost", m_historicalCost.Jsonize());

  }

  if(m_estimatedCostHasBeenSet)
  {
   payload.WithObject("estimatedCost", m_estimatedCost.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
