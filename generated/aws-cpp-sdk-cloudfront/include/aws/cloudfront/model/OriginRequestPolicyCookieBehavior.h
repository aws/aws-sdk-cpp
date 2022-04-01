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
  enum class OriginRequestPolicyCookieBehavior
  {
    NOT_SET,
    none,
    whitelist,
    all
  };

namespace OriginRequestPolicyCookieBehaviorMapper
{
AWS_CLOUDFRONT_API OriginRequestPolicyCookieBehavior GetOriginRequestPolicyCookieBehaviorForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginRequestPolicyCookieBehavior(OriginRequestPolicyCookieBehavior value);
} // namespace OriginRequestPolicyCookieBehaviorMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
