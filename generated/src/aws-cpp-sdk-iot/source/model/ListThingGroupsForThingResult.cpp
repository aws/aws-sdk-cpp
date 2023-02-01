/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListThingGroupsForThingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThingGroupsForThingResult::ListThingGroupsForThingResult()
{
}

ListThingGroupsForThingResult::ListThingGroupsForThingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListThingGroupsForThingResult& ListThingGroupsForThingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("thingGroups"))
  {
    Aws::Utils::Array<JsonView> thingGroupsJsonList = jsonValue.GetArray("thingGroups");
    for(unsigned thingGroupsIndex = 0; thingGroupsIndex < thingGroupsJsonList.GetLength(); ++thingGroupsIndex)
    {
      m_thingGroups.push_back(thingGroupsJsonList[thingGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
