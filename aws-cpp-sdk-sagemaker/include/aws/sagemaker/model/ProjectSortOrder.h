/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ProjectSortOrder
  {
    NOT_SET,
    Ascending,
    Descending
  };

namespace ProjectSortOrderMapper
{
AWS_SAGEMAKER_API ProjectSortOrder GetProjectSortOrderForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProjectSortOrder(ProjectSortOrder value);
} // namespace ProjectSortOrderMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
