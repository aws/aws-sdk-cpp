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
  enum class HttpVersion
  {
    NOT_SET,
    http1_1,
    http2
  };

namespace HttpVersionMapper
{
AWS_CLOUDFRONT_API HttpVersion GetHttpVersionForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForHttpVersion(HttpVersion value);
} // namespace HttpVersionMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
