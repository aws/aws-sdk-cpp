/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/FilterLogEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

FilterLogEventsResult::FilterLogEventsResult()
{
}

FilterLogEventsResult::FilterLogEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

FilterLogEventsResult& FilterLogEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("searchedLogStreams"))
  {
    Aws::Utils::Array<JsonView> searchedLogStreamsJsonList = jsonValue.GetArray("searchedLogStreams");
    for(unsigned searchedLogStreamsIndex = 0; searchedLogStreamsIndex < searchedLogStreamsJsonList.GetLength(); ++searchedLogStreamsIndex)
    {
      m_searchedLogStreams.push_back(searchedLogStreamsJsonList[searchedLogStreamsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
