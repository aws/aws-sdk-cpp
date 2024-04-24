/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class ContainerOperatingSystem
  {
    NOT_SET,
    AMAZON_LINUX_2023
  };

namespace ContainerOperatingSystemMapper
{
AWS_GAMELIFT_API ContainerOperatingSystem GetContainerOperatingSystemForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerOperatingSystem(ContainerOperatingSystem value);
} // namespace ContainerOperatingSystemMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
