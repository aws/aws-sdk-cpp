/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/UpdateNotificationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNotificationConfigurationRequest::UpdateNotificationConfigurationRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false)
{
}

Aws::String UpdateNotificationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationConfiguration", m_notificationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




