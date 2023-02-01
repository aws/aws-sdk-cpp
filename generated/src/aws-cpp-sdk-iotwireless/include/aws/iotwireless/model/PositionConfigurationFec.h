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
  enum class PositionConfigurationFec
  {
    NOT_SET,
    ROSE,
    NONE
  };

namespace PositionConfigurationFecMapper
{
AWS_IOTWIRELESS_API PositionConfigurationFec GetPositionConfigurationFecForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForPositionConfigurationFec(PositionConfigurationFec value);
} // namespace PositionConfigurationFecMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
