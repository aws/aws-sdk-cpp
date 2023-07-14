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
  enum class RequestCancelExternalWorkflowExecutionFailedCause
  {
    NOT_SET,
    UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION,
    REQUEST_CANCEL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED,
    OPERATION_NOT_PERMITTED
  };

namespace RequestCancelExternalWorkflowExecutionFailedCauseMapper
{
AWS_SWF_API RequestCancelExternalWorkflowExecutionFailedCause GetRequestCancelExternalWorkflowExecutionFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForRequestCancelExternalWorkflowExecutionFailedCause(RequestCancelExternalWorkflowExecutionFailedCause value);
} // namespace RequestCancelExternalWorkflowExecutionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
