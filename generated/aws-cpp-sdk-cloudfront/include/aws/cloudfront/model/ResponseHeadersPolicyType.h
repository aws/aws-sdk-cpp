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
  enum class ResponseHeadersPolicyType
  {
    NOT_SET,
    managed,
    custom
  };

namespace ResponseHeadersPolicyTypeMapper
{
AWS_CLOUDFRONT_API ResponseHeadersPolicyType GetResponseHeadersPolicyTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForResponseHeadersPolicyType(ResponseHeadersPolicyType value);
} // namespace ResponseHeadersPolicyTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
