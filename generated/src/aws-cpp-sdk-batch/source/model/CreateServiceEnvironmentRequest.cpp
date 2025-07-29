/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/CreateServiceEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateServiceEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceEnvironmentNameHasBeenSet)
  {
   payload.WithString("serviceEnvironmentName", m_serviceEnvironmentName);

  }

  if(m_serviceEnvironmentTypeHasBeenSet)
  {
   payload.WithString("serviceEnvironmentType", ServiceEnvironmentTypeMapper::GetNameForServiceEnvironmentType(m_serviceEnvironmentType));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ServiceEnvironmentStateMapper::GetNameForServiceEnvironmentState(m_state));
  }

  if(m_capacityLimitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityLimitsJsonList(m_capacityLimits.size());
   for(unsigned capacityLimitsIndex = 0; capacityLimitsIndex < capacityLimitsJsonList.GetLength(); ++capacityLimitsIndex)
   {
     capacityLimitsJsonList[capacityLimitsIndex].AsObject(m_capacityLimits[capacityLimitsIndex].Jsonize());
   }
   payload.WithArray("capacityLimits", std::move(capacityLimitsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




