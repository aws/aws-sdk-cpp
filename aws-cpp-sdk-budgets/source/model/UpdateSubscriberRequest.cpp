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
#include <aws/budgets/model/UpdateSubscriberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubscriberRequest::UpdateSubscriberRequest() : 
    m_accountIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_oldSubscriberHasBeenSet(false),
    m_newSubscriberHasBeenSet(false)
{
}

Aws::String UpdateSubscriberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_budgetNameHasBeenSet)
  {
   payload.WithString("BudgetName", m_budgetName);

  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

  }

  if(m_oldSubscriberHasBeenSet)
  {
   payload.WithObject("OldSubscriber", m_oldSubscriber.Jsonize());

  }

  if(m_newSubscriberHasBeenSet)
  {
   payload.WithObject("NewSubscriber", m_newSubscriber.Jsonize());

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSubscriberRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBudgetServiceGateway.UpdateSubscriber"));
  return headers;

}



