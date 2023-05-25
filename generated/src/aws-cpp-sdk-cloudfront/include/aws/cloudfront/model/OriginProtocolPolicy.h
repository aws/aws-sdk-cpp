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
  enum class OriginProtocolPolicy
  {
    NOT_SET,
    http_only,
    match_viewer,
    https_only
  };

namespace OriginProtocolPolicyMapper
{
AWS_CLOUDFRONT_API OriginProtocolPolicy GetOriginProtocolPolicyForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginProtocolPolicy(OriginProtocolPolicy value);
} // namespace OriginProtocolPolicyMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
