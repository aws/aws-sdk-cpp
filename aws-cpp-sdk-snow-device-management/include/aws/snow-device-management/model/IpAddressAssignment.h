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
  enum class IpAddressAssignment
  {
    NOT_SET,
    DHCP,
    STATIC_
  };

namespace IpAddressAssignmentMapper
{
AWS_SNOWDEVICEMANAGEMENT_API IpAddressAssignment GetIpAddressAssignmentForName(const Aws::String& name);

AWS_SNOWDEVICEMANAGEMENT_API Aws::String GetNameForIpAddressAssignment(IpAddressAssignment value);
} // namespace IpAddressAssignmentMapper
} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
