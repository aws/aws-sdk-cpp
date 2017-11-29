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

#include <aws/iot/model/UpdateThingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateThingGroupRequest::UpdateThingGroupRequest() : 
    m_thingGroupNameHasBeenSet(false),
    m_thingGroupPropertiesHasBeenSet(false),
    m_expectedVersion(0),
    m_expectedVersionHasBeenSet(false)
{
}

Aws::String UpdateThingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingGroupPropertiesHasBeenSet)
  {
   payload.WithObject("thingGroupProperties", m_thingGroupProperties.Jsonize());

  }

  if(m_expectedVersionHasBeenSet)
  {
   payload.WithInt64("expectedVersion", m_expectedVersion);

  }

  return payload.WriteReadable();
}




