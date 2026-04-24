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
enum class EvaluationType { NOT_SET, SUMMARY, COMPUTED };

namespace EvaluationTypeMapper {
AWS_FORECASTSERVICE_API EvaluationType GetEvaluationTypeForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForEvaluationType(EvaluationType value);
}  // namespace EvaluationTypeMapper
}  // namespace Model
}  // namespace ForecastService
}  // namespace Aws
