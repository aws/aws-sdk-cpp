/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/PutAccountSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Artifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountSettingsRequest::PutAccountSettingsRequest() : 
    m_notificationSubscriptionStatus(NotificationSubscriptionStatus::NOT_SET),
    m_notificationSubscriptionStatusHasBeenSet(false)
{
}

Aws::String PutAccountSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notificationSubscriptionStatusHasBeenSet)
  {
   payload.WithString("notificationSubscriptionStatus", NotificationSubscriptionStatusMapper::GetNameForNotificationSubscriptionStatus(m_notificationSubscriptionStatus));
  }

  return payload.View().WriteReadable();
}




