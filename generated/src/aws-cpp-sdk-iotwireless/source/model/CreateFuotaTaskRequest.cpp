﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CreateFuotaTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFuotaTaskRequest::CreateFuotaTaskRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_loRaWANHasBeenSet(false),
    m_firmwareUpdateImageHasBeenSet(false),
    m_firmwareUpdateRoleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_redundancyPercent(0),
    m_redundancyPercentHasBeenSet(false),
    m_fragmentSizeBytes(0),
    m_fragmentSizeBytesHasBeenSet(false),
    m_fragmentIntervalMS(0),
    m_fragmentIntervalMSHasBeenSet(false)
{
}

Aws::String CreateFuotaTaskRequest::SerializePayload() const
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

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_redundancyPercentHasBeenSet)
  {
   payload.WithInteger("RedundancyPercent", m_redundancyPercent);

  }

  if(m_fragmentSizeBytesHasBeenSet)
  {
   payload.WithInteger("FragmentSizeBytes", m_fragmentSizeBytes);

  }

  if(m_fragmentIntervalMSHasBeenSet)
  {
   payload.WithInteger("FragmentIntervalMS", m_fragmentIntervalMS);

  }

  return payload.View().WriteReadable();
}




