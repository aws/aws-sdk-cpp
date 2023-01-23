/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{
  enum class TargetPlatformAccelerator
  {
    NOT_SET,
    NVIDIA
  };

namespace TargetPlatformAcceleratorMapper
{
AWS_LOOKOUTFORVISION_API TargetPlatformAccelerator GetTargetPlatformAcceleratorForName(const Aws::String& name);

AWS_LOOKOUTFORVISION_API Aws::String GetNameForTargetPlatformAccelerator(TargetPlatformAccelerator value);
} // namespace TargetPlatformAcceleratorMapper
} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
