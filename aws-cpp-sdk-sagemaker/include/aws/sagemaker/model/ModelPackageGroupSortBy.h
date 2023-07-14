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
  enum class ModelPackageGroupSortBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace ModelPackageGroupSortByMapper
{
AWS_SAGEMAKER_API ModelPackageGroupSortBy GetModelPackageGroupSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelPackageGroupSortBy(ModelPackageGroupSortBy value);
} // namespace ModelPackageGroupSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
