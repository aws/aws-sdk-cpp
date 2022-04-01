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
  enum class RealtimeMetricsSubscriptionStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace RealtimeMetricsSubscriptionStatusMapper
{
AWS_CLOUDFRONT_API RealtimeMetricsSubscriptionStatus GetRealtimeMetricsSubscriptionStatusForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForRealtimeMetricsSubscriptionStatus(RealtimeMetricsSubscriptionStatus value);
} // namespace RealtimeMetricsSubscriptionStatusMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
