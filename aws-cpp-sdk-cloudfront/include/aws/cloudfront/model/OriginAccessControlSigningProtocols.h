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
  enum class OriginAccessControlSigningProtocols
  {
    NOT_SET,
    sigv4
  };

namespace OriginAccessControlSigningProtocolsMapper
{
AWS_CLOUDFRONT_API OriginAccessControlSigningProtocols GetOriginAccessControlSigningProtocolsForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginAccessControlSigningProtocols(OriginAccessControlSigningProtocols value);
} // namespace OriginAccessControlSigningProtocolsMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
