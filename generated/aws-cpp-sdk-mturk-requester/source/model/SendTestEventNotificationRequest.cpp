/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/SendTestEventNotificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendTestEventNotificationRequest::SendTestEventNotificationRequest() : 
    m_notificationHasBeenSet(false),
    m_testEventType(EventType::NOT_SET),
    m_testEventTypeHasBeenSet(false)
{
}

Aws::String SendTestEventNotificationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

  }

  if(m_testEventTypeHasBeenSet)
  {
   payload.WithString("TestEventType", EventTypeMapper::GetNameForEventType(m_testEventType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendTestEventNotificationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.SendTestEventNotification"));
  return headers;

}




