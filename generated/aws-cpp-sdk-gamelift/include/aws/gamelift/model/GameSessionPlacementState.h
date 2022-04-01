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
  enum class GameSessionPlacementState
  {
    NOT_SET,
    PENDING,
    FULFILLED,
    CANCELLED,
    TIMED_OUT,
    FAILED
  };

namespace GameSessionPlacementStateMapper
{
AWS_GAMELIFT_API GameSessionPlacementState GetGameSessionPlacementStateForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameSessionPlacementState(GameSessionPlacementState value);
} // namespace GameSessionPlacementStateMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
