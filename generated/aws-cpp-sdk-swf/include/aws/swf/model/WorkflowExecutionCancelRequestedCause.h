/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class WorkflowExecutionCancelRequestedCause
  {
    NOT_SET,
    CHILD_POLICY_APPLIED
  };

namespace WorkflowExecutionCancelRequestedCauseMapper
{
AWS_SWF_API WorkflowExecutionCancelRequestedCause GetWorkflowExecutionCancelRequestedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForWorkflowExecutionCancelRequestedCause(WorkflowExecutionCancelRequestedCause value);
} // namespace WorkflowExecutionCancelRequestedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
