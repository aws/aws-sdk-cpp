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
  enum class CachePolicyQueryStringBehavior
  {
    NOT_SET,
    none,
    whitelist,
    allExcept,
    all
  };

namespace CachePolicyQueryStringBehaviorMapper
{
AWS_CLOUDFRONT_API CachePolicyQueryStringBehavior GetCachePolicyQueryStringBehaviorForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForCachePolicyQueryStringBehavior(CachePolicyQueryStringBehavior value);
} // namespace CachePolicyQueryStringBehaviorMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
