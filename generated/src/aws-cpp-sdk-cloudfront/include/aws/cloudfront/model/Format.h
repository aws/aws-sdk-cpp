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
  enum class Format
  {
    NOT_SET,
    URLEncoded
  };

namespace FormatMapper
{
AWS_CLOUDFRONT_API Format GetFormatForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
