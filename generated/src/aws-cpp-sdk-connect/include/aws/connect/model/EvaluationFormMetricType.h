/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class EvaluationFormMetricType { NOT_SET, BUSINESS_OUTCOME };

namespace EvaluationFormMetricTypeMapper {
AWS_CONNECT_API EvaluationFormMetricType GetEvaluationFormMetricTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormMetricType(EvaluationFormMetricType value);
}  // namespace EvaluationFormMetricTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
