/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ExecuteBudgetActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteBudgetActionRequest::ExecuteBudgetActionRequest() : 
    m_accountIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_executionType(ExecutionType::NOT_SET),
    m_executionTypeHasBeenSet(false)
{
}

Aws::String ExecuteBudgetActionRequest::SerializePayload() const
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

  if(m_executionTypeHasBeenSet)
  {
   payload.WithString("ExecutionType", ExecutionTypeMapper::GetNameForExecutionType(m_executionType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExecuteBudgetActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBudgetServiceGateway.ExecuteBudgetAction"));
  return headers;

}




