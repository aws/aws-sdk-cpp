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
  enum class ExecutionState
  {
    NOT_SET,
    inProgress,
    pausedByFailedStep,
    pausedByOperator,
    completed,
    completedWithExceptions,
    canceled,
    planExecutionTimedOut,
    pendingManualApproval,
    failed,
    pending,
    completedMonitoringApplicationHealth
  };

namespace ExecutionStateMapper
{
AWS_ARCREGIONSWITCH_API ExecutionState GetExecutionStateForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForExecutionState(ExecutionState value);
} // namespace ExecutionStateMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
