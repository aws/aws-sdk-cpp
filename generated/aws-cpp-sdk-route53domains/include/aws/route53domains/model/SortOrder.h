﻿/**
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
  enum class SortOrder
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace SortOrderMapper
{
AWS_ROUTE53DOMAINS_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
