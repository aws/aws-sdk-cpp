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
enum class EvaluationFormMultiSelectQuestionDisplayMode { NOT_SET, DROPDOWN, CHECKBOX };

namespace EvaluationFormMultiSelectQuestionDisplayModeMapper {
AWS_CONNECT_API EvaluationFormMultiSelectQuestionDisplayMode
GetEvaluationFormMultiSelectQuestionDisplayModeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormMultiSelectQuestionDisplayMode(EvaluationFormMultiSelectQuestionDisplayMode value);
}  // namespace EvaluationFormMultiSelectQuestionDisplayModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
