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
  enum class WorkflowStatus
  {
    NOT_SET,
    DEPRECATED
  };

namespace WorkflowStatusMapper
{
AWS_IMAGEBUILDER_API WorkflowStatus GetWorkflowStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForWorkflowStatus(WorkflowStatus value);
} // namespace WorkflowStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
