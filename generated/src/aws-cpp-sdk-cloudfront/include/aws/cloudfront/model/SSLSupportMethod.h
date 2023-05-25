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
  enum class SSLSupportMethod
  {
    NOT_SET,
    sni_only,
    vip,
    static_ip
  };

namespace SSLSupportMethodMapper
{
AWS_CLOUDFRONT_API SSLSupportMethod GetSSLSupportMethodForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForSSLSupportMethod(SSLSupportMethod value);
} // namespace SSLSupportMethodMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
