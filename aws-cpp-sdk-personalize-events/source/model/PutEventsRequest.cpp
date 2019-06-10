/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/personalize-events/model/PutEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PersonalizeEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEventsRequest::PutEventsRequest() : 
    m_trackingIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_eventListHasBeenSet(false)
{
}

Aws::String PutEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trackingIdHasBeenSet)
  {
   payload.WithString("trackingId", m_trackingId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_eventListHasBeenSet)
  {
   Array<JsonValue> eventListJsonList(m_eventList.size());
   for(unsigned eventListIndex = 0; eventListIndex < eventListJsonList.GetLength(); ++eventListIndex)
   {
     eventListJsonList[eventListIndex].AsObject(m_eventList[eventListIndex].Jsonize());
   }
   payload.WithArray("eventList", std::move(eventListJsonList));

  }

  return payload.View().WriteReadable();
}




