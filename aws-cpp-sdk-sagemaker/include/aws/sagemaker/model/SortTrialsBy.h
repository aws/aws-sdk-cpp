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
  enum class SortTrialsBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace SortTrialsByMapper
{
AWS_SAGEMAKER_API SortTrialsBy GetSortTrialsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortTrialsBy(SortTrialsBy value);
} // namespace SortTrialsByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
