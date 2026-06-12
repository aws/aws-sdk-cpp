/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InsightsFailureCategory.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace InsightsFailureCategoryMapper {

static const int execution_error_category_authentication_HASH = HashingUtils::HashString("execution-error-category-authentication");
static const int execution_error_category_resource_not_found_HASH = HashingUtils::HashString("execution-error-category-resource-not-found");
static const int execution_error_category_service_errors_HASH = HashingUtils::HashString("execution-error-category-service-errors");
static const int execution_error_category_rate_limiting_HASH = HashingUtils::HashString("execution-error-category-rate-limiting");
static const int execution_error_category_formatting_HASH = HashingUtils::HashString("execution-error-category-formatting");
static const int execution_error_category_timeout_HASH = HashingUtils::HashString("execution-error-category-timeout");
static const int execution_error_category_resource_exhaustion_HASH =
    HashingUtils::HashString("execution-error-category-resource-exhaustion");
static const int execution_error_category_environment_HASH = HashingUtils::HashString("execution-error-category-environment");
static const int execution_error_category_tool_schema_HASH = HashingUtils::HashString("execution-error-category-tool-schema");
static const int task_instruction_category_non_compliance_HASH = HashingUtils::HashString("task-instruction-category-non-compliance");
static const int task_instruction_category_problem_id_HASH = HashingUtils::HashString("task-instruction-category-problem-id");
static const int incorrect_actions_category_tool_selection_HASH = HashingUtils::HashString("incorrect-actions-category-tool-selection");
static const int incorrect_actions_category_poor_information_retrieval_HASH =
    HashingUtils::HashString("incorrect-actions-category-poor-information-retrieval");
static const int incorrect_actions_category_clarification_HASH = HashingUtils::HashString("incorrect-actions-category-clarification");
static const int incorrect_actions_category_inappropriate_info_request_HASH =
    HashingUtils::HashString("incorrect-actions-category-inappropriate-info-request");
static const int context_handling_error_category_context_handling_failures_HASH =
    HashingUtils::HashString("context-handling-error-category-context-handling-failures");
static const int hallucination_category_hall_capabilities_HASH = HashingUtils::HashString("hallucination-category-hall-capabilities");
static const int hallucination_category_hall_misunderstand_HASH = HashingUtils::HashString("hallucination-category-hall-misunderstand");
static const int hallucination_category_hall_usage_HASH = HashingUtils::HashString("hallucination-category-hall-usage");
static const int hallucination_category_hall_history_HASH = HashingUtils::HashString("hallucination-category-hall-history");
static const int hallucination_category_hall_params_HASH = HashingUtils::HashString("hallucination-category-hall-params");
static const int hallucination_category_fabricate_tool_outputs_HASH =
    HashingUtils::HashString("hallucination-category-fabricate-tool-outputs");
static const int repetitive_behavior_category_repetition_tool_HASH =
    HashingUtils::HashString("repetitive-behavior-category-repetition-tool");
static const int repetitive_behavior_category_repetition_info_HASH =
    HashingUtils::HashString("repetitive-behavior-category-repetition-info");
static const int repetitive_behavior_category_step_repetition_HASH =
    HashingUtils::HashString("repetitive-behavior-category-step-repetition");
static const int orchestration_related_errors_category_reasoning_mismatch_HASH =
    HashingUtils::HashString("orchestration-related-errors-category-reasoning-mismatch");
static const int orchestration_related_errors_category_goal_deviation_HASH =
    HashingUtils::HashString("orchestration-related-errors-category-goal-deviation");
static const int orchestration_related_errors_category_premature_termination_HASH =
    HashingUtils::HashString("orchestration-related-errors-category-premature-termination");
static const int orchestration_related_errors_category_unaware_termination_HASH =
    HashingUtils::HashString("orchestration-related-errors-category-unaware-termination");
static const int llm_output_category_nonsensical_HASH = HashingUtils::HashString("llm-output-category-nonsensical");
static const int configuration_mismatch_category_tool_definition_HASH =
    HashingUtils::HashString("configuration-mismatch-category-tool-definition");
static const int coding_use_case_specific_failure_types_category_edge_case_oversights_HASH =
    HashingUtils::HashString("coding-use-case-specific-failure-types-category-edge-case-oversights");
static const int coding_use_case_specific_failure_types_category_dependency_issues_HASH =
    HashingUtils::HashString("coding-use-case-specific-failure-types-category-dependency-issues");

InsightsFailureCategory GetInsightsFailureCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == execution_error_category_authentication_HASH) {
    return InsightsFailureCategory::execution_error_category_authentication;
  } else if (hashCode == execution_error_category_resource_not_found_HASH) {
    return InsightsFailureCategory::execution_error_category_resource_not_found;
  } else if (hashCode == execution_error_category_service_errors_HASH) {
    return InsightsFailureCategory::execution_error_category_service_errors;
  } else if (hashCode == execution_error_category_rate_limiting_HASH) {
    return InsightsFailureCategory::execution_error_category_rate_limiting;
  } else if (hashCode == execution_error_category_formatting_HASH) {
    return InsightsFailureCategory::execution_error_category_formatting;
  } else if (hashCode == execution_error_category_timeout_HASH) {
    return InsightsFailureCategory::execution_error_category_timeout;
  } else if (hashCode == execution_error_category_resource_exhaustion_HASH) {
    return InsightsFailureCategory::execution_error_category_resource_exhaustion;
  } else if (hashCode == execution_error_category_environment_HASH) {
    return InsightsFailureCategory::execution_error_category_environment;
  } else if (hashCode == execution_error_category_tool_schema_HASH) {
    return InsightsFailureCategory::execution_error_category_tool_schema;
  } else if (hashCode == task_instruction_category_non_compliance_HASH) {
    return InsightsFailureCategory::task_instruction_category_non_compliance;
  } else if (hashCode == task_instruction_category_problem_id_HASH) {
    return InsightsFailureCategory::task_instruction_category_problem_id;
  } else if (hashCode == incorrect_actions_category_tool_selection_HASH) {
    return InsightsFailureCategory::incorrect_actions_category_tool_selection;
  } else if (hashCode == incorrect_actions_category_poor_information_retrieval_HASH) {
    return InsightsFailureCategory::incorrect_actions_category_poor_information_retrieval;
  } else if (hashCode == incorrect_actions_category_clarification_HASH) {
    return InsightsFailureCategory::incorrect_actions_category_clarification;
  } else if (hashCode == incorrect_actions_category_inappropriate_info_request_HASH) {
    return InsightsFailureCategory::incorrect_actions_category_inappropriate_info_request;
  } else if (hashCode == context_handling_error_category_context_handling_failures_HASH) {
    return InsightsFailureCategory::context_handling_error_category_context_handling_failures;
  } else if (hashCode == hallucination_category_hall_capabilities_HASH) {
    return InsightsFailureCategory::hallucination_category_hall_capabilities;
  } else if (hashCode == hallucination_category_hall_misunderstand_HASH) {
    return InsightsFailureCategory::hallucination_category_hall_misunderstand;
  } else if (hashCode == hallucination_category_hall_usage_HASH) {
    return InsightsFailureCategory::hallucination_category_hall_usage;
  } else if (hashCode == hallucination_category_hall_history_HASH) {
    return InsightsFailureCategory::hallucination_category_hall_history;
  } else if (hashCode == hallucination_category_hall_params_HASH) {
    return InsightsFailureCategory::hallucination_category_hall_params;
  } else if (hashCode == hallucination_category_fabricate_tool_outputs_HASH) {
    return InsightsFailureCategory::hallucination_category_fabricate_tool_outputs;
  } else if (hashCode == repetitive_behavior_category_repetition_tool_HASH) {
    return InsightsFailureCategory::repetitive_behavior_category_repetition_tool;
  } else if (hashCode == repetitive_behavior_category_repetition_info_HASH) {
    return InsightsFailureCategory::repetitive_behavior_category_repetition_info;
  } else if (hashCode == repetitive_behavior_category_step_repetition_HASH) {
    return InsightsFailureCategory::repetitive_behavior_category_step_repetition;
  } else if (hashCode == orchestration_related_errors_category_reasoning_mismatch_HASH) {
    return InsightsFailureCategory::orchestration_related_errors_category_reasoning_mismatch;
  } else if (hashCode == orchestration_related_errors_category_goal_deviation_HASH) {
    return InsightsFailureCategory::orchestration_related_errors_category_goal_deviation;
  } else if (hashCode == orchestration_related_errors_category_premature_termination_HASH) {
    return InsightsFailureCategory::orchestration_related_errors_category_premature_termination;
  } else if (hashCode == orchestration_related_errors_category_unaware_termination_HASH) {
    return InsightsFailureCategory::orchestration_related_errors_category_unaware_termination;
  } else if (hashCode == llm_output_category_nonsensical_HASH) {
    return InsightsFailureCategory::llm_output_category_nonsensical;
  } else if (hashCode == configuration_mismatch_category_tool_definition_HASH) {
    return InsightsFailureCategory::configuration_mismatch_category_tool_definition;
  } else if (hashCode == coding_use_case_specific_failure_types_category_edge_case_oversights_HASH) {
    return InsightsFailureCategory::coding_use_case_specific_failure_types_category_edge_case_oversights;
  } else if (hashCode == coding_use_case_specific_failure_types_category_dependency_issues_HASH) {
    return InsightsFailureCategory::coding_use_case_specific_failure_types_category_dependency_issues;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightsFailureCategory>(hashCode);
  }

  return InsightsFailureCategory::NOT_SET;
}

