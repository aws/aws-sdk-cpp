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
  enum class WorkflowStepExecutionStatus
  {
    NOT_SET,
    PENDING,
    SKIPPED,
    RUNNING,
    COMPLETED,
    FAILED,
    CANCELLED
  };

namespace WorkflowStepExecutionStatusMapper
{
AWS_IMAGEBUILDER_API WorkflowStepExecutionStatus GetWorkflowStepExecutionStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForWorkflowStepExecutionStatus(WorkflowStepExecutionStatus value);
} // namespace WorkflowStepExecutionStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
