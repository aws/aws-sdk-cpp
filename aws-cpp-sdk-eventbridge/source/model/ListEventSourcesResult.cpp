/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ListEventSourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEventSourcesResult::ListEventSourcesResult()
{
}

ListEventSourcesResult::ListEventSourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEventSourcesResult& ListEventSourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventSources"))
  {
    Aws::Utils::Array<JsonView> eventSourcesJsonList = jsonValue.GetArray("EventSources");
    for(unsigned eventSourcesIndex = 0; eventSourcesIndex < eventSourcesJsonList.GetLength(); ++eventSourcesIndex)
    {
      m_eventSources.push_back(eventSourcesJsonList[eventSourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
