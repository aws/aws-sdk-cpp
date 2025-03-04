/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class CoreDeviceOperatingSystem
  {
    NOT_SET,
    LINUX_AARCH64,
    LINUX_AMD64,
    WINDOWS_AMD64
  };

namespace CoreDeviceOperatingSystemMapper
{
AWS_IOTSITEWISE_API CoreDeviceOperatingSystem GetCoreDeviceOperatingSystemForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForCoreDeviceOperatingSystem(CoreDeviceOperatingSystem value);
} // namespace CoreDeviceOperatingSystemMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
