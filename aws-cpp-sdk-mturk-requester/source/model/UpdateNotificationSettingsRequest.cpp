/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/UpdateNotificationSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNotificationSettingsRequest::UpdateNotificationSettingsRequest() : 
    m_hITTypeIdHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false)
{
}

Aws::String UpdateNotificationSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hITTypeIdHasBeenSet)
  {
   payload.WithString("HITTypeId", m_hITTypeId);

  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("Active", m_active);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNotificationSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.UpdateNotificationSettings"));
  return headers;

}




