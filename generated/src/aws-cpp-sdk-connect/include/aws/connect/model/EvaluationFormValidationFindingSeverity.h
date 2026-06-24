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
enum class EvaluationFormValidationFindingSeverity { NOT_SET, WARNING, ERROR_ };

namespace EvaluationFormValidationFindingSeverityMapper {
AWS_CONNECT_API EvaluationFormValidationFindingSeverity GetEvaluationFormValidationFindingSeverityForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormValidationFindingSeverity(EvaluationFormValidationFindingSeverity value);
}  // namespace EvaluationFormValidationFindingSeverityMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
