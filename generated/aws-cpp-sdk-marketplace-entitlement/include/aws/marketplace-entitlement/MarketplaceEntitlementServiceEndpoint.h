/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MarketplaceEntitlementService
{
namespace MarketplaceEntitlementServiceEndpoint
{
AWS_MARKETPLACEENTITLEMENTSERVICE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MarketplaceEntitlementServiceEndpoint
} // namespace MarketplaceEntitlementService
} // namespace Aws
