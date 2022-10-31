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
  enum class MetricDimensionName
  {
    NOT_SET,
    EMAIL_IDENTITY,
    CONFIGURATION_SET,
    ISP
  };

namespace MetricDimensionNameMapper
{
AWS_SESV2_API MetricDimensionName GetMetricDimensionNameForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForMetricDimensionName(MetricDimensionName value);
} // namespace MetricDimensionNameMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
