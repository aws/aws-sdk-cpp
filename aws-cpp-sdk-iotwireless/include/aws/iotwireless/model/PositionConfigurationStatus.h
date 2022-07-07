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
  enum class PositionConfigurationStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace PositionConfigurationStatusMapper
{
AWS_IOTWIRELESS_API PositionConfigurationStatus GetPositionConfigurationStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForPositionConfigurationStatus(PositionConfigurationStatus value);
} // namespace PositionConfigurationStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
