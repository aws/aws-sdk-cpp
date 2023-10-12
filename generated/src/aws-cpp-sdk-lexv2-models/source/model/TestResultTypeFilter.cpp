/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestResultTypeFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace TestResultTypeFilterMapper
      {

        static constexpr uint32_t OverallTestResults_HASH = ConstExprHashingUtils::HashString("OverallTestResults");
        static constexpr uint32_t ConversationLevelTestResults_HASH = ConstExprHashingUtils::HashString("ConversationLevelTestResults");
        static constexpr uint32_t IntentClassificationTestResults_HASH = ConstExprHashingUtils::HashString("IntentClassificationTestResults");
        static constexpr uint32_t SlotResolutionTestResults_HASH = ConstExprHashingUtils::HashString("SlotResolutionTestResults");
        static constexpr uint32_t UtteranceLevelResults_HASH = ConstExprHashingUtils::HashString("UtteranceLevelResults");


        TestResultTypeFilter GetTestResultTypeFilterForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OverallTestResults_HASH)
          {
            return TestResultTypeFilter::OverallTestResults;
          }
          else if (hashCode == ConversationLevelTestResults_HASH)
          {
            return TestResultTypeFilter::ConversationLevelTestResults;
          }
          else if (hashCode == IntentClassificationTestResults_HASH)
          {
            return TestResultTypeFilter::IntentClassificationTestResults;
          }
          else if (hashCode == SlotResolutionTestResults_HASH)
          {
            return TestResultTypeFilter::SlotResolutionTestResults;
          }
          else if (hashCode == UtteranceLevelResults_HASH)
          {
            return TestResultTypeFilter::UtteranceLevelResults;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestResultTypeFilter>(hashCode);
          }

          return TestResultTypeFilter::NOT_SET;
        }

        Aws::String GetNameForTestResultTypeFilter(TestResultTypeFilter enumValue)
        {
          switch(enumValue)
          {
          case TestResultTypeFilter::NOT_SET:
            return {};
          case TestResultTypeFilter::OverallTestResults:
            return "OverallTestResults";
          case TestResultTypeFilter::ConversationLevelTestResults:
            return "ConversationLevelTestResults";
          case TestResultTypeFilter::IntentClassificationTestResults:
            return "IntentClassificationTestResults";
          case TestResultTypeFilter::SlotResolutionTestResults:
            return "SlotResolutionTestResults";
          case TestResultTypeFilter::UtteranceLevelResults:
            return "UtteranceLevelResults";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestResultTypeFilterMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
