/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/BudgetNotificationsForAccount.h>
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

BudgetNotificationsForAccount::BudgetNotificationsForAccount() : 
    m_notificationsHasBeenSet(false),
    m_budgetNameHasBeenSet(false)
{
}

BudgetNotificationsForAccount::BudgetNotificationsForAccount(JsonView jsonValue) : 
    m_notificationsHasBeenSet(false),
    m_budgetNameHasBeenSet(false)
{
  *this = jsonValue;
}

BudgetNotificationsForAccount& BudgetNotificationsForAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Notifications"))
  {
    Aws::Utils::Array<JsonView> notificationsJsonList = jsonValue.GetArray("Notifications");
    for(unsigned notificationsIndex = 0; notificationsIndex < notificationsJsonList.GetLength(); ++notificationsIndex)
    {
      m_notifications.push_back(notificationsJsonList[notificationsIndex].AsObject());
    }
    m_notificationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BudgetName"))
  {
    m_budgetName = jsonValue.GetString("BudgetName");

    m_budgetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue BudgetNotificationsForAccount::Jsonize() const
{
  JsonValue payload;

  if(m_notificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationsJsonList(m_notifications.size());
   for(unsigned notificationsIndex = 0; notificationsIndex < notificationsJsonList.GetLength(); ++notificationsIndex)
   {
     notificationsJsonList[notificationsIndex].AsObject(m_notifications[notificationsIndex].Jsonize());
   }
   payload.WithArray("Notifications", std::move(notificationsJsonList));

  }

  if(m_budgetNameHasBeenSet)
  {
   payload.WithString("BudgetName", m_budgetName);

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
