/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class Metric
  {
    NOT_SET,
    SEND,
    COMPLAINT,
    PERMANENT_BOUNCE,
    TRANSIENT_BOUNCE,
    OPEN,
    CLICK,
    DELIVERY,
    DELIVERY_OPEN,
    DELIVERY_CLICK,
    DELIVERY_COMPLAINT
  };

namespace MetricMapper
{
AWS_SESV2_API Metric GetMetricForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForMetric(Metric value);
} // namespace MetricMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
