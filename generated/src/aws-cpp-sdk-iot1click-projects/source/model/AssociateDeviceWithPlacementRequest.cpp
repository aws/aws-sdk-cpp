/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/AssociateDeviceWithPlacementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateDeviceWithPlacementRequest::AssociateDeviceWithPlacementRequest() : 
    m_projectNameHasBeenSet(false),
    m_placementNameHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_deviceTemplateNameHasBeenSet(false)
{
}

Aws::String AssociateDeviceWithPlacementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("deviceId", m_deviceId);

  }

  return payload.View().WriteReadable();
}




