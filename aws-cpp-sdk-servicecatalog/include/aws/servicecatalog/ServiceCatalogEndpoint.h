/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ServiceCatalog
{
namespace ServiceCatalogEndpoint
{
AWS_SERVICECATALOG_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ServiceCatalogEndpoint
} // namespace ServiceCatalog
} // namespace Aws
