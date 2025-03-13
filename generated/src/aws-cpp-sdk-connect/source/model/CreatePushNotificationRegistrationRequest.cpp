/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreatePushNotificationRegistrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePushNotificationRegistrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_pinpointAppArnHasBeenSet)
  {
   payload.WithString("PinpointAppArn", m_pinpointAppArn);

  }

  if(m_deviceTokenHasBeenSet)
  {
   payload.WithString("DeviceToken", m_deviceToken);

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("DeviceType", DeviceTypeMapper::GetNameForDeviceType(m_deviceType));
  }

  if(m_contactConfigurationHasBeenSet)
  {
   payload.WithObject("ContactConfiguration", m_contactConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




