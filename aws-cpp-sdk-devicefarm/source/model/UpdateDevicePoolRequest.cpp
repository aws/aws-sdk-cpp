/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/UpdateDevicePoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDevicePoolRequest::UpdateDevicePoolRequest() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_maxDevices(0),
    m_maxDevicesHasBeenSet(false),
    m_clearMaxDevices(false),
    m_clearMaxDevicesHasBeenSet(false)
{
}

Aws::String UpdateDevicePoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("rules", std::move(rulesJsonList));

  }

  if(m_maxDevicesHasBeenSet)
  {
   payload.WithInteger("maxDevices", m_maxDevices);

  }

  if(m_clearMaxDevicesHasBeenSet)
  {
   payload.WithBool("clearMaxDevices", m_clearMaxDevices);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDevicePoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.UpdateDevicePool"));
  return headers;

}




