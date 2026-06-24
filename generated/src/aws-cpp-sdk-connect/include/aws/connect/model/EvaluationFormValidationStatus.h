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
enum class EvaluationFormValidationStatus { NOT_SET, IN_PROGRESS, COMPLETED, FAILED };

namespace EvaluationFormValidationStatusMapper {
AWS_CONNECT_API EvaluationFormValidationStatus GetEvaluationFormValidationStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormValidationStatus(EvaluationFormValidationStatus value);
}  // namespace EvaluationFormValidationStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
