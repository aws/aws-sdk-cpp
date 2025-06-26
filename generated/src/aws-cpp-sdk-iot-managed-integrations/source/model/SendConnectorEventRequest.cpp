/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/SendConnectorEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendConnectorEventRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", ConnectorEventOperationMapper::GetNameForConnectorEventOperation(m_operation));
  }

  if(m_operationVersionHasBeenSet)
  {
   payload.WithString("OperationVersion", m_operationVersion);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithInteger("StatusCode", m_statusCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_deviceDiscoveryIdHasBeenSet)
  {
   payload.WithString("DeviceDiscoveryId", m_deviceDiscoveryId);

  }

  if(m_connectorDeviceIdHasBeenSet)
  {
   payload.WithString("ConnectorDeviceId", m_connectorDeviceId);

  }

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("TraceId", m_traceId);

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

  if(m_matterEndpointHasBeenSet)
  {
   payload.WithObject("MatterEndpoint", m_matterEndpoint.Jsonize());

  }

  return payload.View().WriteReadable();
}




