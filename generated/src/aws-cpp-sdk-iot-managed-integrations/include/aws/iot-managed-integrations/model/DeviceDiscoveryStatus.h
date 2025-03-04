/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class DeviceDiscoveryStatus
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    FAILED,
    TIMED_OUT
  };

namespace DeviceDiscoveryStatusMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API DeviceDiscoveryStatus GetDeviceDiscoveryStatusForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForDeviceDiscoveryStatus(DeviceDiscoveryStatus value);
} // namespace DeviceDiscoveryStatusMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
