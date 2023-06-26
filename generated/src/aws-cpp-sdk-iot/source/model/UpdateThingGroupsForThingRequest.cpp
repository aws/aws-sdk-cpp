/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateThingGroupsForThingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateThingGroupsForThingRequest::UpdateThingGroupsForThingRequest() : 
    m_thingNameHasBeenSet(false),
    m_thingGroupsToAddHasBeenSet(false),
    m_thingGroupsToRemoveHasBeenSet(false),
    m_overrideDynamicGroups(false),
    m_overrideDynamicGroupsHasBeenSet(false)
{
}

Aws::String UpdateThingGroupsForThingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_thingGroupsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> thingGroupsToAddJsonList(m_thingGroupsToAdd.size());
   for(unsigned thingGroupsToAddIndex = 0; thingGroupsToAddIndex < thingGroupsToAddJsonList.GetLength(); ++thingGroupsToAddIndex)
   {
     thingGroupsToAddJsonList[thingGroupsToAddIndex].AsString(m_thingGroupsToAdd[thingGroupsToAddIndex]);
   }
   payload.WithArray("thingGroupsToAdd", std::move(thingGroupsToAddJsonList));

  }

  if(m_thingGroupsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> thingGroupsToRemoveJsonList(m_thingGroupsToRemove.size());
   for(unsigned thingGroupsToRemoveIndex = 0; thingGroupsToRemoveIndex < thingGroupsToRemoveJsonList.GetLength(); ++thingGroupsToRemoveIndex)
   {
     thingGroupsToRemoveJsonList[thingGroupsToRemoveIndex].AsString(m_thingGroupsToRemove[thingGroupsToRemoveIndex]);
   }
   payload.WithArray("thingGroupsToRemove", std::move(thingGroupsToRemoveJsonList));

  }

  if(m_overrideDynamicGroupsHasBeenSet)
  {
   payload.WithBool("overrideDynamicGroups", m_overrideDynamicGroups);

  }

  return payload.View().WriteReadable();
}




