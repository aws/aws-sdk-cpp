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
  enum class ProjectStatus
  {
    NOT_SET,
    Pending,
    CreateInProgress,
    CreateCompleted,
    CreateFailed,
    DeleteInProgress,
    DeleteFailed,
    DeleteCompleted,
    UpdateInProgress,
    UpdateCompleted,
    UpdateFailed
  };

namespace ProjectStatusMapper
{
AWS_SAGEMAKER_API ProjectStatus GetProjectStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProjectStatus(ProjectStatus value);
} // namespace ProjectStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
