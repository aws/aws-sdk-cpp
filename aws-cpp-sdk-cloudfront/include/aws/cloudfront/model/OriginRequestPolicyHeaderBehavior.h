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
  enum class OriginRequestPolicyHeaderBehavior
  {
    NOT_SET,
    none,
    whitelist,
    allViewer,
    allViewerAndWhitelistCloudFront
  };

namespace OriginRequestPolicyHeaderBehaviorMapper
{
AWS_CLOUDFRONT_API OriginRequestPolicyHeaderBehavior GetOriginRequestPolicyHeaderBehaviorForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginRequestPolicyHeaderBehavior(OriginRequestPolicyHeaderBehavior value);
} // namespace OriginRequestPolicyHeaderBehaviorMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
