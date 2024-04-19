/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/GetInternetEventResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInternetEventResult::GetInternetEventResult() : 
    m_eventType(InternetEventType::NOT_SET),
    m_eventStatus(InternetEventStatus::NOT_SET)
{
}

GetInternetEventResult::GetInternetEventResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_eventType(InternetEventType::NOT_SET),
    m_eventStatus(InternetEventStatus::NOT_SET)
{
  *this = result;
}

GetInternetEventResult& GetInternetEventResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventId"))
  {
    m_eventId = jsonValue.GetString("EventId");

  }

  if(jsonValue.ValueExists("EventArn"))
  {
    m_eventArn = jsonValue.GetString("EventArn");

  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetString("StartedAt");

  }

  if(jsonValue.ValueExists("EndedAt"))
  {
    m_endedAt = jsonValue.GetString("EndedAt");

  }

  if(jsonValue.ValueExists("ClientLocation"))
  {
    m_clientLocation = jsonValue.GetObject("ClientLocation");

  }

  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = InternetEventTypeMapper::GetInternetEventTypeForName(jsonValue.GetString("EventType"));

  }

  if(jsonValue.ValueExists("EventStatus"))
  {
    m_eventStatus = InternetEventStatusMapper::GetInternetEventStatusForName(jsonValue.GetString("EventStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
