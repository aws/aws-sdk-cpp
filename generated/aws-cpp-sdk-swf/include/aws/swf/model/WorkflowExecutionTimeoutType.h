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
  enum class WorkflowExecutionTimeoutType
  {
    NOT_SET,
    START_TO_CLOSE
  };

namespace WorkflowExecutionTimeoutTypeMapper
{
AWS_SWF_API WorkflowExecutionTimeoutType GetWorkflowExecutionTimeoutTypeForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForWorkflowExecutionTimeoutType(WorkflowExecutionTimeoutType value);
} // namespace WorkflowExecutionTimeoutTypeMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
