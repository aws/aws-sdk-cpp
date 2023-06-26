/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/UpdateNotificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNotificationRequest::UpdateNotificationRequest() : 
    m_accountIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_oldNotificationHasBeenSet(false),
    m_newNotificationHasBeenSet(false)
{
}

Aws::String UpdateNotificationRequest::SerializePayload() const
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

  if(m_oldNotificationHasBeenSet)
  {
   payload.WithObject("OldNotification", m_oldNotification.Jsonize());

  }

  if(m_newNotificationHasBeenSet)
  {
   payload.WithObject("NewNotification", m_newNotification.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNotificationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBudgetServiceGateway.UpdateNotification"));
  return headers;

}




