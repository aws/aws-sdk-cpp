/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/GetDeviceMethodsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickDevicesService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeviceMethodsRequest::GetDeviceMethodsRequest() : 
    m_deviceIdHasBeenSet(false)
{
}

Aws::String GetDeviceMethodsRequest::SerializePayload() const
{
  return {};
}




