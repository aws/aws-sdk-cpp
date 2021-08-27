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
  enum class ResolverQueryLogConfigAssociationStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    ACTION_NEEDED,
    DELETING,
    FAILED
  };

namespace ResolverQueryLogConfigAssociationStatusMapper
{
AWS_ROUTE53RESOLVER_API ResolverQueryLogConfigAssociationStatus GetResolverQueryLogConfigAssociationStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForResolverQueryLogConfigAssociationStatus(ResolverQueryLogConfigAssociationStatus value);
} // namespace ResolverQueryLogConfigAssociationStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
