/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
