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
  enum class ModelCardVersionSortBy
  {
    NOT_SET,
    Version
  };

namespace ModelCardVersionSortByMapper
{
AWS_SAGEMAKER_API ModelCardVersionSortBy GetModelCardVersionSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelCardVersionSortBy(ModelCardVersionSortBy value);
} // namespace ModelCardVersionSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
