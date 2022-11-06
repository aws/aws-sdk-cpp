/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDevicesRequest::UpdateDevicesRequest() : 
    m_deviceFleetNameHasBeenSet(false),
    m_devicesHasBeenSet(false)
{
}

Aws::String UpdateDevicesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  if(m_devicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> devicesJsonList(m_devices.size());
   for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
   {
     devicesJsonList[devicesIndex].AsObject(m_devices[devicesIndex].Jsonize());
   }
   payload.WithArray("Devices", std::move(devicesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDevicesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateDevices"));
  return headers;

}




