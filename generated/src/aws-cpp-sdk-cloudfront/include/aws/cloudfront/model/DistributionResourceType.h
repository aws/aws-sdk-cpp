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
  enum class DistributionResourceType
  {
    NOT_SET,
    distribution,
    distribution_tenant
  };

namespace DistributionResourceTypeMapper
{
AWS_CLOUDFRONT_API DistributionResourceType GetDistributionResourceTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForDistributionResourceType(DistributionResourceType value);
} // namespace DistributionResourceTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
