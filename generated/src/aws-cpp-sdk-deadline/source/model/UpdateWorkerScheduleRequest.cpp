/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateWorkerScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorkerScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updatedSessionActionsHasBeenSet)
  {
   JsonValue updatedSessionActionsJsonMap;
   for(auto& updatedSessionActionsItem : m_updatedSessionActions)
   {
     updatedSessionActionsJsonMap.WithObject(updatedSessionActionsItem.first, updatedSessionActionsItem.second.Jsonize());
   }
   payload.WithObject("updatedSessionActions", std::move(updatedSessionActionsJsonMap));

  }

  return payload.View().WriteReadable();
}




