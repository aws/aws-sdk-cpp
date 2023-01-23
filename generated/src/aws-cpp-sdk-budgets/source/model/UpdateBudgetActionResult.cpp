/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/UpdateBudgetActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateBudgetActionResult::UpdateBudgetActionResult()
{
}

UpdateBudgetActionResult::UpdateBudgetActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateBudgetActionResult& UpdateBudgetActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("OldAction"))
  {
    m_oldAction = jsonValue.GetObject("OldAction");

  }

  if(jsonValue.ValueExists("NewAction"))
  {
    m_newAction = jsonValue.GetObject("NewAction");

  }



  return *this;
}
