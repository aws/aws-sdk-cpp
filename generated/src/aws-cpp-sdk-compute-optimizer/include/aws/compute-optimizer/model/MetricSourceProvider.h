/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class MetricSourceProvider
  {
    NOT_SET,
    CloudWatchApplicationInsights
  };

namespace MetricSourceProviderMapper
{
AWS_COMPUTEOPTIMIZER_API MetricSourceProvider GetMetricSourceProviderForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForMetricSourceProvider(MetricSourceProvider value);
} // namespace MetricSourceProviderMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
