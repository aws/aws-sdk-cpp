/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ApplicationInsights
{
namespace ApplicationInsightsEndpoint
{
AWS_APPLICATIONINSIGHTS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ApplicationInsightsEndpoint
} // namespace ApplicationInsights
} // namespace Aws
