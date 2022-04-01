/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace IoTEventsData
{
namespace IoTEventsDataEndpoint
{
AWS_IOTEVENTSDATA_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace IoTEventsDataEndpoint
} // namespace IoTEventsData
} // namespace Aws
