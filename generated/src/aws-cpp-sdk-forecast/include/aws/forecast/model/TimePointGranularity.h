/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/ForecastService_EXPORTS.h>

namespace Aws {
namespace ForecastService {
namespace Model {
enum class TimePointGranularity { NOT_SET, ALL, SPECIFIC };

namespace TimePointGranularityMapper {
AWS_FORECASTSERVICE_API TimePointGranularity GetTimePointGranularityForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForTimePointGranularity(TimePointGranularity value);
}  // namespace TimePointGranularityMapper
}  // namespace Model
}  // namespace ForecastService
}  // namespace Aws
