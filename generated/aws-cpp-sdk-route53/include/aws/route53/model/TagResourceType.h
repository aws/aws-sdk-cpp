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
  enum class TagResourceType
  {
    NOT_SET,
    healthcheck,
    hostedzone
  };

namespace TagResourceTypeMapper
{
AWS_ROUTE53_API TagResourceType GetTagResourceTypeForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForTagResourceType(TagResourceType value);
} // namespace TagResourceTypeMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
