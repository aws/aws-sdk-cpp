﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/ListStatementsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStatementsResult::ListStatementsResult()
{
}

ListStatementsResult::ListStatementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStatementsResult& ListStatementsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Statements"))
  {
    Array<JsonView> statementsJsonList = jsonValue.GetArray("Statements");
    for(unsigned statementsIndex = 0; statementsIndex < statementsJsonList.GetLength(); ++statementsIndex)
    {
      m_statements.push_back(statementsJsonList[statementsIndex].AsObject());
    }
  }



  return *this;
}
