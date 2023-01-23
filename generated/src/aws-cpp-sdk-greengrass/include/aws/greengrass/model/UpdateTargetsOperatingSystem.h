/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Greengrass
{
namespace Model
{
  enum class UpdateTargetsOperatingSystem
  {
    NOT_SET,
    ubuntu,
    raspbian,
    amazon_linux,
    openwrt
  };

namespace UpdateTargetsOperatingSystemMapper
{
AWS_GREENGRASS_API UpdateTargetsOperatingSystem GetUpdateTargetsOperatingSystemForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForUpdateTargetsOperatingSystem(UpdateTargetsOperatingSystem value);
} // namespace UpdateTargetsOperatingSystemMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
