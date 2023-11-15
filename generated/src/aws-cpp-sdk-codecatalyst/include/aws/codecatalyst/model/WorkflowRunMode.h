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
  enum class WorkflowRunMode
  {
    NOT_SET,
    QUEUED,
    PARALLEL,
    SUPERSEDED
  };

namespace WorkflowRunModeMapper
{
AWS_CODECATALYST_API WorkflowRunMode GetWorkflowRunModeForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForWorkflowRunMode(WorkflowRunMode value);
} // namespace WorkflowRunModeMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
