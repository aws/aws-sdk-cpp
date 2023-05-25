/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class WirelessDeviceSidewalkStatus
  {
    NOT_SET,
    PROVISIONED,
    REGISTERED,
    ACTIVATED,
    UNKNOWN
  };

namespace WirelessDeviceSidewalkStatusMapper
{
AWS_IOTWIRELESS_API WirelessDeviceSidewalkStatus GetWirelessDeviceSidewalkStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessDeviceSidewalkStatus(WirelessDeviceSidewalkStatus value);
} // namespace WirelessDeviceSidewalkStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
