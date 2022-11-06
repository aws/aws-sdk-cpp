/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> eventListJsonList(m_eventList.size());
   for(unsigned eventListIndex = 0; eventListIndex < eventListJsonList.GetLength(); ++eventListIndex)
   {
     eventListJsonList[eventListIndex].AsObject(m_eventList[eventListIndex].Jsonize());
   }
   payload.WithArray("eventList", std::move(eventListJsonList));

  }

  return payload.View().WriteReadable();
}




