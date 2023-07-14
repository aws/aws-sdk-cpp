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
  enum class ListDomainsAttributeName
  {
    NOT_SET,
    DomainName,
    Expiry
  };

namespace ListDomainsAttributeNameMapper
{
AWS_ROUTE53DOMAINS_API ListDomainsAttributeName GetListDomainsAttributeNameForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForListDomainsAttributeName(ListDomainsAttributeName value);
} // namespace ListDomainsAttributeNameMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
