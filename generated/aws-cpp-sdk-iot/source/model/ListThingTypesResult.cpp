﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListThingTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThingTypesResult::ListThingTypesResult()
{
}

ListThingTypesResult::ListThingTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListThingTypesResult& ListThingTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("thingTypes"))
  {
    Array<JsonView> thingTypesJsonList = jsonValue.GetArray("thingTypes");
    for(unsigned thingTypesIndex = 0; thingTypesIndex < thingTypesJsonList.GetLength(); ++thingTypesIndex)
    {
      m_thingTypes.push_back(thingTypesJsonList[thingTypesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
