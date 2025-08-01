/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{
  enum class ExecutionEventType
  {
    NOT_SET,
    unknown,
    executionPending,
    executionStarted,
    executionSucceeded,
    executionFailed,
    executionPausing,
    executionPaused,
    executionCanceling,
    executionCanceled,
    executionPendingApproval,
    executionBehaviorChangedToUngraceful,
    executionBehaviorChangedToGraceful,
    executionPendingChildPlanManualApproval,
    executionSuccessMonitoringApplicationHealth,
    stepStarted,
    stepUpdate,
    stepSucceeded,
    stepFailed,
    stepSkipped,
    stepPausedByError,
    stepPausedByOperator,
    stepCanceled,
    stepPendingApproval,
    stepExecutionBehaviorChangedToUngraceful,
    stepPendingApplicationHealthMonitor
  };

namespace ExecutionEventTypeMapper
{
AWS_ARCREGIONSWITCH_API ExecutionEventType GetExecutionEventTypeForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForExecutionEventType(ExecutionEventType value);
} // namespace ExecutionEventTypeMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
