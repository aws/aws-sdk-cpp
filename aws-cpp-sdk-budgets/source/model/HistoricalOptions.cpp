/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/HistoricalOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

HistoricalOptions::HistoricalOptions() : 
    m_budgetAdjustmentPeriod(0),
    m_budgetAdjustmentPeriodHasBeenSet(false),
    m_lookBackAvailablePeriods(0),
    m_lookBackAvailablePeriodsHasBeenSet(false)
{
}

HistoricalOptions::HistoricalOptions(JsonView jsonValue) : 
    m_budgetAdjustmentPeriod(0),
    m_budgetAdjustmentPeriodHasBeenSet(false),
    m_lookBackAvailablePeriods(0),
    m_lookBackAvailablePeriodsHasBeenSet(false)
{
  *this = jsonValue;
}

HistoricalOptions& HistoricalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BudgetAdjustmentPeriod"))
  {
    m_budgetAdjustmentPeriod = jsonValue.GetInteger("BudgetAdjustmentPeriod");

    m_budgetAdjustmentPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LookBackAvailablePeriods"))
  {
    m_lookBackAvailablePeriods = jsonValue.GetInteger("LookBackAvailablePeriods");

    m_lookBackAvailablePeriodsHasBeenSet = true;
  }

  return *this;
}

JsonValue HistoricalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_budgetAdjustmentPeriodHasBeenSet)
  {
   payload.WithInteger("BudgetAdjustmentPeriod", m_budgetAdjustmentPeriod);

  }

  if(m_lookBackAvailablePeriodsHasBeenSet)
  {
   payload.WithInteger("LookBackAvailablePeriods", m_lookBackAvailablePeriods);

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
