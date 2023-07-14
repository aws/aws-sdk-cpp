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
  enum class ProductionVariantAcceleratorType
  {
    NOT_SET,
    ml_eia1_medium,
    ml_eia1_large,
    ml_eia1_xlarge,
    ml_eia2_medium,
    ml_eia2_large,
    ml_eia2_xlarge
  };

namespace ProductionVariantAcceleratorTypeMapper
{
AWS_SAGEMAKER_API ProductionVariantAcceleratorType GetProductionVariantAcceleratorTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProductionVariantAcceleratorType(ProductionVariantAcceleratorType value);
} // namespace ProductionVariantAcceleratorTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
