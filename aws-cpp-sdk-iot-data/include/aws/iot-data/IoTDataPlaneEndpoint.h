/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace IoTDataPlane
{
namespace IoTDataPlaneEndpoint
{
AWS_IOTDATAPLANE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace IoTDataPlaneEndpoint
} // namespace IoTDataPlane
} // namespace Aws
