/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class DistributionMetricName
  {
    NOT_SET,
    Requests,
    BytesDownloaded,
    BytesUploaded,
    TotalErrorRate,
    Http4xxErrorRate,
    Http5xxErrorRate
  };

namespace DistributionMetricNameMapper
{
AWS_LIGHTSAIL_API DistributionMetricName GetDistributionMetricNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForDistributionMetricName(DistributionMetricName value);
} // namespace DistributionMetricNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
