﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetDatabasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatabasesResult::GetDatabasesResult()
{
}

GetDatabasesResult::GetDatabasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDatabasesResult& GetDatabasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatabaseList"))
  {
    Array<JsonView> databaseListJsonList = jsonValue.GetArray("DatabaseList");
    for(unsigned databaseListIndex = 0; databaseListIndex < databaseListJsonList.GetLength(); ++databaseListIndex)
    {
      m_databaseList.push_back(databaseListJsonList[databaseListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
