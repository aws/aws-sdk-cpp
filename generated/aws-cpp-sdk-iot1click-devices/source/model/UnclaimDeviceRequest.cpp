/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/UnclaimDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickDevicesService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnclaimDeviceRequest::UnclaimDeviceRequest() : 
    m_deviceIdHasBeenSet(false)
{
}

Aws::String UnclaimDeviceRequest::SerializePayload() const
{
  return {};
}




