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
  enum class SortContextsBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace SortContextsByMapper
{
AWS_SAGEMAKER_API SortContextsBy GetSortContextsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortContextsBy(SortContextsBy value);
} // namespace SortContextsByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
