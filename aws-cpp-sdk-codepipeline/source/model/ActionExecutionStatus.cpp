/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionExecutionStatus.h>
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
      namespace ActionExecutionStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Abandoned_HASH = HashingUtils::HashString("Abandoned");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ActionExecutionStatus GetActionExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ActionExecutionStatus::InProgress;
          }
          else if (hashCode == Abandoned_HASH)
          {
            return ActionExecutionStatus::Abandoned;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return ActionExecutionStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return ActionExecutionStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionExecutionStatus>(hashCode);
          }

          return ActionExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForActionExecutionStatus(ActionExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case ActionExecutionStatus::InProgress:
            return "InProgress";
          case ActionExecutionStatus::Abandoned:
            return "Abandoned";
          case ActionExecutionStatus::Succeeded:
            return "Succeeded";
          case ActionExecutionStatus::Failed:
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

      } // namespace ActionExecutionStatusMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
