/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{
  enum class ReusableDelegationSetLimitType
  {
    NOT_SET,
    MAX_ZONES_BY_REUSABLE_DELEGATION_SET
  };

namespace ReusableDelegationSetLimitTypeMapper
{
AWS_ROUTE53_API ReusableDelegationSetLimitType GetReusableDelegationSetLimitTypeForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForReusableDelegationSetLimitType(ReusableDelegationSetLimitType value);
} // namespace ReusableDelegationSetLimitTypeMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
