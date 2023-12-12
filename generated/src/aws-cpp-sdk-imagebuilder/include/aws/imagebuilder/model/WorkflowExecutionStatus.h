/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class WorkflowExecutionStatus
  {
    NOT_SET,
    PENDING,
    SKIPPED,
    RUNNING,
    COMPLETED,
    FAILED,
    ROLLBACK_IN_PROGRESS,
    ROLLBACK_COMPLETED,
    CANCELLED
  };

namespace WorkflowExecutionStatusMapper
{
AWS_IMAGEBUILDER_API WorkflowExecutionStatus GetWorkflowExecutionStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForWorkflowExecutionStatus(WorkflowExecutionStatus value);
} // namespace WorkflowExecutionStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
