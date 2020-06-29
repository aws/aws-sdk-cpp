/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace WAFV2
{
namespace WAFV2Endpoint
{
AWS_WAFV2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace WAFV2Endpoint
} // namespace WAFV2
} // namespace Aws
