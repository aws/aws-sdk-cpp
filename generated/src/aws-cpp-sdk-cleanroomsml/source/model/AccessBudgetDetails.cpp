/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AccessBudgetDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

AccessBudgetDetails::AccessBudgetDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AccessBudgetDetails& AccessBudgetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remainingBudget"))
  {
    m_remainingBudget = jsonValue.GetInteger("remainingBudget");
    m_remainingBudgetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("budget"))
  {
    m_budget = jsonValue.GetInteger("budget");
    m_budgetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("budgetType"))
  {
    m_budgetType = AccessBudgetTypeMapper::GetAccessBudgetTypeForName(jsonValue.GetString("budgetType"));
    m_budgetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoRefresh"))
  {
    m_autoRefresh = AutoRefreshModeMapper::GetAutoRefreshModeForName(jsonValue.GetString("autoRefresh"));
    m_autoRefreshHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessBudgetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_remainingBudgetHasBeenSet)
  {
   payload.WithInteger("remainingBudget", m_remainingBudget);

  }

  if(m_budgetHasBeenSet)
  {
   payload.WithInteger("budget", m_budget);

  }

  if(m_budgetTypeHasBeenSet)
  {
   payload.WithString("budgetType", AccessBudgetTypeMapper::GetNameForAccessBudgetType(m_budgetType));
  }

  if(m_autoRefreshHasBeenSet)
  {
   payload.WithString("autoRefresh", AutoRefreshModeMapper::GetNameForAutoRefreshMode(m_autoRefresh));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
