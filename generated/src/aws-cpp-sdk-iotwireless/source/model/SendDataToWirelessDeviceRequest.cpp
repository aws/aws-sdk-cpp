/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SendDataToWirelessDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendDataToWirelessDeviceRequest::SendDataToWirelessDeviceRequest() : 
    m_idHasBeenSet(false),
    m_transmitMode(0),
    m_transmitModeHasBeenSet(false),
    m_payloadDataHasBeenSet(false),
    m_wirelessMetadataHasBeenSet(false)
{
}

Aws::String SendDataToWirelessDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transmitModeHasBeenSet)
  {
   payload.WithInteger("TransmitMode", m_transmitMode);

  }

  if(m_payloadDataHasBeenSet)
  {
   payload.WithString("PayloadData", m_payloadData);

  }

  if(m_wirelessMetadataHasBeenSet)
  {
   payload.WithObject("WirelessMetadata", m_wirelessMetadata.Jsonize());

  }

  return payload.View().WriteReadable();
}




