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
  enum class WorkflowStepActionType
  {
    NOT_SET,
    RESUME,
    STOP
  };

namespace WorkflowStepActionTypeMapper
{
AWS_IMAGEBUILDER_API WorkflowStepActionType GetWorkflowStepActionTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForWorkflowStepActionType(WorkflowStepActionType value);
} // namespace WorkflowStepActionTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
