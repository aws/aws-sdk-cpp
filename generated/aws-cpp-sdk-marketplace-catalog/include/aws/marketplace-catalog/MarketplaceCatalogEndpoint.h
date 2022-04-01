/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MarketplaceCatalog
{
namespace MarketplaceCatalogEndpoint
{
AWS_MARKETPLACECATALOG_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MarketplaceCatalogEndpoint
} // namespace MarketplaceCatalog
} // namespace Aws
