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
  enum class SslProtocol
  {
    NOT_SET,
    SSLv3,
    TLSv1,
    TLSv1_1,
    TLSv1_2
  };

namespace SslProtocolMapper
{
AWS_CLOUDFRONT_API SslProtocol GetSslProtocolForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForSslProtocol(SslProtocol value);
} // namespace SslProtocolMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
