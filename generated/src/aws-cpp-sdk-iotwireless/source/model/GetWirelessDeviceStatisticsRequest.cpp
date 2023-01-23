/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessDeviceStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWirelessDeviceStatisticsRequest::GetWirelessDeviceStatisticsRequest() : 
    m_wirelessDeviceIdHasBeenSet(false)
{
}

Aws::String GetWirelessDeviceStatisticsRequest::SerializePayload() const
{
  return {};
}




