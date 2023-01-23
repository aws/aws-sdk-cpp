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
  enum class StepState
  {
    NOT_SET,
    PENDING,
    CANCEL_PENDING,
    RUNNING,
    COMPLETED,
    CANCELLED,
    FAILED,
    INTERRUPTED
  };

namespace StepStateMapper
{
AWS_EMR_API StepState GetStepStateForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForStepState(StepState value);
} // namespace StepStateMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
