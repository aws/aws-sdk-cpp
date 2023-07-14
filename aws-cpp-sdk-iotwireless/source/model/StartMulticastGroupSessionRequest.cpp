/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/StartMulticastGroupSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMulticastGroupSessionRequest::StartMulticastGroupSessionRequest() : 
    m_idHasBeenSet(false),
    m_loRaWANHasBeenSet(false)
{
}

Aws::String StartMulticastGroupSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  return payload.View().WriteReadable();
}




