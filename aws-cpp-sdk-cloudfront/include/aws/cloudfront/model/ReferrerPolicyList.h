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
  enum class ReferrerPolicyList
  {
    NOT_SET,
    no_referrer,
    no_referrer_when_downgrade,
    origin,
    origin_when_cross_origin,
    same_origin,
    strict_origin,
    strict_origin_when_cross_origin,
    unsafe_url
  };

namespace ReferrerPolicyListMapper
{
AWS_CLOUDFRONT_API ReferrerPolicyList GetReferrerPolicyListForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForReferrerPolicyList(ReferrerPolicyList value);
} // namespace ReferrerPolicyListMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
