/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ServiceDiscovery
{
namespace ServiceDiscoveryEndpoint
{
AWS_SERVICEDISCOVERY_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ServiceDiscoveryEndpoint
} // namespace ServiceDiscovery
} // namespace Aws
