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
enum class FilterConditionString { NOT_SET, IS, IS_NOT };

namespace FilterConditionStringMapper {
AWS_FORECASTSERVICE_API FilterConditionString GetFilterConditionStringForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForFilterConditionString(FilterConditionString value);
}  // namespace FilterConditionStringMapper
}  // namespace Model
}  // namespace ForecastService
}  // namespace Aws
