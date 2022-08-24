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
  enum class OriginAccessControlOriginTypes
  {
    NOT_SET,
    s3
  };

namespace OriginAccessControlOriginTypesMapper
{
AWS_CLOUDFRONT_API OriginAccessControlOriginTypes GetOriginAccessControlOriginTypesForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginAccessControlOriginTypes(OriginAccessControlOriginTypes value);
} // namespace OriginAccessControlOriginTypesMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
