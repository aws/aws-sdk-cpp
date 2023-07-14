/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Health
{
namespace HealthEndpoint
{
AWS_HEALTH_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace HealthEndpoint
} // namespace Health
} // namespace Aws
