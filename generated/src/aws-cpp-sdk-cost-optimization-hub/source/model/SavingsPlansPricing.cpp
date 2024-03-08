/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/SavingsPlansPricing.h>
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

SavingsPlansPricing::SavingsPlansPricing() : 
    m_estimatedMonthlyCommitment(0.0),
    m_estimatedMonthlyCommitmentHasBeenSet(false),
    m_estimatedOnDemandCost(0.0),
    m_estimatedOnDemandCostHasBeenSet(false),
    m_monthlySavingsPlansEligibleCost(0.0),
    m_monthlySavingsPlansEligibleCostHasBeenSet(false),
    m_savingsPercentage(0.0),
    m_savingsPercentageHasBeenSet(false)
{
}

SavingsPlansPricing::SavingsPlansPricing(JsonView jsonValue) : 
    m_estimatedMonthlyCommitment(0.0),
    m_estimatedMonthlyCommitmentHasBeenSet(false),
    m_estimatedOnDemandCost(0.0),
    m_estimatedOnDemandCostHasBeenSet(false),
    m_monthlySavingsPlansEligibleCost(0.0),
    m_monthlySavingsPlansEligibleCostHasBeenSet(false),
    m_savingsPercentage(0.0),
    m_savingsPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansPricing& SavingsPlansPricing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("estimatedMonthlyCommitment"))
  {
    m_estimatedMonthlyCommitment = jsonValue.GetDouble("estimatedMonthlyCommitment");

    m_estimatedMonthlyCommitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedOnDemandCost"))
  {
    m_estimatedOnDemandCost = jsonValue.GetDouble("estimatedOnDemandCost");

    m_estimatedOnDemandCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("monthlySavingsPlansEligibleCost"))
  {
    m_monthlySavingsPlansEligibleCost = jsonValue.GetDouble("monthlySavingsPlansEligibleCost");

    m_monthlySavingsPlansEligibleCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("savingsPercentage"))
  {
    m_savingsPercentage = jsonValue.GetDouble("savingsPercentage");

    m_savingsPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansPricing::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedMonthlyCommitmentHasBeenSet)
  {
   payload.WithDouble("estimatedMonthlyCommitment", m_estimatedMonthlyCommitment);

  }

  if(m_estimatedOnDemandCostHasBeenSet)
  {
   payload.WithDouble("estimatedOnDemandCost", m_estimatedOnDemandCost);

  }

  if(m_monthlySavingsPlansEligibleCostHasBeenSet)
  {
   payload.WithDouble("monthlySavingsPlansEligibleCost", m_monthlySavingsPlansEligibleCost);

  }

  if(m_savingsPercentageHasBeenSet)
  {
   payload.WithDouble("savingsPercentage", m_savingsPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
