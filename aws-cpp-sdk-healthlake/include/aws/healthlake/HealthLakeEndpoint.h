/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace HealthLake
{
namespace HealthLakeEndpoint
{
AWS_HEALTHLAKE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace HealthLakeEndpoint
} // namespace HealthLake
} // namespace Aws
