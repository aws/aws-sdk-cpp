/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/RuleExecutionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace RuleExecutionModeMapper
      {

        static const int ALL_MATCHED_HASH = HashingUtils::HashString("ALL_MATCHED");
        static const int FIRST_MATCHED_HASH = HashingUtils::HashString("FIRST_MATCHED");


        RuleExecutionMode GetRuleExecutionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_MATCHED_HASH)
          {
            return RuleExecutionMode::ALL_MATCHED;
          }
          else if (hashCode == FIRST_MATCHED_HASH)
          {
            return RuleExecutionMode::FIRST_MATCHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleExecutionMode>(hashCode);
          }

          return RuleExecutionMode::NOT_SET;
        }

        Aws::String GetNameForRuleExecutionMode(RuleExecutionMode enumValue)
        {
          switch(enumValue)
          {
          case RuleExecutionMode::ALL_MATCHED:
            return "ALL_MATCHED";
          case RuleExecutionMode::FIRST_MATCHED:
            return "FIRST_MATCHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleExecutionModeMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
