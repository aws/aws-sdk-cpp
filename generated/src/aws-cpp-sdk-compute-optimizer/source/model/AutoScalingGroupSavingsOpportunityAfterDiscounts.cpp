/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AutoScalingGroupSavingsOpportunityAfterDiscounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

AutoScalingGroupSavingsOpportunityAfterDiscounts::AutoScalingGroupSavingsOpportunityAfterDiscounts() : 
    m_savingsOpportunityPercentage(0.0),
    m_savingsOpportunityPercentageHasBeenSet(false),
    m_estimatedMonthlySavingsHasBeenSet(false)
{
}

AutoScalingGroupSavingsOpportunityAfterDiscounts::AutoScalingGroupSavingsOpportunityAfterDiscounts(JsonView jsonValue) : 
    m_savingsOpportunityPercentage(0.0),
    m_savingsOpportunityPercentageHasBeenSet(false),
    m_estimatedMonthlySavingsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingGroupSavingsOpportunityAfterDiscounts& AutoScalingGroupSavingsOpportunityAfterDiscounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("savingsOpportunityPercentage"))
  {
    m_savingsOpportunityPercentage = jsonValue.GetDouble("savingsOpportunityPercentage");

    m_savingsOpportunityPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetObject("estimatedMonthlySavings");

    m_estimatedMonthlySavingsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingGroupSavingsOpportunityAfterDiscounts::Jsonize() const
{
  JsonValue payload;

  if(m_savingsOpportunityPercentageHasBeenSet)
  {
   payload.WithDouble("savingsOpportunityPercentage", m_savingsOpportunityPercentage);

  }

  if(m_estimatedMonthlySavingsHasBeenSet)
  {
   payload.WithObject("estimatedMonthlySavings", m_estimatedMonthlySavings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
