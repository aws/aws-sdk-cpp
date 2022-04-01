/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{
  enum class DomainAvailability
  {
    NOT_SET,
    AVAILABLE,
    AVAILABLE_RESERVED,
    AVAILABLE_PREORDER,
    UNAVAILABLE,
    UNAVAILABLE_PREMIUM,
    UNAVAILABLE_RESTRICTED,
    RESERVED,
    DONT_KNOW
  };

namespace DomainAvailabilityMapper
{
AWS_ROUTE53DOMAINS_API DomainAvailability GetDomainAvailabilityForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForDomainAvailability(DomainAvailability value);
} // namespace DomainAvailabilityMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
