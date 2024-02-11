/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{
  enum class WorkflowRunStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    STOPPED,
    SUPERSEDED,
    CANCELLED,
    NOT_RUN,
    VALIDATING,
    PROVISIONING,
    IN_PROGRESS,
    STOPPING,
    ABANDONED
  };

namespace WorkflowRunStatusMapper
{
AWS_CODECATALYST_API WorkflowRunStatus GetWorkflowRunStatusForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForWorkflowRunStatus(WorkflowRunStatus value);
} // namespace WorkflowRunStatusMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
