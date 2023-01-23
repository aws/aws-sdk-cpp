/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/PutProjectEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutProjectEventsResult::PutProjectEventsResult() : 
    m_failedEventCount(0)
{
}

PutProjectEventsResult::PutProjectEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_failedEventCount(0)
{
  *this = result;
}

PutProjectEventsResult& PutProjectEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eventResults"))
  {
    Aws::Utils::Array<JsonView> eventResultsJsonList = jsonValue.GetArray("eventResults");
    for(unsigned eventResultsIndex = 0; eventResultsIndex < eventResultsJsonList.GetLength(); ++eventResultsIndex)
    {
      m_eventResults.push_back(eventResultsJsonList[eventResultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failedEventCount"))
  {
    m_failedEventCount = jsonValue.GetInteger("failedEventCount");

  }



  return *this;
}
