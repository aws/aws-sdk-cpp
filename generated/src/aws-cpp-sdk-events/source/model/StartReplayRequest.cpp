/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/StartReplayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartReplayRequest::StartReplayRequest() : 
    m_replayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_eventStartTimeHasBeenSet(false),
    m_eventEndTimeHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

Aws::String StartReplayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replayNameHasBeenSet)
  {
   payload.WithString("ReplayName", m_replayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_eventSourceArnHasBeenSet)
  {
   payload.WithString("EventSourceArn", m_eventSourceArn);

  }

  if(m_eventStartTimeHasBeenSet)
  {
   payload.WithDouble("EventStartTime", m_eventStartTime.SecondsWithMSPrecision());
  }

  if(m_eventEndTimeHasBeenSet)
  {
   payload.WithDouble("EventEndTime", m_eventEndTime.SecondsWithMSPrecision());
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartReplayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.StartReplay"));
  return headers;

}




