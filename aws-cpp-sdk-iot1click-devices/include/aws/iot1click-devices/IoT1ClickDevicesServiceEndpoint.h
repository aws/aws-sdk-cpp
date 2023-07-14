/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace IoT1ClickDevicesService
{
namespace IoT1ClickDevicesServiceEndpoint
{
AWS_IOT1CLICKDEVICESSERVICE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace IoT1ClickDevicesServiceEndpoint
} // namespace IoT1ClickDevicesService
} // namespace Aws
