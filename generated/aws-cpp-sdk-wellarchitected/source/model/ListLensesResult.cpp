﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListLensesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLensesResult::ListLensesResult()
{
}

ListLensesResult::ListLensesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLensesResult& ListLensesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LensSummaries"))
  {
    Array<JsonView> lensSummariesJsonList = jsonValue.GetArray("LensSummaries");
    for(unsigned lensSummariesIndex = 0; lensSummariesIndex < lensSummariesJsonList.GetLength(); ++lensSummariesIndex)
    {
      m_lensSummaries.push_back(lensSummariesJsonList[lensSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
