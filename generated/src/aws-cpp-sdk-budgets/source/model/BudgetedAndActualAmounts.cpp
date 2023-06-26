/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/BudgetedAndActualAmounts.h>
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

BudgetedAndActualAmounts::BudgetedAndActualAmounts() : 
    m_budgetedAmountHasBeenSet(false),
    m_actualAmountHasBeenSet(false),
    m_timePeriodHasBeenSet(false)
{
}

BudgetedAndActualAmounts::BudgetedAndActualAmounts(JsonView jsonValue) : 
    m_budgetedAmountHasBeenSet(false),
    m_actualAmountHasBeenSet(false),
    m_timePeriodHasBeenSet(false)
{
  *this = jsonValue;
}

BudgetedAndActualAmounts& BudgetedAndActualAmounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BudgetedAmount"))
  {
    m_budgetedAmount = jsonValue.GetObject("BudgetedAmount");

    m_budgetedAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActualAmount"))
  {
    m_actualAmount = jsonValue.GetObject("ActualAmount");

    m_actualAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimePeriod"))
  {
    m_timePeriod = jsonValue.GetObject("TimePeriod");

    m_timePeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue BudgetedAndActualAmounts::Jsonize() const
{
  JsonValue payload;

  if(m_budgetedAmountHasBeenSet)
  {
   payload.WithObject("BudgetedAmount", m_budgetedAmount.Jsonize());

  }

  if(m_actualAmountHasBeenSet)
  {
   payload.WithObject("ActualAmount", m_actualAmount.Jsonize());

  }

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
