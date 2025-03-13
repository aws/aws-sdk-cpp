/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/BudgetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

BudgetSummary::BudgetSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

BudgetSummary& BudgetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("budgetId"))
  {
    m_budgetId = jsonValue.GetString("budgetId");
    m_budgetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageTrackingResource"))
  {
    m_usageTrackingResource = jsonValue.GetObject("usageTrackingResource");
    m_usageTrackingResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = BudgetStatusMapper::GetBudgetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("approximateDollarLimit"))
  {
    m_approximateDollarLimit = jsonValue.GetDouble("approximateDollarLimit");
    m_approximateDollarLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usages"))
  {
    m_usages = jsonValue.GetObject("usages");
    m_usagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue BudgetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_budgetIdHasBeenSet)
  {
   payload.WithString("budgetId", m_budgetId);

  }

  if(m_usageTrackingResourceHasBeenSet)
  {
   payload.WithObject("usageTrackingResource", m_usageTrackingResource.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", BudgetStatusMapper::GetNameForBudgetStatus(m_status));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_approximateDollarLimitHasBeenSet)
  {
   payload.WithDouble("approximateDollarLimit", m_approximateDollarLimit);

  }

  if(m_usagesHasBeenSet)
  {
   payload.WithObject("usages", m_usages.Jsonize());

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
