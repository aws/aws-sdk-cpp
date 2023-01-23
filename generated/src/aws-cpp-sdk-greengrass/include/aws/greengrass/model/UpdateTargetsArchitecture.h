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
  enum class UpdateTargetsArchitecture
  {
    NOT_SET,
    armv6l,
    armv7l,
    x86_64,
    aarch64
  };

namespace UpdateTargetsArchitectureMapper
{
AWS_GREENGRASS_API UpdateTargetsArchitecture GetUpdateTargetsArchitectureForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForUpdateTargetsArchitecture(UpdateTargetsArchitecture value);
} // namespace UpdateTargetsArchitectureMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
