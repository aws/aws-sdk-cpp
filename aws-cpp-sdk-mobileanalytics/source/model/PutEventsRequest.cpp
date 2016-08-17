/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientContextHasBeenSet)
  {
    ss << m_clientContext;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-client-context", ss.str()));
    ss.str("");
  }

  if(m_clientContextEncodingHasBeenSet)
  {
    ss << m_clientContextEncoding;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-client-context-encoding", ss.str()));
    ss.str("");
  }

  return headers;

}



