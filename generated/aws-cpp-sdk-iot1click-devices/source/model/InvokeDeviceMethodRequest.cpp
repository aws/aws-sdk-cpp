/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/InvokeDeviceMethodRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickDevicesService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InvokeDeviceMethodRequest::InvokeDeviceMethodRequest() : 
    m_deviceIdHasBeenSet(false),
    m_deviceMethodHasBeenSet(false),
    m_deviceMethodParametersHasBeenSet(false)
{
}

Aws::String InvokeDeviceMethodRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceMethodHasBeenSet)
  {
   payload.WithObject("deviceMethod", m_deviceMethod.Jsonize());

  }

  if(m_deviceMethodParametersHasBeenSet)
  {
   payload.WithString("deviceMethodParameters", m_deviceMethodParameters);

  }

  return payload.View().WriteReadable();
}




