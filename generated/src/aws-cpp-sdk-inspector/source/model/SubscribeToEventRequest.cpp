/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/SubscribeToEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SubscribeToEventRequest::SubscribeToEventRequest() : 
    m_resourceArnHasBeenSet(false),
    m_event(InspectorEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_topicArnHasBeenSet(false)
{
}

Aws::String SubscribeToEventRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", InspectorEventMapper::GetNameForInspectorEvent(m_event));
  }

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("topicArn", m_topicArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SubscribeToEventRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.SubscribeToEvent"));
  return headers;

}




