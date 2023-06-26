/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/AssociateWirelessDeviceWithThingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateWirelessDeviceWithThingRequest::AssociateWirelessDeviceWithThingRequest() : 
    m_idHasBeenSet(false),
    m_thingArnHasBeenSet(false)
{
}

Aws::String AssociateWirelessDeviceWithThingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("ThingArn", m_thingArn);

  }

  return payload.View().WriteReadable();
}




