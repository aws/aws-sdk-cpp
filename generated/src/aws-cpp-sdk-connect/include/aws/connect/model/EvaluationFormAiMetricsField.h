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
enum class EvaluationFormAiMetricsField {
  NOT_SET,
  AI_SESSION_IS_HANDED_OFF,
  AI_SESSION_SELF_SERVICE_DURATION,
  AI_SESSION_GOAL_SUCCESS_RATE,
  AI_SESSION_COMPLETENESS_SCORE,
  AI_SESSION_FAITHFULNESS_SCORE,
  AI_AGENT_MAX_PROMPT_LATENCY,
  AI_TOOL_MAX_LATENCY,
  AI_TOOL_SELECTION_ACCURACY,
  AI_TOOL_PARAMETER_ACCURACY,
  AI_TOOL_UTILIZATION_ACCURACY
};

namespace EvaluationFormAiMetricsFieldMapper {
AWS_CONNECT_API EvaluationFormAiMetricsField GetEvaluationFormAiMetricsFieldForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormAiMetricsField(EvaluationFormAiMetricsField value);
}  // namespace EvaluationFormAiMetricsFieldMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
