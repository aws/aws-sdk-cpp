/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ConditionExecutionStatus.h>
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
      namespace ConditionExecutionStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Errored_HASH = HashingUtils::HashString("Errored");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Abandoned_HASH = HashingUtils::HashString("Abandoned");
        static const int Overridden_HASH = HashingUtils::HashString("Overridden");


        ConditionExecutionStatus GetConditionExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ConditionExecutionStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return ConditionExecutionStatus::Failed;
          }
          else if (hashCode == Errored_HASH)
          {
            return ConditionExecutionStatus::Errored;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return ConditionExecutionStatus::Succeeded;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return ConditionExecutionStatus::Cancelled;
          }
          else if (hashCode == Abandoned_HASH)
          {
            return ConditionExecutionStatus::Abandoned;
          }
          else if (hashCode == Overridden_HASH)
          {
            return ConditionExecutionStatus::Overridden;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConditionExecutionStatus>(hashCode);
          }

          return ConditionExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForConditionExecutionStatus(ConditionExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case ConditionExecutionStatus::NOT_SET:
            return {};
          case ConditionExecutionStatus::InProgress:
            return "InProgress";
          case ConditionExecutionStatus::Failed:
            return "Failed";
          case ConditionExecutionStatus::Errored:
            return "Errored";
          case ConditionExecutionStatus::Succeeded:
            return "Succeeded";
          case ConditionExecutionStatus::Cancelled:
            return "Cancelled";
          case ConditionExecutionStatus::Abandoned:
            return "Abandoned";
          case ConditionExecutionStatus::Overridden:
            return "Overridden";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionExecutionStatusMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
