/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ExecuteBudgetActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExecuteBudgetActionResult::ExecuteBudgetActionResult() : 
    m_executionType(ExecutionType::NOT_SET)
{
}

ExecuteBudgetActionResult::ExecuteBudgetActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_executionType(ExecutionType::NOT_SET)
{
  *this = result;
}

ExecuteBudgetActionResult& ExecuteBudgetActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

  }

  if(jsonValue.ValueExists("BudgetName"))
  {
    m_budgetName = jsonValue.GetString("BudgetName");

  }

  if(jsonValue.ValueExists("ActionId"))
  {
    m_actionId = jsonValue.GetString("ActionId");

  }

  if(jsonValue.ValueExists("ExecutionType"))
  {
    m_executionType = ExecutionTypeMapper::GetExecutionTypeForName(jsonValue.GetString("ExecutionType"));

  }



  return *this;
}
