/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/UpdateDeviceStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickDevicesService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDeviceStateRequest::UpdateDeviceStateRequest() : 
    m_deviceIdHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Aws::String UpdateDeviceStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload.View().WriteReadable();
}




