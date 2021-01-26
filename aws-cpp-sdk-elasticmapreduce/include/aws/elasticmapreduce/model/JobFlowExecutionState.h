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
  enum class JobFlowExecutionState
  {
    NOT_SET,
    STARTING,
    BOOTSTRAPPING,
    RUNNING,
    WAITING,
    SHUTTING_DOWN,
    TERMINATED,
    COMPLETED,
    FAILED
  };

namespace JobFlowExecutionStateMapper
{
AWS_EMR_API JobFlowExecutionState GetJobFlowExecutionStateForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForJobFlowExecutionState(JobFlowExecutionState value);
} // namespace JobFlowExecutionStateMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
