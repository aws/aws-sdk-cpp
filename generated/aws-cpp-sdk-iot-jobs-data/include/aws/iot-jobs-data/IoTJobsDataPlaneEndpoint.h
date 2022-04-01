/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace IoTJobsDataPlane
{
namespace IoTJobsDataPlaneEndpoint
{
AWS_IOTJOBSDATAPLANE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace IoTJobsDataPlaneEndpoint
} // namespace IoTJobsDataPlane
} // namespace Aws