Aws::String GetNameForInsightsFailureCategory(InsightsFailureCategory enumValue) {
  switch (enumValue) {
    case InsightsFailureCategory::NOT_SET:
      return {};
    case InsightsFailureCategory::execution_error_category_authentication:
      return "execution-error-category-authentication";
    case InsightsFailureCategory::execution_error_category_resource_not_found:
      return "execution-error-category-resource-not-found";
    case InsightsFailureCategory::execution_error_category_service_errors:
      return "execution-error-category-service-errors";
    case InsightsFailureCategory::execution_error_category_rate_limiting:
      return "execution-error-category-rate-limiting";
    case InsightsFailureCategory::execution_error_category_formatting:
      return "execution-error-category-formatting";
    case InsightsFailureCategory::execution_error_category_timeout:
      return "execution-error-category-timeout";
    case InsightsFailureCategory::execution_error_category_resource_exhaustion:
      return "execution-error-category-resource-exhaustion";
    case InsightsFailureCategory::execution_error_category_environment:
      return "execution-error-category-environment";
    case InsightsFailureCategory::execution_error_category_tool_schema:
      return "execution-error-category-tool-schema";
    case InsightsFailureCategory::task_instruction_category_non_compliance:
      return "task-instruction-category-non-compliance";
    case InsightsFailureCategory::task_instruction_category_problem_id:
      return "task-instruction-category-problem-id";
    case InsightsFailureCategory::incorrect_actions_category_tool_selection:
      return "incorrect-actions-category-tool-selection";
    case InsightsFailureCategory::incorrect_actions_category_poor_information_retrieval:
      return "incorrect-actions-category-poor-information-retrieval";
    case InsightsFailureCategory::incorrect_actions_category_clarification:
      return "incorrect-actions-category-clarification";
    case InsightsFailureCategory::incorrect_actions_category_inappropriate_info_request:
      return "incorrect-actions-category-inappropriate-info-request";
    case InsightsFailureCategory::context_handling_error_category_context_handling_failures:
      return "context-handling-error-category-context-handling-failures";
    case InsightsFailureCategory::hallucination_category_hall_capabilities:
      return "hallucination-category-hall-capabilities";
    case InsightsFailureCategory::hallucination_category_hall_misunderstand:
      return "hallucination-category-hall-misunderstand";
    case InsightsFailureCategory::hallucination_category_hall_usage:
      return "hallucination-category-hall-usage";
    case InsightsFailureCategory::hallucination_category_hall_history:
      return "hallucination-category-hall-history";
    case InsightsFailureCategory::hallucination_category_hall_params:
      return "hallucination-category-hall-params";
    case InsightsFailureCategory::hallucination_category_fabricate_tool_outputs:
      return "hallucination-category-fabricate-tool-outputs";
    case InsightsFailureCategory::repetitive_behavior_category_repetition_tool:
      return "repetitive-behavior-category-repetition-tool";
    case InsightsFailureCategory::repetitive_behavior_category_repetition_info:
      return "repetitive-behavior-category-repetition-info";
    case InsightsFailureCategory::repetitive_behavior_category_step_repetition:
      return "repetitive-behavior-category-step-repetition";
    case InsightsFailureCategory::orchestration_related_errors_category_reasoning_mismatch:
      return "orchestration-related-errors-category-reasoning-mismatch";
    case InsightsFailureCategory::orchestration_related_errors_category_goal_deviation:
      return "orchestration-related-errors-category-goal-deviation";
    case InsightsFailureCategory::orchestration_related_errors_category_premature_termination:
      return "orchestration-related-errors-category-premature-termination";
    case InsightsFailureCategory::orchestration_related_errors_category_unaware_termination:
      return "orchestration-related-errors-category-unaware-termination";
    case InsightsFailureCategory::llm_output_category_nonsensical:
      return "llm-output-category-nonsensical";
    case InsightsFailureCategory::configuration_mismatch_category_tool_definition:
      return "configuration-mismatch-category-tool-definition";
    case InsightsFailureCategory::coding_use_case_specific_failure_types_category_edge_case_oversights:
      return "coding-use-case-specific-failure-types-category-edge-case-oversights";
    case InsightsFailureCategory::coding_use_case_specific_failure_types_category_dependency_issues:
      return "coding-use-case-specific-failure-types-category-dependency-issues";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightsFailureCategoryMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
