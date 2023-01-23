/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/DescribeBudgetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBudgetsResult::DescribeBudgetsResult()
{
}

DescribeBudgetsResult::DescribeBudgetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBudgetsResult& DescribeBudgetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Budgets"))
  {
    Aws::Utils::Array<JsonView> budgetsJsonList = jsonValue.GetArray("Budgets");
    for(unsigned budgetsIndex = 0; budgetsIndex < budgetsJsonList.GetLength(); ++budgetsIndex)
    {
      m_budgets.push_back(budgetsJsonList[budgetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
