/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateWirelessDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWirelessDeviceRequest::UpdateWirelessDeviceRequest() : 
    m_idHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_loRaWANHasBeenSet(false),
    m_positioning(PositioningConfigStatus::NOT_SET),
    m_positioningHasBeenSet(false)
{
}

Aws::String UpdateWirelessDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("DestinationName", m_destinationName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  if(m_positioningHasBeenSet)
  {
   payload.WithString("Positioning", PositioningConfigStatusMapper::GetNameForPositioningConfigStatus(m_positioning));
  }

  return payload.View().WriteReadable();
}




