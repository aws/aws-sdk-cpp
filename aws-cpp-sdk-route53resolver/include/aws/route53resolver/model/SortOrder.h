/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{
  enum class SortOrder
  {
    NOT_SET,
    ASCENDING,
    DESCENDING
  };

namespace SortOrderMapper
{
AWS_ROUTE53RESOLVER_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
