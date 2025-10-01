/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/BudgetParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

BudgetParameter::BudgetParameter(JsonView jsonValue)
{
  *this = jsonValue;
}

BudgetParameter& BudgetParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = AccessBudgetTypeMapper::GetAccessBudgetTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("budget"))
  {
    m_budget = jsonValue.GetInteger("budget");
    m_budgetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoRefresh"))
  {
    m_autoRefresh = AutoRefreshModeMapper::GetAutoRefreshModeForName(jsonValue.GetString("autoRefresh"));
    m_autoRefreshHasBeenSet = true;
  }
  return *this;
}

JsonValue BudgetParameter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AccessBudgetTypeMapper::GetNameForAccessBudgetType(m_type));
  }

  if(m_budgetHasBeenSet)
  {
   payload.WithInteger("budget", m_budget);

  }

  if(m_autoRefreshHasBeenSet)
  {
   payload.WithString("autoRefresh", AutoRefreshModeMapper::GetNameForAutoRefreshMode(m_autoRefresh));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
