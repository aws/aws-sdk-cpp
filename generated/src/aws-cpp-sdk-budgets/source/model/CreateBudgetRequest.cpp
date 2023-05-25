/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/CreateBudgetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBudgetRequest::CreateBudgetRequest() : 
    m_accountIdHasBeenSet(false),
    m_budgetHasBeenSet(false),
    m_notificationsWithSubscribersHasBeenSet(false)
{
}

Aws::String CreateBudgetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_budgetHasBeenSet)
  {
   payload.WithObject("Budget", m_budget.Jsonize());

  }

  if(m_notificationsWithSubscribersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationsWithSubscribersJsonList(m_notificationsWithSubscribers.size());
   for(unsigned notificationsWithSubscribersIndex = 0; notificationsWithSubscribersIndex < notificationsWithSubscribersJsonList.GetLength(); ++notificationsWithSubscribersIndex)
   {
     notificationsWithSubscribersJsonList[notificationsWithSubscribersIndex].AsObject(m_notificationsWithSubscribers[notificationsWithSubscribersIndex].Jsonize());
   }
   payload.WithArray("NotificationsWithSubscribers", std::move(notificationsWithSubscribersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBudgetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBudgetServiceGateway.CreateBudget"));
  return headers;

}




