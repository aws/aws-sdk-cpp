/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  return payload.WriteReadable();
}




