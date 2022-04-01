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
  enum class OriginRequestPolicyType
  {
    NOT_SET,
    managed,
    custom
  };

namespace OriginRequestPolicyTypeMapper
{
AWS_CLOUDFRONT_API OriginRequestPolicyType GetOriginRequestPolicyTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginRequestPolicyType(OriginRequestPolicyType value);
} // namespace OriginRequestPolicyTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
