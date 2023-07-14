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
  enum class MetricStatistic
  {
    NOT_SET,
    Minimum,
    Maximum,
    Sum,
    Average,
    SampleCount
  };

namespace MetricStatisticMapper
{
AWS_LIGHTSAIL_API MetricStatistic GetMetricStatisticForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForMetricStatistic(MetricStatistic value);
} // namespace MetricStatisticMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
