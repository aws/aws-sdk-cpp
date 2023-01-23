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
  enum class ViewerProtocolPolicy
  {
    NOT_SET,
    allow_all,
    https_only,
    redirect_to_https
  };

namespace ViewerProtocolPolicyMapper
{
AWS_CLOUDFRONT_API ViewerProtocolPolicy GetViewerProtocolPolicyForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForViewerProtocolPolicy(ViewerProtocolPolicy value);
} // namespace ViewerProtocolPolicyMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
