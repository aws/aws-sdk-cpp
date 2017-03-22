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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SendTestEventNotificationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.SendTestEventNotification"));
  return headers;

}




