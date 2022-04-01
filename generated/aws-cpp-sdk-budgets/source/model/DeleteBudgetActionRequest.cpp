/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/DeleteBudgetActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBudgetActionRequest::DeleteBudgetActionRequest() : 
    m_accountIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_actionIdHasBeenSet(false)
{
}

Aws::String DeleteBudgetActionRequest::SerializePayload() const
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

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("ActionId", m_actionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteBudgetActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBudgetServiceGateway.DeleteBudgetAction"));
  return headers;

}




