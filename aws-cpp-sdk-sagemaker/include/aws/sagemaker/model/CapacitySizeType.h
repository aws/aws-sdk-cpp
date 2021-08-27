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
  enum class CapacitySizeType
  {
    NOT_SET,
    INSTANCE_COUNT,
    CAPACITY_PERCENT
  };

namespace CapacitySizeTypeMapper
{
AWS_SAGEMAKER_API CapacitySizeType GetCapacitySizeTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCapacitySizeType(CapacitySizeType value);
} // namespace CapacitySizeTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
