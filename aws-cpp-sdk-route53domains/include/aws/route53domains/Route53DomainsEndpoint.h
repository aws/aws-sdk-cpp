/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Route53Domains
{
namespace Route53DomainsEndpoint
{
AWS_ROUTE53DOMAINS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace Route53DomainsEndpoint
} // namespace Route53Domains
} // namespace Aws
