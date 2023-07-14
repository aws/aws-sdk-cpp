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
  enum class ModelSortKey
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace ModelSortKeyMapper
{
AWS_SAGEMAKER_API ModelSortKey GetModelSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelSortKey(ModelSortKey value);
} // namespace ModelSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
