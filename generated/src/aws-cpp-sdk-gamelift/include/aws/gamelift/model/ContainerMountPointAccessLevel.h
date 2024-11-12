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
  enum class ContainerMountPointAccessLevel
  {
    NOT_SET,
    READ_ONLY,
    READ_AND_WRITE
  };

namespace ContainerMountPointAccessLevelMapper
{
AWS_GAMELIFT_API ContainerMountPointAccessLevel GetContainerMountPointAccessLevelForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerMountPointAccessLevel(ContainerMountPointAccessLevel value);
} // namespace ContainerMountPointAccessLevelMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
