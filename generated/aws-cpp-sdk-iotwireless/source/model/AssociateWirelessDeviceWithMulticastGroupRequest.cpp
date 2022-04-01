/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/AssociateWirelessDeviceWithMulticastGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateWirelessDeviceWithMulticastGroupRequest::AssociateWirelessDeviceWithMulticastGroupRequest() : 
    m_idHasBeenSet(false),
    m_wirelessDeviceIdHasBeenSet(false)
{
}

Aws::String AssociateWirelessDeviceWithMulticastGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_wirelessDeviceIdHasBeenSet)
  {
   payload.WithString("WirelessDeviceId", m_wirelessDeviceId);

  }

  return payload.View().WriteReadable();
}




