/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NumericQuestionPropertyAutomationLabel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace NumericQuestionPropertyAutomationLabelMapper
      {

        static constexpr uint32_t OVERALL_CUSTOMER_SENTIMENT_SCORE_HASH = ConstExprHashingUtils::HashString("OVERALL_CUSTOMER_SENTIMENT_SCORE");
        static constexpr uint32_t OVERALL_AGENT_SENTIMENT_SCORE_HASH = ConstExprHashingUtils::HashString("OVERALL_AGENT_SENTIMENT_SCORE");
        static constexpr uint32_t NON_TALK_TIME_HASH = ConstExprHashingUtils::HashString("NON_TALK_TIME");
        static constexpr uint32_t NON_TALK_TIME_PERCENTAGE_HASH = ConstExprHashingUtils::HashString("NON_TALK_TIME_PERCENTAGE");
        static constexpr uint32_t NUMBER_OF_INTERRUPTIONS_HASH = ConstExprHashingUtils::HashString("NUMBER_OF_INTERRUPTIONS");
        static constexpr uint32_t CONTACT_DURATION_HASH = ConstExprHashingUtils::HashString("CONTACT_DURATION");
        static constexpr uint32_t AGENT_INTERACTION_DURATION_HASH = ConstExprHashingUtils::HashString("AGENT_INTERACTION_DURATION");
        static constexpr uint32_t CUSTOMER_HOLD_TIME_HASH = ConstExprHashingUtils::HashString("CUSTOMER_HOLD_TIME");


        NumericQuestionPropertyAutomationLabel GetNumericQuestionPropertyAutomationLabelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OVERALL_CUSTOMER_SENTIMENT_SCORE_HASH)
          {
            return NumericQuestionPropertyAutomationLabel::OVERALL_CUSTOMER_SENTIMENT_SCORE;
          }
          else if (hashCode == OVERALL_AGENT_SENTIMENT_SCORE_HASH)
          {
            return NumericQuestionPropertyAutomationLabel::OVERALL_AGENT_SENTIMENT_SCORE;
          }
          else if (hashCode == NON_TALK_TIME_HASH)
          {
            return NumericQuestionPropertyAutomationLabel::NON_TALK_TIME;
          }
          else if (hashCode == NON_TALK_TIME_PERCENTAGE_HASH)
          {
            return NumericQuestionPropertyAutomationLabel::NON_TALK_TIME_PERCENTAGE;
          }
          else if (hashCode == NUMBER_OF_INTERRUPTIONS_HASH)
          {
            return NumericQuestionPropertyAutomationLabel::NUMBER_OF_INTERRUPTIONS;
          }
          else if (hashCode == CONTACT_DURATION_HASH)
          {
            return NumericQuestionPropertyAutomationLabel::CONTACT_DURATION;
          }
          else if (hashCode == AGENT_INTERACTION_DURATION_HASH)
          {
            return NumericQuestionPropertyAutomationLabel::AGENT_INTERACTION_DURATION;
          }
          else if (hashCode == CUSTOMER_HOLD_TIME_HASH)
          {
            return NumericQuestionPropertyAutomationLabel::CUSTOMER_HOLD_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumericQuestionPropertyAutomationLabel>(hashCode);
          }

          return NumericQuestionPropertyAutomationLabel::NOT_SET;
        }

        Aws::String GetNameForNumericQuestionPropertyAutomationLabel(NumericQuestionPropertyAutomationLabel enumValue)
        {
          switch(enumValue)
          {
          case NumericQuestionPropertyAutomationLabel::NOT_SET:
            return {};
          case NumericQuestionPropertyAutomationLabel::OVERALL_CUSTOMER_SENTIMENT_SCORE:
            return "OVERALL_CUSTOMER_SENTIMENT_SCORE";
          case NumericQuestionPropertyAutomationLabel::OVERALL_AGENT_SENTIMENT_SCORE:
            return "OVERALL_AGENT_SENTIMENT_SCORE";
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NumericQuestionPropertyAutomationLabelMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
