/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/GetDeviceRegistrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SagemakerEdgeManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeviceRegistrationRequest::GetDeviceRegistrationRequest() : 
    m_deviceNameHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false)
{
}

Aws::String GetDeviceRegistrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  return payload.View().WriteReadable();
}




