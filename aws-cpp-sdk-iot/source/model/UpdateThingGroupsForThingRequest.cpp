/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_thingGroupsToRemoveHasBeenSet(false)
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
   Array<JsonValue> thingGroupsToAddJsonList(m_thingGroupsToAdd.size());
   for(unsigned thingGroupsToAddIndex = 0; thingGroupsToAddIndex < thingGroupsToAddJsonList.GetLength(); ++thingGroupsToAddIndex)
   {
     thingGroupsToAddJsonList[thingGroupsToAddIndex].AsString(m_thingGroupsToAdd[thingGroupsToAddIndex]);
   }
   payload.WithArray("thingGroupsToAdd", std::move(thingGroupsToAddJsonList));

  }

  if(m_thingGroupsToRemoveHasBeenSet)
  {
   Array<JsonValue> thingGroupsToRemoveJsonList(m_thingGroupsToRemove.size());
   for(unsigned thingGroupsToRemoveIndex = 0; thingGroupsToRemoveIndex < thingGroupsToRemoveJsonList.GetLength(); ++thingGroupsToRemoveIndex)
   {
     thingGroupsToRemoveJsonList[thingGroupsToRemoveIndex].AsString(m_thingGroupsToRemove[thingGroupsToRemoveIndex]);
   }
   payload.WithArray("thingGroupsToRemove", std::move(thingGroupsToRemoveJsonList));

  }

  return payload.WriteReadable();
}




