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
  enum class WorkflowStatus
  {
    NOT_SET,
    INVALID,
    ACTIVE
  };

namespace WorkflowStatusMapper
{
AWS_CODECATALYST_API WorkflowStatus GetWorkflowStatusForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForWorkflowStatus(WorkflowStatus value);
} // namespace WorkflowStatusMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
