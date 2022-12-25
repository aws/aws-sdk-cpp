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
  enum class ModelCardExportJobSortBy
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace ModelCardExportJobSortByMapper
{
AWS_SAGEMAKER_API ModelCardExportJobSortBy GetModelCardExportJobSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelCardExportJobSortBy(ModelCardExportJobSortBy value);
} // namespace ModelCardExportJobSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
