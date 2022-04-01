/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class StepExecutionState
  {
    NOT_SET,
    PENDING,
    RUNNING,
    CONTINUE,
    COMPLETED,
    CANCELLED,
    FAILED,
    INTERRUPTED
  };

namespace StepExecutionStateMapper
{
AWS_EMR_API StepExecutionState GetStepExecutionStateForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForStepExecutionState(StepExecutionState value);
} // namespace StepExecutionStateMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
