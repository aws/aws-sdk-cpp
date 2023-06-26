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
  enum class PlayerSessionStatus
  {
    NOT_SET,
    RESERVED,
    ACTIVE,
    COMPLETED,
    TIMEDOUT
  };

namespace PlayerSessionStatusMapper
{
AWS_GAMELIFT_API PlayerSessionStatus GetPlayerSessionStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForPlayerSessionStatus(PlayerSessionStatus value);
} // namespace PlayerSessionStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
