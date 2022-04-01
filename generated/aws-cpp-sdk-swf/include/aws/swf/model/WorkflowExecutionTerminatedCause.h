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
  enum class WorkflowExecutionTerminatedCause
  {
    NOT_SET,
    CHILD_POLICY_APPLIED,
    EVENT_LIMIT_EXCEEDED,
    OPERATOR_INITIATED
  };

namespace WorkflowExecutionTerminatedCauseMapper
{
AWS_SWF_API WorkflowExecutionTerminatedCause GetWorkflowExecutionTerminatedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForWorkflowExecutionTerminatedCause(WorkflowExecutionTerminatedCause value);
} // namespace WorkflowExecutionTerminatedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
