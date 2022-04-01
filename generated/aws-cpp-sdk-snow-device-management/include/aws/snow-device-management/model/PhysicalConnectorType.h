/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{
  enum class PhysicalConnectorType
  {
    NOT_SET,
    RJ45,
    SFP_PLUS,
    QSFP,
    RJ45_2,
    WIFI
  };

namespace PhysicalConnectorTypeMapper
{
AWS_SNOWDEVICEMANAGEMENT_API PhysicalConnectorType GetPhysicalConnectorTypeForName(const Aws::String& name);

AWS_SNOWDEVICEMANAGEMENT_API Aws::String GetNameForPhysicalConnectorType(PhysicalConnectorType value);
} // namespace PhysicalConnectorTypeMapper
} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
