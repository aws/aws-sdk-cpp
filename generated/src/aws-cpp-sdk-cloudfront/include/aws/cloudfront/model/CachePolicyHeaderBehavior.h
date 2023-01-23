/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{
  enum class CachePolicyHeaderBehavior
  {
    NOT_SET,
    none,
    whitelist
  };

namespace CachePolicyHeaderBehaviorMapper
{
AWS_CLOUDFRONT_API CachePolicyHeaderBehavior GetCachePolicyHeaderBehaviorForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForCachePolicyHeaderBehavior(CachePolicyHeaderBehavior value);
} // namespace CachePolicyHeaderBehaviorMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
