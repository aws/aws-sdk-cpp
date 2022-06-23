/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListPreparedStatementsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPreparedStatementsResult::ListPreparedStatementsResult()
{
}

ListPreparedStatementsResult::ListPreparedStatementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPreparedStatementsResult& ListPreparedStatementsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PreparedStatements"))
  {
    Array<JsonView> preparedStatementsJsonList = jsonValue.GetArray("PreparedStatements");
    for(unsigned preparedStatementsIndex = 0; preparedStatementsIndex < preparedStatementsJsonList.GetLength(); ++preparedStatementsIndex)
    {
      m_preparedStatements.push_back(preparedStatementsJsonList[preparedStatementsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
