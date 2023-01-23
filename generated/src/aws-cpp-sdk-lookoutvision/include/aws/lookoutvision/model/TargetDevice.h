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
  enum class TargetDevice
  {
    NOT_SET,
    jetson_xavier
  };

namespace TargetDeviceMapper
{
AWS_LOOKOUTFORVISION_API TargetDevice GetTargetDeviceForName(const Aws::String& name);

AWS_LOOKOUTFORVISION_API Aws::String GetNameForTargetDevice(TargetDevice value);
} // namespace TargetDeviceMapper
} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
