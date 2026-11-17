/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormAiMetricsField.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormAiMetricsFieldMapper {

static const int AI_SESSION_IS_HANDED_OFF_HASH = HashingUtils::HashString("AI_SESSION_IS_HANDED_OFF");
static const int AI_SESSION_SELF_SERVICE_DURATION_HASH = HashingUtils::HashString("AI_SESSION_SELF_SERVICE_DURATION");
static const int AI_SESSION_GOAL_SUCCESS_RATE_HASH = HashingUtils::HashString("AI_SESSION_GOAL_SUCCESS_RATE");
static const int AI_SESSION_COMPLETENESS_SCORE_HASH = HashingUtils::HashString("AI_SESSION_COMPLETENESS_SCORE");
static const int AI_SESSION_FAITHFULNESS_SCORE_HASH = HashingUtils::HashString("AI_SESSION_FAITHFULNESS_SCORE");
static const int AI_AGENT_MAX_PROMPT_LATENCY_HASH = HashingUtils::HashString("AI_AGENT_MAX_PROMPT_LATENCY");
static const int AI_TOOL_MAX_LATENCY_HASH = HashingUtils::HashString("AI_TOOL_MAX_LATENCY");
static const int AI_TOOL_SELECTION_ACCURACY_HASH = HashingUtils::HashString("AI_TOOL_SELECTION_ACCURACY");
static const int AI_TOOL_PARAMETER_ACCURACY_HASH = HashingUtils::HashString("AI_TOOL_PARAMETER_ACCURACY");
static const int AI_TOOL_UTILIZATION_ACCURACY_HASH = HashingUtils::HashString("AI_TOOL_UTILIZATION_ACCURACY");

EvaluationFormAiMetricsField GetEvaluationFormAiMetricsFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AI_SESSION_IS_HANDED_OFF_HASH) {
    return EvaluationFormAiMetricsField::AI_SESSION_IS_HANDED_OFF;
  } else if (hashCode == AI_SESSION_SELF_SERVICE_DURATION_HASH) {
    return EvaluationFormAiMetricsField::AI_SESSION_SELF_SERVICE_DURATION;
  } else if (hashCode == AI_SESSION_GOAL_SUCCESS_RATE_HASH) {
    return EvaluationFormAiMetricsField::AI_SESSION_GOAL_SUCCESS_RATE;
  } else if (hashCode == AI_SESSION_COMPLETENESS_SCORE_HASH) {
    return EvaluationFormAiMetricsField::AI_SESSION_COMPLETENESS_SCORE;
  } else if (hashCode == AI_SESSION_FAITHFULNESS_SCORE_HASH) {
    return EvaluationFormAiMetricsField::AI_SESSION_FAITHFULNESS_SCORE;
  } else if (hashCode == AI_AGENT_MAX_PROMPT_LATENCY_HASH) {
    return EvaluationFormAiMetricsField::AI_AGENT_MAX_PROMPT_LATENCY;
  } else if (hashCode == AI_TOOL_MAX_LATENCY_HASH) {
    return EvaluationFormAiMetricsField::AI_TOOL_MAX_LATENCY;
  } else if (hashCode == AI_TOOL_SELECTION_ACCURACY_HASH) {
    return EvaluationFormAiMetricsField::AI_TOOL_SELECTION_ACCURACY;
  } else if (hashCode == AI_TOOL_PARAMETER_ACCURACY_HASH) {
    return EvaluationFormAiMetricsField::AI_TOOL_PARAMETER_ACCURACY;
  } else if (hashCode == AI_TOOL_UTILIZATION_ACCURACY_HASH) {
    return EvaluationFormAiMetricsField::AI_TOOL_UTILIZATION_ACCURACY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormAiMetricsField>(hashCode);
  }

  return EvaluationFormAiMetricsField::NOT_SET;
}

Aws::String GetNameForEvaluationFormAiMetricsField(EvaluationFormAiMetricsField enumValue) {
  switch (enumValue) {
    case EvaluationFormAiMetricsField::NOT_SET:
      return {};
    case EvaluationFormAiMetricsField::AI_SESSION_IS_HANDED_OFF:
      return "AI_SESSION_IS_HANDED_OFF";
    case EvaluationFormAiMetricsField::AI_SESSION_SELF_SERVICE_DURATION:
      return "AI_SESSION_SELF_SERVICE_DURATION";
    case EvaluationFormAiMetricsField::AI_SESSION_GOAL_SUCCESS_RATE:
      return "AI_SESSION_GOAL_SUCCESS_RATE";
    case EvaluationFormAiMetricsField::AI_SESSION_COMPLETENESS_SCORE:
      return "AI_SESSION_COMPLETENESS_SCORE";
    case EvaluationFormAiMetricsField::AI_SESSION_FAITHFULNESS_SCORE:
      return "AI_SESSION_FAITHFULNESS_SCORE";
    case EvaluationFormAiMetricsField::AI_AGENT_MAX_PROMPT_LATENCY:
      return "AI_AGENT_MAX_PROMPT_LATENCY";
    case EvaluationFormAiMetricsField::AI_TOOL_MAX_LATENCY:
      return "AI_TOOL_MAX_LATENCY";
    case EvaluationFormAiMetricsField::AI_TOOL_SELECTION_ACCURACY:
      return "AI_TOOL_SELECTION_ACCURACY";
    case EvaluationFormAiMetricsField::AI_TOOL_PARAMETER_ACCURACY:
      return "AI_TOOL_PARAMETER_ACCURACY";
    case EvaluationFormAiMetricsField::AI_TOOL_UTILIZATION_ACCURACY:
      return "AI_TOOL_UTILIZATION_ACCURACY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormAiMetricsFieldMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
