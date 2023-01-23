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
  enum class OriginRequestPolicyQueryStringBehavior
  {
    NOT_SET,
    none,
    whitelist,
    all
  };

namespace OriginRequestPolicyQueryStringBehaviorMapper
{
AWS_CLOUDFRONT_API OriginRequestPolicyQueryStringBehavior GetOriginRequestPolicyQueryStringBehaviorForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginRequestPolicyQueryStringBehavior(OriginRequestPolicyQueryStringBehavior value);
} // namespace OriginRequestPolicyQueryStringBehaviorMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
