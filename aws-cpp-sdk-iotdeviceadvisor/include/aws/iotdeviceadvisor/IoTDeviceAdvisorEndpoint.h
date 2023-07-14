/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace IoTDeviceAdvisor
{
namespace IoTDeviceAdvisorEndpoint
{
AWS_IOTDEVICEADVISOR_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace IoTDeviceAdvisorEndpoint
} // namespace IoTDeviceAdvisor
} // namespace Aws
