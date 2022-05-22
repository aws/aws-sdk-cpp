/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class DeviceType
  {
    NOT_SET,
    PANORAMA_APPLIANCE_DEVELOPER_KIT,
    PANORAMA_APPLIANCE
  };

namespace DeviceTypeMapper
{
AWS_PANORAMA_API DeviceType GetDeviceTypeForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForDeviceType(DeviceType value);
} // namespace DeviceTypeMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
