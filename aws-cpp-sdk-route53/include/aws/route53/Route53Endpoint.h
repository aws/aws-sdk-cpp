/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Route53
{
namespace Route53Endpoint
{
AWS_ROUTE53_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace Route53Endpoint
} // namespace Route53
} // namespace Aws
