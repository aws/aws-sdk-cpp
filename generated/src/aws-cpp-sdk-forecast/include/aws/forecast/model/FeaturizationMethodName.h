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
enum class FeaturizationMethodName { NOT_SET, filling };

namespace FeaturizationMethodNameMapper {
AWS_FORECASTSERVICE_API FeaturizationMethodName GetFeaturizationMethodNameForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForFeaturizationMethodName(FeaturizationMethodName value);
}  // namespace FeaturizationMethodNameMapper
}  // namespace Model
}  // namespace ForecastService
}  // namespace Aws
