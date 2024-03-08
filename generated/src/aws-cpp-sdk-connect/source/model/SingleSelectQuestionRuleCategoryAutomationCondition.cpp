/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SingleSelectQuestionRuleCategoryAutomationCondition.h>
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
      namespace SingleSelectQuestionRuleCategoryAutomationConditionMapper
      {

        static const int PRESENT_HASH = HashingUtils::HashString("PRESENT");
        static const int NOT_PRESENT_HASH = HashingUtils::HashString("NOT_PRESENT");


        SingleSelectQuestionRuleCategoryAutomationCondition GetSingleSelectQuestionRuleCategoryAutomationConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESENT_HASH)
          {
            return SingleSelectQuestionRuleCategoryAutomationCondition::PRESENT;
          }
          else if (hashCode == NOT_PRESENT_HASH)
          {
            return SingleSelectQuestionRuleCategoryAutomationCondition::NOT_PRESENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SingleSelectQuestionRuleCategoryAutomationCondition>(hashCode);
          }

          return SingleSelectQuestionRuleCategoryAutomationCondition::NOT_SET;
        }

        Aws::String GetNameForSingleSelectQuestionRuleCategoryAutomationCondition(SingleSelectQuestionRuleCategoryAutomationCondition enumValue)
        {
          switch(enumValue)
          {
          case SingleSelectQuestionRuleCategoryAutomationCondition::NOT_SET:
            return {};
          case SingleSelectQuestionRuleCategoryAutomationCondition::PRESENT:
            return "PRESENT";
          case SingleSelectQuestionRuleCategoryAutomationCondition::NOT_PRESENT:
            return "NOT_PRESENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SingleSelectQuestionRuleCategoryAutomationConditionMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
