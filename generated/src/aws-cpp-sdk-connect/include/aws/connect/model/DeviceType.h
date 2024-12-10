/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class DeviceType
  {
    NOT_SET,
    GCM,
    APNS,
    APNS_SANDBOX
  };

namespace DeviceTypeMapper
{
AWS_CONNECT_API DeviceType GetDeviceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForDeviceType(DeviceType value);
} // namespace DeviceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
