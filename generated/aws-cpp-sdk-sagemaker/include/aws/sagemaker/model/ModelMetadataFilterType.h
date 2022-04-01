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
  enum class ModelMetadataFilterType
  {
    NOT_SET,
    Domain,
    Framework,
    Task,
    FrameworkVersion
  };

namespace ModelMetadataFilterTypeMapper
{
AWS_SAGEMAKER_API ModelMetadataFilterType GetModelMetadataFilterTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelMetadataFilterType(ModelMetadataFilterType value);
} // namespace ModelMetadataFilterTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
