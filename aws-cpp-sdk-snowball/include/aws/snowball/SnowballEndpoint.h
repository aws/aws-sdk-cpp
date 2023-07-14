/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Snowball
{
namespace SnowballEndpoint
{
AWS_SNOWBALL_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SnowballEndpoint
} // namespace Snowball
} // namespace Aws
