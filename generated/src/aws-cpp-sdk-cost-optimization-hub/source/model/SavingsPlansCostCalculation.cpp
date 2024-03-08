/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/SavingsPlansCostCalculation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

SavingsPlansCostCalculation::SavingsPlansCostCalculation() : 
    m_pricingHasBeenSet(false)
{
}

SavingsPlansCostCalculation::SavingsPlansCostCalculation(JsonView jsonValue) : 
    m_pricingHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansCostCalculation& SavingsPlansCostCalculation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pricing"))
  {
    m_pricing = jsonValue.GetObject("pricing");

    m_pricingHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansCostCalculation::Jsonize() const
{
  JsonValue payload;

  if(m_pricingHasBeenSet)
  {
   payload.WithObject("pricing", m_pricing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
