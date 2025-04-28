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
  enum class DnsConfigurationStatus
  {
    NOT_SET,
    valid_configuration,
    invalid_configuration,
    unknown_configuration
  };

namespace DnsConfigurationStatusMapper
{
AWS_CLOUDFRONT_API DnsConfigurationStatus GetDnsConfigurationStatusForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForDnsConfigurationStatus(DnsConfigurationStatus value);
} // namespace DnsConfigurationStatusMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
