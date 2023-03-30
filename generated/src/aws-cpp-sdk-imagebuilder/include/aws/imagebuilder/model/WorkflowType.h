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
  enum class WorkflowType
  {
    NOT_SET,
    BUILD,
    TEST,
    DISTRIBUTION
  };

namespace WorkflowTypeMapper
{
AWS_IMAGEBUILDER_API WorkflowType GetWorkflowTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForWorkflowType(WorkflowType value);
} // namespace WorkflowTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
