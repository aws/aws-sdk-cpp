/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> notificationsWithSubscribersJsonList(m_notificationsWithSubscribers.size());
   for(unsigned notificationsWithSubscribersIndex = 0; notificationsWithSubscribersIndex < notificationsWithSubscribersJsonList.GetLength(); ++notificationsWithSubscribersIndex)
   {
     notificationsWithSubscribersJsonList[notificationsWithSubscribersIndex].AsObject(m_notificationsWithSubscribers[notificationsWithSubscribersIndex].Jsonize());
   }
   payload.WithArray("NotificationsWithSubscribers", std::move(notificationsWithSubscribersJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBudgetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBudgetServiceGateway.CreateBudget"));
  return headers;

}



