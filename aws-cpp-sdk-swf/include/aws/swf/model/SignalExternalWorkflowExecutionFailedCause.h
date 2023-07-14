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
  enum class SignalExternalWorkflowExecutionFailedCause
  {
    NOT_SET,
    UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION,
    SIGNAL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED,
    OPERATION_NOT_PERMITTED
  };

namespace SignalExternalWorkflowExecutionFailedCauseMapper
{
AWS_SWF_API SignalExternalWorkflowExecutionFailedCause GetSignalExternalWorkflowExecutionFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForSignalExternalWorkflowExecutionFailedCause(SignalExternalWorkflowExecutionFailedCause value);
} // namespace SignalExternalWorkflowExecutionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
