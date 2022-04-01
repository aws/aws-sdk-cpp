/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{
  enum class CoreDeviceStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY
  };

namespace CoreDeviceStatusMapper
{
AWS_GREENGRASSV2_API CoreDeviceStatus GetCoreDeviceStatusForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForCoreDeviceStatus(CoreDeviceStatus value);
} // namespace CoreDeviceStatusMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
