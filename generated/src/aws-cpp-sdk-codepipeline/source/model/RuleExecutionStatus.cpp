/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace RuleExecutionStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Abandoned_HASH = HashingUtils::HashString("Abandoned");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        RuleExecutionStatus GetRuleExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return RuleExecutionStatus::InProgress;
          }
          else if (hashCode == Abandoned_HASH)
          {
            return RuleExecutionStatus::Abandoned;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return RuleExecutionStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return RuleExecutionStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleExecutionStatus>(hashCode);
          }

          return RuleExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForRuleExecutionStatus(RuleExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case RuleExecutionStatus::NOT_SET:
            return {};
          case RuleExecutionStatus::InProgress:
            return "InProgress";
          case RuleExecutionStatus::Abandoned:
            return "Abandoned";
          case RuleExecutionStatus::Succeeded:
            return "Succeeded";
          case RuleExecutionStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleExecutionStatusMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
