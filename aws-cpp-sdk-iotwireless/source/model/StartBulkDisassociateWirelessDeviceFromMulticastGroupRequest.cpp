/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest::StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest() : 
    m_idHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

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

  return payload.View().WriteReadable();
}




