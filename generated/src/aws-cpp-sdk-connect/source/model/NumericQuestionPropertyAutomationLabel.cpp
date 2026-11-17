/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NumericQuestionPropertyAutomationLabel.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace NumericQuestionPropertyAutomationLabelMapper {

static const int OVERALL_CUSTOMER_SENTIMENT_SCORE_HASH = HashingUtils::HashString("OVERALL_CUSTOMER_SENTIMENT_SCORE");
static const int OVERALL_AGENT_SENTIMENT_SCORE_HASH = HashingUtils::HashString("OVERALL_AGENT_SENTIMENT_SCORE");
static const int CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT_HASH = HashingUtils::HashString("CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT");
static const int CUSTOMER_SENTIMENT_SCORE_WITH_AGENT_HASH = HashingUtils::HashString("CUSTOMER_SENTIMENT_SCORE_WITH_AGENT");
static const int NON_TALK_TIME_HASH = HashingUtils::HashString("NON_TALK_TIME");
static const int NON_TALK_TIME_PERCENTAGE_HASH = HashingUtils::HashString("NON_TALK_TIME_PERCENTAGE");
static const int NUMBER_OF_INTERRUPTIONS_HASH = HashingUtils::HashString("NUMBER_OF_INTERRUPTIONS");
static const int CONTACT_DURATION_HASH = HashingUtils::HashString("CONTACT_DURATION");
static const int AGENT_INTERACTION_DURATION_HASH = HashingUtils::HashString("AGENT_INTERACTION_DURATION");
static const int CUSTOMER_HOLD_TIME_HASH = HashingUtils::HashString("CUSTOMER_HOLD_TIME");
static const int LONGEST_HOLD_DURATION_HASH = HashingUtils::HashString("LONGEST_HOLD_DURATION");
static const int NUMBER_OF_HOLDS_HASH = HashingUtils::HashString("NUMBER_OF_HOLDS");
static const int AGENT_INTERACTION_AND_HOLD_DURATION_HASH = HashingUtils::HashString("AGENT_INTERACTION_AND_HOLD_DURATION");
static const int AI_SESSION_SELF_SERVICE_DURATION_HASH = HashingUtils::HashString("AI_SESSION_SELF_SERVICE_DURATION");
static const int AI_SESSION_GOAL_SUCCESS_RATE_HASH = HashingUtils::HashString("AI_SESSION_GOAL_SUCCESS_RATE");
static const int AI_SESSION_COMPLETENESS_SCORE_HASH = HashingUtils::HashString("AI_SESSION_COMPLETENESS_SCORE");
static const int AI_SESSION_FAITHFULNESS_SCORE_HASH = HashingUtils::HashString("AI_SESSION_FAITHFULNESS_SCORE");
static const int AI_AGENT_MAX_PROMPT_LATENCY_HASH = HashingUtils::HashString("AI_AGENT_MAX_PROMPT_LATENCY");
static const int AI_TOOL_MAX_LATENCY_HASH = HashingUtils::HashString("AI_TOOL_MAX_LATENCY");
static const int AI_TOOL_SELECTION_ACCURACY_HASH = HashingUtils::HashString("AI_TOOL_SELECTION_ACCURACY");
static const int AI_TOOL_PARAMETER_ACCURACY_HASH = HashingUtils::HashString("AI_TOOL_PARAMETER_ACCURACY");
static const int AI_TOOL_UTILIZATION_ACCURACY_HASH = HashingUtils::HashString("AI_TOOL_UTILIZATION_ACCURACY");

NumericQuestionPropertyAutomationLabel GetNumericQuestionPropertyAutomationLabelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OVERALL_CUSTOMER_SENTIMENT_SCORE_HASH) {
    return NumericQuestionPropertyAutomationLabel::OVERALL_CUSTOMER_SENTIMENT_SCORE;
  } else if (hashCode == OVERALL_AGENT_SENTIMENT_SCORE_HASH) {
    return NumericQuestionPropertyAutomationLabel::OVERALL_AGENT_SENTIMENT_SCORE;
  } else if (hashCode == CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT_HASH) {
    return NumericQuestionPropertyAutomationLabel::CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT;
  } else if (hashCode == CUSTOMER_SENTIMENT_SCORE_WITH_AGENT_HASH) {
    return NumericQuestionPropertyAutomationLabel::CUSTOMER_SENTIMENT_SCORE_WITH_AGENT;
  } else if (hashCode == NON_TALK_TIME_HASH) {
    return NumericQuestionPropertyAutomationLabel::NON_TALK_TIME;
  } else if (hashCode == NON_TALK_TIME_PERCENTAGE_HASH) {
    return NumericQuestionPropertyAutomationLabel::NON_TALK_TIME_PERCENTAGE;
  } else if (hashCode == NUMBER_OF_INTERRUPTIONS_HASH) {
    return NumericQuestionPropertyAutomationLabel::NUMBER_OF_INTERRUPTIONS;
  } else if (hashCode == CONTACT_DURATION_HASH) {
    return NumericQuestionPropertyAutomationLabel::CONTACT_DURATION;
  } else if (hashCode == AGENT_INTERACTION_DURATION_HASH) {
    return NumericQuestionPropertyAutomationLabel::AGENT_INTERACTION_DURATION;
  } else if (hashCode == CUSTOMER_HOLD_TIME_HASH) {
    return NumericQuestionPropertyAutomationLabel::CUSTOMER_HOLD_TIME;
  } else if (hashCode == LONGEST_HOLD_DURATION_HASH) {
    return NumericQuestionPropertyAutomationLabel::LONGEST_HOLD_DURATION;
  } else if (hashCode == NUMBER_OF_HOLDS_HASH) {
    return NumericQuestionPropertyAutomationLabel::NUMBER_OF_HOLDS;
  } else if (hashCode == AGENT_INTERACTION_AND_HOLD_DURATION_HASH) {
    return NumericQuestionPropertyAutomationLabel::AGENT_INTERACTION_AND_HOLD_DURATION;
  } else if (hashCode == AI_SESSION_SELF_SERVICE_DURATION_HASH) {
    return NumericQuestionPropertyAutomationLabel::AI_SESSION_SELF_SERVICE_DURATION;
  } else if (hashCode == AI_SESSION_GOAL_SUCCESS_RATE_HASH) {
    return NumericQuestionPropertyAutomationLabel::AI_SESSION_GOAL_SUCCESS_RATE;
  } else if (hashCode == AI_SESSION_COMPLETENESS_SCORE_HASH) {
    return NumericQuestionPropertyAutomationLabel::AI_SESSION_COMPLETENESS_SCORE;
  } else if (hashCode == AI_SESSION_FAITHFULNESS_SCORE_HASH) {
    return NumericQuestionPropertyAutomationLabel::AI_SESSION_FAITHFULNESS_SCORE;
  } else if (hashCode == AI_AGENT_MAX_PROMPT_LATENCY_HASH) {
    return NumericQuestionPropertyAutomationLabel::AI_AGENT_MAX_PROMPT_LATENCY;
  } else if (hashCode == AI_TOOL_MAX_LATENCY_HASH) {
    return NumericQuestionPropertyAutomationLabel::AI_TOOL_MAX_LATENCY;
  } else if (hashCode == AI_TOOL_SELECTION_ACCURACY_HASH) {
    return NumericQuestionPropertyAutomationLabel::AI_TOOL_SELECTION_ACCURACY;
  } else if (hashCode == AI_TOOL_PARAMETER_ACCURACY_HASH) {
    return NumericQuestionPropertyAutomationLabel::AI_TOOL_PARAMETER_ACCURACY;
  } else if (hashCode == AI_TOOL_UTILIZATION_ACCURACY_HASH) {
    return NumericQuestionPropertyAutomationLabel::AI_TOOL_UTILIZATION_ACCURACY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NumericQuestionPropertyAutomationLabel>(hashCode);
  }

  return NumericQuestionPropertyAutomationLabel::NOT_SET;
}

