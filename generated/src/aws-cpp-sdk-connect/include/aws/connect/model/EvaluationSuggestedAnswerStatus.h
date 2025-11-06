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
enum class EvaluationSuggestedAnswerStatus { NOT_SET, IN_PROGRESS, FAILED, SUCCEEDED };

namespace EvaluationSuggestedAnswerStatusMapper {
AWS_CONNECT_API EvaluationSuggestedAnswerStatus GetEvaluationSuggestedAnswerStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationSuggestedAnswerStatus(EvaluationSuggestedAnswerStatus value);
}  // namespace EvaluationSuggestedAnswerStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
