/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetRelationalDatabaseEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRelationalDatabaseEventsResult::GetRelationalDatabaseEventsResult()
{
}

GetRelationalDatabaseEventsResult::GetRelationalDatabaseEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRelationalDatabaseEventsResult& GetRelationalDatabaseEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("relationalDatabaseEvents"))
  {
    Aws::Utils::Array<JsonView> relationalDatabaseEventsJsonList = jsonValue.GetArray("relationalDatabaseEvents");
    for(unsigned relationalDatabaseEventsIndex = 0; relationalDatabaseEventsIndex < relationalDatabaseEventsJsonList.GetLength(); ++relationalDatabaseEventsIndex)
    {
      m_relationalDatabaseEvents.push_back(relationalDatabaseEventsJsonList[relationalDatabaseEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
