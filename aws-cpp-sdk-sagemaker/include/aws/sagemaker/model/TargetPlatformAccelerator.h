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
  enum class TargetPlatformAccelerator
  {
    NOT_SET,
    INTEL_GRAPHICS,
    MALI,
    NVIDIA
  };

namespace TargetPlatformAcceleratorMapper
{
AWS_SAGEMAKER_API TargetPlatformAccelerator GetTargetPlatformAcceleratorForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTargetPlatformAccelerator(TargetPlatformAccelerator value);
} // namespace TargetPlatformAcceleratorMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
