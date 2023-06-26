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
  enum class WorkflowStepExecutionRollbackStatus
  {
    NOT_SET,
    RUNNING,
    COMPLETED,
    SKIPPED,
    FAILED
  };

namespace WorkflowStepExecutionRollbackStatusMapper
{
AWS_IMAGEBUILDER_API WorkflowStepExecutionRollbackStatus GetWorkflowStepExecutionRollbackStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForWorkflowStepExecutionRollbackStatus(WorkflowStepExecutionRollbackStatus value);
} // namespace WorkflowStepExecutionRollbackStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
