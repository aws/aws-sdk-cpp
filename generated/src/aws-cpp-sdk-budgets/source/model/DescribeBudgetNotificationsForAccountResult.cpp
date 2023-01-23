/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/DescribeBudgetNotificationsForAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBudgetNotificationsForAccountResult::DescribeBudgetNotificationsForAccountResult()
{
}

DescribeBudgetNotificationsForAccountResult::DescribeBudgetNotificationsForAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBudgetNotificationsForAccountResult& DescribeBudgetNotificationsForAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BudgetNotificationsForAccount"))
  {
    Aws::Utils::Array<JsonView> budgetNotificationsForAccountJsonList = jsonValue.GetArray("BudgetNotificationsForAccount");
    for(unsigned budgetNotificationsForAccountIndex = 0; budgetNotificationsForAccountIndex < budgetNotificationsForAccountJsonList.GetLength(); ++budgetNotificationsForAccountIndex)
    {
      m_budgetNotificationsForAccount.push_back(budgetNotificationsForAccountJsonList[budgetNotificationsForAccountIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
