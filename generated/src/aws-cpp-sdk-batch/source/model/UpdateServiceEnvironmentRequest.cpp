/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/UpdateServiceEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateServiceEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceEnvironmentHasBeenSet)
  {
   payload.WithString("serviceEnvironment", m_serviceEnvironment);

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

  return payload.View().WriteReadable();
}




