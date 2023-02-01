/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListDatabasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatabasesResult::ListDatabasesResult()
{
}

ListDatabasesResult::ListDatabasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatabasesResult& ListDatabasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatabaseList"))
  {
    Aws::Utils::Array<JsonView> databaseListJsonList = jsonValue.GetArray("DatabaseList");
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
