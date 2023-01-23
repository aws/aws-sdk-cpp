/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetRelationalDatabaseBlueprintsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRelationalDatabaseBlueprintsResult::GetRelationalDatabaseBlueprintsResult()
{
}

GetRelationalDatabaseBlueprintsResult::GetRelationalDatabaseBlueprintsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRelationalDatabaseBlueprintsResult& GetRelationalDatabaseBlueprintsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("blueprints"))
  {
    Aws::Utils::Array<JsonView> blueprintsJsonList = jsonValue.GetArray("blueprints");
    for(unsigned blueprintsIndex = 0; blueprintsIndex < blueprintsJsonList.GetLength(); ++blueprintsIndex)
    {
      m_blueprints.push_back(blueprintsJsonList[blueprintsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
