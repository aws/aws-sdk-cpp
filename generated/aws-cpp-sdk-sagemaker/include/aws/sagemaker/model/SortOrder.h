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
  enum class SortOrder
  {
    NOT_SET,
    Ascending,
    Descending
  };

namespace SortOrderMapper
{
AWS_SAGEMAKER_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
