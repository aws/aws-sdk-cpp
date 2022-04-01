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
  enum class InstanceStatus
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    TERMINATING
  };

namespace InstanceStatusMapper
{
AWS_GAMELIFT_API InstanceStatus GetInstanceStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForInstanceStatus(InstanceStatus value);
} // namespace InstanceStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
