/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Pricing
{
namespace PricingEndpoint
{
AWS_PRICING_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace PricingEndpoint
} // namespace Pricing
} // namespace Aws
