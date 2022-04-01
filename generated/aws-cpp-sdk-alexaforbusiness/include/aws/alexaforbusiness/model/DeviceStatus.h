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
  enum class DeviceStatus
  {
    NOT_SET,
    READY,
    PENDING,
    WAS_OFFLINE,
    DEREGISTERED,
    FAILED
  };

namespace DeviceStatusMapper
{
AWS_ALEXAFORBUSINESS_API DeviceStatus GetDeviceStatusForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForDeviceStatus(DeviceStatus value);
} // namespace DeviceStatusMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
