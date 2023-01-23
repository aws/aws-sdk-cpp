/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class WorkflowRunStatus
  {
    NOT_SET,
    RUNNING,
    COMPLETED,
    STOPPING,
    STOPPED,
    ERROR_
  };

namespace WorkflowRunStatusMapper
{
AWS_GLUE_API WorkflowRunStatus GetWorkflowRunStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForWorkflowRunStatus(WorkflowRunStatus value);
} // namespace WorkflowRunStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
