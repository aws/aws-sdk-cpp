/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/StartFuotaTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartFuotaTaskRequest::StartFuotaTaskRequest() : 
    m_idHasBeenSet(false),
    m_loRaWANHasBeenSet(false)
{
}

Aws::String StartFuotaTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  return payload.View().WriteReadable();
}




