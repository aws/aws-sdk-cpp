/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class DeviceEventType
  {
    NOT_SET,
    CONNECTION_STATUS,
    DEVICE_STATUS
  };

namespace DeviceEventTypeMapper
{
AWS_ALEXAFORBUSINESS_API DeviceEventType GetDeviceEventTypeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForDeviceEventType(DeviceEventType value);
} // namespace DeviceEventTypeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
