﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ListGlobalTablesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_globalTablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastEvaluatedGlobalTableName"))
  {
    m_lastEvaluatedGlobalTableName = jsonValue.GetString("LastEvaluatedGlobalTableName");
    m_lastEvaluatedGlobalTableNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
