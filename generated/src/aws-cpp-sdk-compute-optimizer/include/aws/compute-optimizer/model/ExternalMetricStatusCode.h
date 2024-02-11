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
  enum class ExternalMetricStatusCode
  {
    NOT_SET,
    NO_EXTERNAL_METRIC_SET,
    INTEGRATION_SUCCESS,
    DATADOG_INTEGRATION_ERROR,
    DYNATRACE_INTEGRATION_ERROR,
    NEWRELIC_INTEGRATION_ERROR,
    INSTANA_INTEGRATION_ERROR,
    INSUFFICIENT_DATADOG_METRICS,
    INSUFFICIENT_DYNATRACE_METRICS,
    INSUFFICIENT_NEWRELIC_METRICS,
    INSUFFICIENT_INSTANA_METRICS
  };

namespace ExternalMetricStatusCodeMapper
{
AWS_COMPUTEOPTIMIZER_API ExternalMetricStatusCode GetExternalMetricStatusCodeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExternalMetricStatusCode(ExternalMetricStatusCode value);
} // namespace ExternalMetricStatusCodeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
