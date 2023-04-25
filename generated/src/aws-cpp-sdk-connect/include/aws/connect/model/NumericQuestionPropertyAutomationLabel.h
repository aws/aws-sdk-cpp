/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class NumericQuestionPropertyAutomationLabel
  {
    NOT_SET,
    OVERALL_CUSTOMER_SENTIMENT_SCORE,
    OVERALL_AGENT_SENTIMENT_SCORE,
    NON_TALK_TIME,
    NON_TALK_TIME_PERCENTAGE,
    NUMBER_OF_INTERRUPTIONS,
    CONTACT_DURATION,
    AGENT_INTERACTION_DURATION,
    CUSTOMER_HOLD_TIME
  };

namespace NumericQuestionPropertyAutomationLabelMapper
{
AWS_CONNECT_API NumericQuestionPropertyAutomationLabel GetNumericQuestionPropertyAutomationLabelForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNumericQuestionPropertyAutomationLabel(NumericQuestionPropertyAutomationLabel value);
} // namespace NumericQuestionPropertyAutomationLabelMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
