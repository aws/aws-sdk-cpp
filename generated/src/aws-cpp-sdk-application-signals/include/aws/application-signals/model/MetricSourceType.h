/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{
  enum class MetricSourceType
  {
    NOT_SET,
    ServiceOperation,
    CloudWatchMetric,
    ServiceDependency
  };

namespace MetricSourceTypeMapper
{
AWS_APPLICATIONSIGNALS_API MetricSourceType GetMetricSourceTypeForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForMetricSourceType(MetricSourceType value);
} // namespace MetricSourceTypeMapper
} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
