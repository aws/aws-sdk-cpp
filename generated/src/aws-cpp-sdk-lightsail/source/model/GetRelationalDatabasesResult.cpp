/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetRelationalDatabasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRelationalDatabasesResult::GetRelationalDatabasesResult()
{
}

GetRelationalDatabasesResult::GetRelationalDatabasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRelationalDatabasesResult& GetRelationalDatabasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("relationalDatabases"))
  {
    Aws::Utils::Array<JsonView> relationalDatabasesJsonList = jsonValue.GetArray("relationalDatabases");
    for(unsigned relationalDatabasesIndex = 0; relationalDatabasesIndex < relationalDatabasesJsonList.GetLength(); ++relationalDatabasesIndex)
    {
      m_relationalDatabases.push_back(relationalDatabasesJsonList[relationalDatabasesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
