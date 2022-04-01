/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace WAFRegional
{
namespace WAFRegionalEndpoint
{
AWS_WAFREGIONAL_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace WAFRegionalEndpoint
} // namespace WAFRegional
} // namespace Aws
