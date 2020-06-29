/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace DeviceFarm
{
namespace DeviceFarmEndpoint
{
AWS_DEVICEFARM_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace DeviceFarmEndpoint
} // namespace DeviceFarm
} // namespace Aws
