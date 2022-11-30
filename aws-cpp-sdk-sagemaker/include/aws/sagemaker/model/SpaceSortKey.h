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
  enum class SpaceSortKey
  {
    NOT_SET,
    CreationTime,
    LastModifiedTime
  };

namespace SpaceSortKeyMapper
{
AWS_SAGEMAKER_API SpaceSortKey GetSpaceSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSpaceSortKey(SpaceSortKey value);
} // namespace SpaceSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
