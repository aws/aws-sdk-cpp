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
  enum class CancelWorkflowExecutionFailedCause
  {
    NOT_SET,
    UNHANDLED_DECISION,
    OPERATION_NOT_PERMITTED
  };

namespace CancelWorkflowExecutionFailedCauseMapper
{
AWS_SWF_API CancelWorkflowExecutionFailedCause GetCancelWorkflowExecutionFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForCancelWorkflowExecutionFailedCause(CancelWorkflowExecutionFailedCause value);
} // namespace CancelWorkflowExecutionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
