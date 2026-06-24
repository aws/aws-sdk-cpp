/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class InsightsFailureCategory {
  NOT_SET,
  execution_error_category_authentication,
  execution_error_category_resource_not_found,
  execution_error_category_service_errors,
  execution_error_category_rate_limiting,
  execution_error_category_formatting,
  execution_error_category_timeout,
  execution_error_category_resource_exhaustion,
  execution_error_category_environment,
  execution_error_category_tool_schema,
  task_instruction_category_non_compliance,
  task_instruction_category_problem_id,
  incorrect_actions_category_tool_selection,
  incorrect_actions_category_poor_information_retrieval,
  incorrect_actions_category_clarification,
  incorrect_actions_category_inappropriate_info_request,
  context_handling_error_category_context_handling_failures,
  hallucination_category_hall_capabilities,
  hallucination_category_hall_misunderstand,
  hallucination_category_hall_usage,
  hallucination_category_hall_history,
  hallucination_category_hall_params,
  hallucination_category_fabricate_tool_outputs,
  repetitive_behavior_category_repetition_tool,
  repetitive_behavior_category_repetition_info,
  repetitive_behavior_category_step_repetition,
  orchestration_related_errors_category_reasoning_mismatch,
  orchestration_related_errors_category_goal_deviation,
  orchestration_related_errors_category_premature_termination,
  orchestration_related_errors_category_unaware_termination,
  llm_output_category_nonsensical,
  configuration_mismatch_category_tool_definition,
  coding_use_case_specific_failure_types_category_edge_case_oversights,
  coding_use_case_specific_failure_types_category_dependency_issues,
  other
};

namespace InsightsFailureCategoryMapper {
AWS_BEDROCKAGENTCORE_API InsightsFailureCategory GetInsightsFailureCategoryForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForInsightsFailureCategory(InsightsFailureCategory value);
}  // namespace InsightsFailureCategoryMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
