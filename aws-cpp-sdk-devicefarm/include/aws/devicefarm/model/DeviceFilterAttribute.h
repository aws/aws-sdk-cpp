/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class DeviceFilterAttribute
  {
    NOT_SET,
    ARN,
    PLATFORM,
    OS_VERSION,
    MODEL,
    AVAILABILITY,
    FORM_FACTOR,
    MANUFACTURER,
    REMOTE_ACCESS_ENABLED,
    REMOTE_DEBUG_ENABLED,
    INSTANCE_ARN,
    INSTANCE_LABELS,
    FLEET_TYPE
  };

namespace DeviceFilterAttributeMapper
{
AWS_DEVICEFARM_API DeviceFilterAttribute GetDeviceFilterAttributeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForDeviceFilterAttribute(DeviceFilterAttribute value);
} // namespace DeviceFilterAttributeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
