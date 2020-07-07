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
  enum class MinimumProtocolVersion
  {
    NOT_SET,
    SSLv3,
    TLSv1,
    TLSv1_2016,
    TLSv1_1_2016,
    TLSv1_2_2018,
    TLSv1_2_2019
  };

namespace MinimumProtocolVersionMapper
{
AWS_CLOUDFRONT_API MinimumProtocolVersion GetMinimumProtocolVersionForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForMinimumProtocolVersion(MinimumProtocolVersion value);
} // namespace MinimumProtocolVersionMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
