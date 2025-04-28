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
  enum class ValidationTokenHost
  {
    NOT_SET,
    cloudfront,
    self_hosted
  };

namespace ValidationTokenHostMapper
{
AWS_CLOUDFRONT_API ValidationTokenHost GetValidationTokenHostForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForValidationTokenHost(ValidationTokenHost value);
} // namespace ValidationTokenHostMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
