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
  enum class DownlinkMode
  {
    NOT_SET,
    SEQUENTIAL,
    CONCURRENT,
    USING_UPLINK_GATEWAY
  };

namespace DownlinkModeMapper
{
AWS_IOTWIRELESS_API DownlinkMode GetDownlinkModeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForDownlinkMode(DownlinkMode value);
} // namespace DownlinkModeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
