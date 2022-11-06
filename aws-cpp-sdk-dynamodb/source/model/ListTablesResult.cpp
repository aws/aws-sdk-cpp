/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ListTablesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTablesResult::ListTablesResult()
{
}

ListTablesResult::ListTablesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTablesResult& ListTablesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableNames"))
  {
    Aws::Utils::Array<JsonView> tableNamesJsonList = jsonValue.GetArray("TableNames");
    for(unsigned tableNamesIndex = 0; tableNamesIndex < tableNamesJsonList.GetLength(); ++tableNamesIndex)
    {
      m_tableNames.push_back(tableNamesJsonList[tableNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("LastEvaluatedTableName"))
  {
    m_lastEvaluatedTableName = jsonValue.GetString("LastEvaluatedTableName");

  }



  return *this;
}