Aws::String GetNameForNumericQuestionPropertyAutomationLabel(NumericQuestionPropertyAutomationLabel enumValue) {
  switch (enumValue) {
    case NumericQuestionPropertyAutomationLabel::NOT_SET:
      return {};
    case NumericQuestionPropertyAutomationLabel::OVERALL_CUSTOMER_SENTIMENT_SCORE:
      return "OVERALL_CUSTOMER_SENTIMENT_SCORE";
    case NumericQuestionPropertyAutomationLabel::OVERALL_AGENT_SENTIMENT_SCORE:
      return "OVERALL_AGENT_SENTIMENT_SCORE";
    case NumericQuestionPropertyAutomationLabel::CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT:
      return "CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT";
    case NumericQuestionPropertyAutomationLabel::CUSTOMER_SENTIMENT_SCORE_WITH_AGENT:
      return "CUSTOMER_SENTIMENT_SCORE_WITH_AGENT";
    case NumericQuestionPropertyAutomationLabel::NON_TALK_TIME:
      return "NON_TALK_TIME";
    case NumericQuestionPropertyAutomationLabel::NON_TALK_TIME_PERCENTAGE:
      return "NON_TALK_TIME_PERCENTAGE";
    case NumericQuestionPropertyAutomationLabel::NUMBER_OF_INTERRUPTIONS:
      return "NUMBER_OF_INTERRUPTIONS";
    case NumericQuestionPropertyAutomationLabel::CONTACT_DURATION:
      return "CONTACT_DURATION";
    case NumericQuestionPropertyAutomationLabel::AGENT_INTERACTION_DURATION:
      return "AGENT_INTERACTION_DURATION";
    case NumericQuestionPropertyAutomationLabel::CUSTOMER_HOLD_TIME:
      return "CUSTOMER_HOLD_TIME";
    case NumericQuestionPropertyAutomationLabel::LONGEST_HOLD_DURATION:
      return "LONGEST_HOLD_DURATION";
    case NumericQuestionPropertyAutomationLabel::NUMBER_OF_HOLDS:
      return "NUMBER_OF_HOLDS";
    case NumericQuestionPropertyAutomationLabel::AGENT_INTERACTION_AND_HOLD_DURATION:
      return "AGENT_INTERACTION_AND_HOLD_DURATION";
    case NumericQuestionPropertyAutomationLabel::AI_SESSION_SELF_SERVICE_DURATION:
      return "AI_SESSION_SELF_SERVICE_DURATION";
    case NumericQuestionPropertyAutomationLabel::AI_SESSION_GOAL_SUCCESS_RATE:
      return "AI_SESSION_GOAL_SUCCESS_RATE";
    case NumericQuestionPropertyAutomationLabel::AI_SESSION_COMPLETENESS_SCORE:
      return "AI_SESSION_COMPLETENESS_SCORE";
    case NumericQuestionPropertyAutomationLabel::AI_SESSION_FAITHFULNESS_SCORE:
      return "AI_SESSION_FAITHFULNESS_SCORE";
    case NumericQuestionPropertyAutomationLabel::AI_AGENT_MAX_PROMPT_LATENCY:
      return "AI_AGENT_MAX_PROMPT_LATENCY";
    case NumericQuestionPropertyAutomationLabel::AI_TOOL_MAX_LATENCY:
      return "AI_TOOL_MAX_LATENCY";
    case NumericQuestionPropertyAutomationLabel::AI_TOOL_SELECTION_ACCURACY:
      return "AI_TOOL_SELECTION_ACCURACY";
    case NumericQuestionPropertyAutomationLabel::AI_TOOL_PARAMETER_ACCURACY:
      return "AI_TOOL_PARAMETER_ACCURACY";
    case NumericQuestionPropertyAutomationLabel::AI_TOOL_UTILIZATION_ACCURACY:
      return "AI_TOOL_UTILIZATION_ACCURACY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NumericQuestionPropertyAutomationLabelMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
