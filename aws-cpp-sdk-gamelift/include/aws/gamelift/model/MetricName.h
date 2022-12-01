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
  enum class MetricName
  {
    NOT_SET,
    ActivatingGameSessions,
    ActiveGameSessions,
    ActiveInstances,
    AvailableGameSessions,
    AvailablePlayerSessions,
    CurrentPlayerSessions,
    IdleInstances,
    PercentAvailableGameSessions,
    PercentIdleInstances,
    QueueDepth,
    WaitTime,
    ConcurrentActivatableGameSessions
  };

namespace MetricNameMapper
{
AWS_GAMELIFT_API MetricName GetMetricNameForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForMetricName(MetricName value);
} // namespace MetricNameMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
