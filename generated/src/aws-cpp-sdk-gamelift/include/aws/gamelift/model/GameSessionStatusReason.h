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
  enum class GameSessionStatusReason
  {
    NOT_SET,
    INTERRUPTED
  };

namespace GameSessionStatusReasonMapper
{
AWS_GAMELIFT_API GameSessionStatusReason GetGameSessionStatusReasonForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameSessionStatusReason(GameSessionStatusReason value);
} // namespace GameSessionStatusReasonMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
