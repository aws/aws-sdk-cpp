/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RemoveThingFromThingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveThingFromThingGroupRequest::RemoveThingFromThingGroupRequest() : 
    m_thingGroupNameHasBeenSet(false),
    m_thingGroupArnHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_thingArnHasBeenSet(false)
{
}

Aws::String RemoveThingFromThingGroupRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




