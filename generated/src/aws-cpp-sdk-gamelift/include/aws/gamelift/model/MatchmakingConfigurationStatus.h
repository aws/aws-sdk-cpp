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
  enum class MatchmakingConfigurationStatus
  {
    NOT_SET,
    CANCELLED,
    COMPLETED,
    FAILED,
    PLACING,
    QUEUED,
    REQUIRES_ACCEPTANCE,
    SEARCHING,
    TIMED_OUT
  };

namespace MatchmakingConfigurationStatusMapper
{
AWS_GAMELIFT_API MatchmakingConfigurationStatus GetMatchmakingConfigurationStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForMatchmakingConfigurationStatus(MatchmakingConfigurationStatus value);
} // namespace MatchmakingConfigurationStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
