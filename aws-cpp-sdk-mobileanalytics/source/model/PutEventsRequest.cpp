/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobileanalytics/model/PutEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MobileAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEventsRequest::PutEventsRequest() : 
    m_eventsHasBeenSet(false),
    m_clientContextHasBeenSet(false),
    m_clientContextEncodingHasBeenSet(false)
{
}

Aws::String PutEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventsHasBeenSet)
  {
   Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
   }
   payload.WithArray("events", std::move(eventsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientContextHasBeenSet)
  {
    ss << m_clientContext;
    headers.emplace("x-amz-client-context",  ss.str());
    ss.str("");
  }

  if(m_clientContextEncodingHasBeenSet)
  {
    ss << m_clientContextEncoding;
    headers.emplace("x-amz-client-context-encoding",  ss.str());
    ss.str("");
  }

  return headers;

}




