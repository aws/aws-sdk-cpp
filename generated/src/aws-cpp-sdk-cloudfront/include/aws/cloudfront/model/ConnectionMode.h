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
  enum class ConnectionMode
  {
    NOT_SET,
    direct,
    tenant_only
  };

namespace ConnectionModeMapper
{
AWS_CLOUDFRONT_API ConnectionMode GetConnectionModeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForConnectionMode(ConnectionMode value);
} // namespace ConnectionModeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
