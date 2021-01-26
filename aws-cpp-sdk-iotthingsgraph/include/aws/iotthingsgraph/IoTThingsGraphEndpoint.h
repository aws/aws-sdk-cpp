/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace IoTThingsGraph
{
namespace IoTThingsGraphEndpoint
{
AWS_IOTTHINGSGRAPH_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace IoTThingsGraphEndpoint
} // namespace IoTThingsGraph
} // namespace Aws
