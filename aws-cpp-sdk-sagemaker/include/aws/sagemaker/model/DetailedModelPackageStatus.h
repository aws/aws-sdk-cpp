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
  enum class DetailedModelPackageStatus
  {
    NOT_SET,
    NotStarted,
    InProgress,
    Completed,
    Failed
  };

namespace DetailedModelPackageStatusMapper
{
AWS_SAGEMAKER_API DetailedModelPackageStatus GetDetailedModelPackageStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDetailedModelPackageStatus(DetailedModelPackageStatus value);
} // namespace DetailedModelPackageStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
