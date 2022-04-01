﻿/**
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
  enum class ResolverAutodefinedReverseStatus
  {
    NOT_SET,
    ENABLING,
    ENABLED,
    DISABLING,
    DISABLED
  };

namespace ResolverAutodefinedReverseStatusMapper
{
AWS_ROUTE53RESOLVER_API ResolverAutodefinedReverseStatus GetResolverAutodefinedReverseStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForResolverAutodefinedReverseStatus(ResolverAutodefinedReverseStatus value);
} // namespace ResolverAutodefinedReverseStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
