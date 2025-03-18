/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateLogLevelsByResourceTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLogLevelsByResourceTypesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_defaultLogLevelHasBeenSet)
  {
   payload.WithString("DefaultLogLevel", LogLevelMapper::GetNameForLogLevel(m_defaultLogLevel));
  }

  if(m_fuotaTaskLogOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fuotaTaskLogOptionsJsonList(m_fuotaTaskLogOptions.size());
   for(unsigned fuotaTaskLogOptionsIndex = 0; fuotaTaskLogOptionsIndex < fuotaTaskLogOptionsJsonList.GetLength(); ++fuotaTaskLogOptionsIndex)
   {
     fuotaTaskLogOptionsJsonList[fuotaTaskLogOptionsIndex].AsObject(m_fuotaTaskLogOptions[fuotaTaskLogOptionsIndex].Jsonize());
   }
   payload.WithArray("FuotaTaskLogOptions", std::move(fuotaTaskLogOptionsJsonList));

  }

  if(m_wirelessDeviceLogOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wirelessDeviceLogOptionsJsonList(m_wirelessDeviceLogOptions.size());
   for(unsigned wirelessDeviceLogOptionsIndex = 0; wirelessDeviceLogOptionsIndex < wirelessDeviceLogOptionsJsonList.GetLength(); ++wirelessDeviceLogOptionsIndex)
   {
     wirelessDeviceLogOptionsJsonList[wirelessDeviceLogOptionsIndex].AsObject(m_wirelessDeviceLogOptions[wirelessDeviceLogOptionsIndex].Jsonize());
   }
   payload.WithArray("WirelessDeviceLogOptions", std::move(wirelessDeviceLogOptionsJsonList));

  }

  if(m_wirelessGatewayLogOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wirelessGatewayLogOptionsJsonList(m_wirelessGatewayLogOptions.size());
   for(unsigned wirelessGatewayLogOptionsIndex = 0; wirelessGatewayLogOptionsIndex < wirelessGatewayLogOptionsJsonList.GetLength(); ++wirelessGatewayLogOptionsIndex)
   {
     wirelessGatewayLogOptionsJsonList[wirelessGatewayLogOptionsIndex].AsObject(m_wirelessGatewayLogOptions[wirelessGatewayLogOptionsIndex].Jsonize());
   }
   payload.WithArray("WirelessGatewayLogOptions", std::move(wirelessGatewayLogOptionsJsonList));

  }

  return payload.View().WriteReadable();
}




