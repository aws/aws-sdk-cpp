/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DeleteWirelessDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWirelessDeviceRequest::DeleteWirelessDeviceRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DeleteWirelessDeviceRequest::SerializePayload() const
{
  return {};
}




