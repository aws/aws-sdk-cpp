/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateHoursOfOperationOverrideRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHoursOfOperationOverrideRequest::CreateHoursOfOperationOverrideRequest() : 
    m_instanceIdHasBeenSet(false),
    m_hoursOfOperationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configHasBeenSet(false),
    m_effectiveFromHasBeenSet(false),
    m_effectiveTillHasBeenSet(false)
{
}

Aws::String CreateHoursOfOperationOverrideRequest::SerializePayload() const
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

  if(m_configHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configJsonList(m_config.size());
   for(unsigned configIndex = 0; configIndex < configJsonList.GetLength(); ++configIndex)
   {
     configJsonList[configIndex].AsObject(m_config[configIndex].Jsonize());
   }
   payload.WithArray("Config", std::move(configJsonList));

  }

  if(m_effectiveFromHasBeenSet)
  {
   payload.WithString("EffectiveFrom", m_effectiveFrom);

  }

  if(m_effectiveTillHasBeenSet)
  {
   payload.WithString("EffectiveTill", m_effectiveTill);

  }

  return payload.View().WriteReadable();
}




