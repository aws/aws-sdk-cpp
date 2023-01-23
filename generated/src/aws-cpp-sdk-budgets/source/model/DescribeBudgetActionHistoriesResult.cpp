/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/DescribeBudgetActionHistoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBudgetActionHistoriesResult::DescribeBudgetActionHistoriesResult()
{
}

DescribeBudgetActionHistoriesResult::DescribeBudgetActionHistoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBudgetActionHistoriesResult& DescribeBudgetActionHistoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ActionHistories"))
  {
    Aws::Utils::Array<JsonView> actionHistoriesJsonList = jsonValue.GetArray("ActionHistories");
    for(unsigned actionHistoriesIndex = 0; actionHistoriesIndex < actionHistoriesJsonList.GetLength(); ++actionHistoriesIndex)
    {
      m_actionHistories.push_back(actionHistoriesJsonList[actionHistoriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
