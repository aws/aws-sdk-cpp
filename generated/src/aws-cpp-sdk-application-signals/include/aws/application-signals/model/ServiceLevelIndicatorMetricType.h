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
  enum class ServiceLevelIndicatorMetricType
  {
    NOT_SET,
    LATENCY,
    AVAILABILITY
  };

namespace ServiceLevelIndicatorMetricTypeMapper
{
AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorMetricType GetServiceLevelIndicatorMetricTypeForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForServiceLevelIndicatorMetricType(ServiceLevelIndicatorMetricType value);
} // namespace ServiceLevelIndicatorMetricTypeMapper
} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
