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
  enum class TargetPlatformArch
  {
    NOT_SET,
    ARM64,
    X86_64
  };

namespace TargetPlatformArchMapper
{
AWS_LOOKOUTFORVISION_API TargetPlatformArch GetTargetPlatformArchForName(const Aws::String& name);

AWS_LOOKOUTFORVISION_API Aws::String GetNameForTargetPlatformArch(TargetPlatformArch value);
} // namespace TargetPlatformArchMapper
} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
