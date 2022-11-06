/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ListEventBusesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEventBusesResult::ListEventBusesResult()
{
}

ListEventBusesResult::ListEventBusesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEventBusesResult& ListEventBusesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventBuses"))
  {
    Aws::Utils::Array<JsonView> eventBusesJsonList = jsonValue.GetArray("EventBuses");
    for(unsigned eventBusesIndex = 0; eventBusesIndex < eventBusesJsonList.GetLength(); ++eventBusesIndex)
    {
      m_eventBuses.push_back(eventBusesJsonList[eventBusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
