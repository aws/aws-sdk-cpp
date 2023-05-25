/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansCoverageData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

SavingsPlansCoverageData::SavingsPlansCoverageData() : 
    m_spendCoveredBySavingsPlansHasBeenSet(false),
    m_onDemandCostHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_coveragePercentageHasBeenSet(false)
{
}

SavingsPlansCoverageData::SavingsPlansCoverageData(JsonView jsonValue) : 
    m_spendCoveredBySavingsPlansHasBeenSet(false),
    m_onDemandCostHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_coveragePercentageHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansCoverageData& SavingsPlansCoverageData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SpendCoveredBySavingsPlans"))
  {
    m_spendCoveredBySavingsPlans = jsonValue.GetString("SpendCoveredBySavingsPlans");

    m_spendCoveredBySavingsPlansHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandCost"))
  {
    m_onDemandCost = jsonValue.GetString("OnDemandCost");

    m_onDemandCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCost"))
  {
    m_totalCost = jsonValue.GetString("TotalCost");

    m_totalCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoveragePercentage"))
  {
    m_coveragePercentage = jsonValue.GetString("CoveragePercentage");

    m_coveragePercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansCoverageData::Jsonize() const
{
  JsonValue payload;

  if(m_spendCoveredBySavingsPlansHasBeenSet)
  {
   payload.WithString("SpendCoveredBySavingsPlans", m_spendCoveredBySavingsPlans);

  }

  if(m_onDemandCostHasBeenSet)
  {
   payload.WithString("OnDemandCost", m_onDemandCost);

  }

  if(m_totalCostHasBeenSet)
  {
   payload.WithString("TotalCost", m_totalCost);

  }

  if(m_coveragePercentageHasBeenSet)
  {
   payload.WithString("CoveragePercentage", m_coveragePercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
