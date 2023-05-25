/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  return payload.View().WriteReadable();
}




