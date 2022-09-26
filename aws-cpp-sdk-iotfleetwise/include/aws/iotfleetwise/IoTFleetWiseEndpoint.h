/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace IoTFleetWise
{
namespace IoTFleetWiseEndpoint
{
AWS_IOTFLEETWISE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace IoTFleetWiseEndpoint
} // namespace IoTFleetWise
} // namespace Aws
