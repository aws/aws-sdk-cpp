/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SearchIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchIndexResult::SearchIndexResult()
{
}

SearchIndexResult::SearchIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchIndexResult& SearchIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("things"))
  {
    Aws::Utils::Array<JsonView> thingsJsonList = jsonValue.GetArray("things");
    for(unsigned thingsIndex = 0; thingsIndex < thingsJsonList.GetLength(); ++thingsIndex)
    {
      m_things.push_back(thingsJsonList[thingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("thingGroups"))
  {
    Aws::Utils::Array<JsonView> thingGroupsJsonList = jsonValue.GetArray("thingGroups");
    for(unsigned thingGroupsIndex = 0; thingGroupsIndex < thingGroupsJsonList.GetLength(); ++thingGroupsIndex)
    {
      m_thingGroups.push_back(thingGroupsJsonList[thingGroupsIndex].AsObject());
    }
  }



  return *this;
}
