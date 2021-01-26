/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Route53Resolver
{
namespace Route53ResolverEndpoint
{
AWS_ROUTE53RESOLVER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace Route53ResolverEndpoint
} // namespace Route53Resolver
} // namespace Aws
