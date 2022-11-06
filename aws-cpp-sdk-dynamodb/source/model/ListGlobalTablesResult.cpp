/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ListGlobalTablesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGlobalTablesResult::ListGlobalTablesResult()
{
}

ListGlobalTablesResult::ListGlobalTablesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGlobalTablesResult& ListGlobalTablesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GlobalTables"))
  {
    Aws::Utils::Array<JsonView> globalTablesJsonList = jsonValue.GetArray("GlobalTables");
    for(unsigned globalTablesIndex = 0; globalTablesIndex < globalTablesJsonList.GetLength(); ++globalTablesIndex)
    {
      m_globalTables.push_back(globalTablesJsonList[globalTablesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LastEvaluatedGlobalTableName"))
  {
    m_lastEvaluatedGlobalTableName = jsonValue.GetString("LastEvaluatedGlobalTableName");

  }



  return *this;
}
