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
enum class EvaluationFormContactField {
  NOT_SET,
  CATEGORIES,
  AGENT_ARN,
  QUEUE_ARN,
  ROUTING_PROFILE_ARN,
  CHANNEL,
  INITIATION_METHOD,
  IS_QUEUED,
  OVERALL_CUSTOMER_SENTIMENT_SCORE,
  OVERALL_AGENT_SENTIMENT_SCORE,
  CUSTOMER_SENTIMENT_SCORE_WITHOUT_AGENT,
  CUSTOMER_SENTIMENT_SCORE_WITH_AGENT,
  NON_TALK_TIME,
  NON_TALK_TIME_PERCENTAGE,
  NUMBER_OF_INTERRUPTIONS,
  CONTACT_DURATION,
  AGENT_INTERACTION_DURATION,
  CUSTOMER_HOLD_TIME,
  LONGEST_HOLD_DURATION,
  NUMBER_OF_HOLDS,
  AGENT_INTERACTION_AND_HOLD_DURATION,
  RECORDING_MEDIA_STREAM_TYPES
};

namespace EvaluationFormContactFieldMapper {
AWS_CONNECT_API EvaluationFormContactField GetEvaluationFormContactFieldForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormContactField(EvaluationFormContactField value);
}  // namespace EvaluationFormContactFieldMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
