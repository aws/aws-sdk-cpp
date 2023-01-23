/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateEventConfigurationByResourceTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventConfigurationByResourceTypesRequest::UpdateEventConfigurationByResourceTypesRequest() : 
    m_deviceRegistrationStateHasBeenSet(false),
    m_proximityHasBeenSet(false),
    m_joinHasBeenSet(false),
    m_connectionStatusHasBeenSet(false),
    m_messageDeliveryStatusHasBeenSet(false)
{
}

Aws::String UpdateEventConfigurationByResourceTypesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceRegistrationStateHasBeenSet)
  {
   payload.WithObject("DeviceRegistrationState", m_deviceRegistrationState.Jsonize());

  }

  if(m_proximityHasBeenSet)
  {
   payload.WithObject("Proximity", m_proximity.Jsonize());

  }

  if(m_joinHasBeenSet)
  {
   payload.WithObject("Join", m_join.Jsonize());

  }

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithObject("ConnectionStatus", m_connectionStatus.Jsonize());

  }

  if(m_messageDeliveryStatusHasBeenSet)
  {
   payload.WithObject("MessageDeliveryStatus", m_messageDeliveryStatus.Jsonize());

  }

  return payload.View().WriteReadable();
}




