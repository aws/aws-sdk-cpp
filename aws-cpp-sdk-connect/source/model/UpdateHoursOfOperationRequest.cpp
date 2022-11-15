/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateHoursOfOperationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateHoursOfOperationRequest::UpdateHoursOfOperationRequest() : 
    m_instanceIdHasBeenSet(false),
    m_hoursOfOperationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

Aws::String UpdateHoursOfOperationRequest::SerializePayload() const
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

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("TimeZone", m_timeZone);

  }

  if(m_configHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configJsonList(m_config.size());
   for(unsigned configIndex = 0; configIndex < configJsonList.GetLength(); ++configIndex)
   {
     configJsonList[configIndex].AsObject(m_config[configIndex].Jsonize());
   }
   payload.WithArray("Config", std::move(configJsonList));

  }

  return payload.View().WriteReadable();
}




