/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{
  enum class MetricType
  {
    NOT_SET,
    AggregatedRelativeTotalTime
  };

namespace MetricTypeMapper
{
AWS_CODEGURUPROFILER_API MetricType GetMetricTypeForName(const Aws::String& name);

AWS_CODEGURUPROFILER_API Aws::String GetNameForMetricType(MetricType value);
} // namespace MetricTypeMapper
} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
