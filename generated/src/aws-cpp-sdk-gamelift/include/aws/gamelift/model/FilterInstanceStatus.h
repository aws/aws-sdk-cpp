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
  enum class FilterInstanceStatus
  {
    NOT_SET,
    ACTIVE,
    DRAINING
  };

namespace FilterInstanceStatusMapper
{
AWS_GAMELIFT_API FilterInstanceStatus GetFilterInstanceStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForFilterInstanceStatus(FilterInstanceStatus value);
} // namespace FilterInstanceStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
