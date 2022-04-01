﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateFuotaTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFuotaTaskRequest::UpdateFuotaTaskRequest() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_loRaWANHasBeenSet(false),
    m_firmwareUpdateImageHasBeenSet(false),
    m_firmwareUpdateRoleHasBeenSet(false)
{
}

Aws::String UpdateFuotaTaskRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_firmwareUpdateImageHasBeenSet)
  {
   payload.WithString("FirmwareUpdateImage", m_firmwareUpdateImage);

  }

  if(m_firmwareUpdateRoleHasBeenSet)
  {
   payload.WithString("FirmwareUpdateRole", m_firmwareUpdateRole);

  }

  return payload.View().WriteReadable();
}




