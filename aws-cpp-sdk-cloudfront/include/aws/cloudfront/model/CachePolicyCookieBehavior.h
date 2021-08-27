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
  enum class CachePolicyCookieBehavior
  {
    NOT_SET,
    none,
    whitelist,
    allExcept,
    all
  };

namespace CachePolicyCookieBehaviorMapper
{
AWS_CLOUDFRONT_API CachePolicyCookieBehavior GetCachePolicyCookieBehaviorForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForCachePolicyCookieBehavior(CachePolicyCookieBehavior value);
} // namespace CachePolicyCookieBehaviorMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
