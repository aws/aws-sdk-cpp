/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormContactField.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormContactFieldMapper {

static const int CATEGORIES_HASH = HashingUtils::HashString("CATEGORIES");
static const int AGENT_ARN_HASH = HashingUtils::HashString("AGENT_ARN");
static const int QUEUE_ARN_HASH = HashingUtils::HashString("QUEUE_ARN");
static const int ROUTING_PROFILE_ARN_HASH = HashingUtils::HashString("ROUTING_PROFILE_ARN");
static const int CHANNEL_HASH = HashingUtils::HashString("CHANNEL");
static const int INITIATION_METHOD_HASH = HashingUtils::HashString("INITIATION_METHOD");
static const int IS_QUEUED_HASH = HashingUtils::HashString("IS_QUEUED");
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
static const int RECORDING_MEDIA_STREAM_TYPES_HASH = HashingUtils::HashString("RECORDING_MEDIA_STREAM_TYPES");

EvaluationFormContactField GetEvaluationFormContactFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CATEGORIES_HASH) {
    return EvaluationFormContactField::CATEGORIES;
  } else if (hashCode == AGENT_ARN_HASH) {
    return EvaluationFormContactField::AGENT_ARN;
  } else if (hashCode == QUEUE_ARN_HASH) {
    return EvaluationFormContactField::QUEUE_ARN;
  } else if (hashCode == ROUTING_PROFILE_ARN_HASH) {
    return EvaluationFormContactField::ROUTING_PROFILE_ARN;
  } else if (hashCode == CHANNEL_HASH) {
    return EvaluationFormContactField::CHANNEL;
  } else if (hashCode == INITIATION_METHOD_HASH) {
    return EvaluationFormContactField::INITIATION_METHOD;
  } else if (hashCode == IS_QUEUED_HASH) {
    return EvaluationFormContactField::IS_QUEUED;
  } else if (hashCode == OVERALL_CUSTOMER_SENTIMENT_SCORE_HASH) {
    return EvaluationFormContactField::OVERALL_CUSTOMER_SENTIMENT_SCORE;
  } else if (hashCode == OVERALL_AGENT_SENTIMENT_SCORE_HASH) {
    return EvaluationFormContactField::OVERALL_AGENT_SENTIMENT_SCORE;
  } else if (hashCode == CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT_HASH) {
    return EvaluationFormContactField::CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT;
  } else if (hashCode == CUSTOMER_SENTIMENT_SCORE_WITH_AGENT_HASH) {
    return EvaluationFormContactField::CUSTOMER_SENTIMENT_SCORE_WITH_AGENT;
  } else if (hashCode == NON_TALK_TIME_HASH) {
    return EvaluationFormContactField::NON_TALK_TIME;
  } else if (hashCode == NON_TALK_TIME_PERCENTAGE_HASH) {
    return EvaluationFormContactField::NON_TALK_TIME_PERCENTAGE;
  } else if (hashCode == NUMBER_OF_INTERRUPTIONS_HASH) {
    return EvaluationFormContactField::NUMBER_OF_INTERRUPTIONS;
  } else if (hashCode == CONTACT_DURATION_HASH) {
    return EvaluationFormContactField::CONTACT_DURATION;
  } else if (hashCode == AGENT_INTERACTION_DURATION_HASH) {
    return EvaluationFormContactField::AGENT_INTERACTION_DURATION;
  } else if (hashCode == CUSTOMER_HOLD_TIME_HASH) {
    return EvaluationFormContactField::CUSTOMER_HOLD_TIME;
  } else if (hashCode == LONGEST_HOLD_DURATION_HASH) {
    return EvaluationFormContactField::LONGEST_HOLD_DURATION;
  } else if (hashCode == NUMBER_OF_HOLDS_HASH) {
    return EvaluationFormContactField::NUMBER_OF_HOLDS;
  } else if (hashCode == AGENT_INTERACTION_AND_HOLD_DURATION_HASH) {
    return EvaluationFormContactField::AGENT_INTERACTION_AND_HOLD_DURATION;
  } else if (hashCode == RECORDING_MEDIA_STREAM_TYPES_HASH) {
    return EvaluationFormContactField::RECORDING_MEDIA_STREAM_TYPES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormContactField>(hashCode);
  }

  return EvaluationFormContactField::NOT_SET;
}

Aws::String GetNameForEvaluationFormContactField(EvaluationFormContactField enumValue) {
  switch (enumValue) {
    case EvaluationFormContactField::NOT_SET:
      return {};
    case EvaluationFormContactField::CATEGORIES:
      return "CATEGORIES";
    case EvaluationFormContactField::AGENT_ARN:
      return "AGENT_ARN";
    case EvaluationFormContactField::QUEUE_ARN:
      return "QUEUE_ARN";
    case EvaluationFormContactField::ROUTING_PROFILE_ARN:
      return "ROUTING_PROFILE_ARN";
    case EvaluationFormContactField::CHANNEL:
      return "CHANNEL";
    case EvaluationFormContactField::INITIATION_METHOD:
      return "INITIATION_METHOD";
    case EvaluationFormContactField::IS_QUEUED:
      return "IS_QUEUED";
    case EvaluationFormContactField::OVERALL_CUSTOMER_SENTIMENT_SCORE:
      return "OVERALL_CUSTOMER_SENTIMENT_SCORE";
    case EvaluationFormContactField::OVERALL_AGENT_SENTIMENT_SCORE:
      return "OVERALL_AGENT_SENTIMENT_SCORE";
    case EvaluationFormContactField::CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT:
      return "CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT";
    case EvaluationFormContactField::CUSTOMER_SENTIMENT_SCORE_WITH_AGENT:
      return "CUSTOMER_SENTIMENT_SCORE_WITH_AGENT";
    case EvaluationFormContactField::NON_TALK_TIME:
      return "NON_TALK_TIME";
    case EvaluationFormContactField::NON_TALK_TIME_PERCENTAGE:
      return "NON_TALK_TIME_PERCENTAGE";
    case EvaluationFormContactField::NUMBER_OF_INTERRUPTIONS:
      return "NUMBER_OF_INTERRUPTIONS";
    case EvaluationFormContactField::CONTACT_DURATION:
      return "CONTACT_DURATION";
    case EvaluationFormContactField::AGENT_INTERACTION_DURATION:
      return "AGENT_INTERACTION_DURATION";
    case EvaluationFormContactField::CUSTOMER_HOLD_TIME:
      return "CUSTOMER_HOLD_TIME";
    case EvaluationFormContactField::LONGEST_HOLD_DURATION:
      return "LONGEST_HOLD_DURATION";
    case EvaluationFormContactField::NUMBER_OF_HOLDS:
      return "NUMBER_OF_HOLDS";
    case EvaluationFormContactField::AGENT_INTERACTION_AND_HOLD_DURATION:
      return "AGENT_INTERACTION_AND_HOLD_DURATION";
    case EvaluationFormContactField::RECORDING_MEDIA_STREAM_TYPES:
      return "RECORDING_MEDIA_STREAM_TYPES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormContactFieldMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
