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
  enum class PositioningConfigStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace PositioningConfigStatusMapper
{
AWS_IOTWIRELESS_API PositioningConfigStatus GetPositioningConfigStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForPositioningConfigStatus(PositioningConfigStatus value);
} // namespace PositioningConfigStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
