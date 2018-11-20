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

#include <aws/iot/model/AddThingToThingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddThingToThingGroupRequest::AddThingToThingGroupRequest() : 
    m_thingGroupNameHasBeenSet(false),
    m_thingGroupArnHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_thingArnHasBeenSet(false),
    m_overrideDynamicGroups(false),
    m_overrideDynamicGroupsHasBeenSet(false)
{
}

Aws::String AddThingToThingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingGroupNameHasBeenSet)
  {
   payload.WithString("thingGroupName", m_thingGroupName);

  }

  if(m_thingGroupArnHasBeenSet)
  {
   payload.WithString("thingGroupArn", m_thingGroupArn);

  }

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("thingArn", m_thingArn);

  }

  if(m_overrideDynamicGroupsHasBeenSet)
  {
   payload.WithBool("overrideDynamicGroups", m_overrideDynamicGroups);

  }

  return payload.View().WriteReadable();
}




