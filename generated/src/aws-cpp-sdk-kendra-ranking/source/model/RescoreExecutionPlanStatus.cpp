/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/model/RescoreExecutionPlanStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KendraRanking
  {
    namespace Model
    {
      namespace RescoreExecutionPlanStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RescoreExecutionPlanStatus GetRescoreExecutionPlanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return RescoreExecutionPlanStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return RescoreExecutionPlanStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return RescoreExecutionPlanStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return RescoreExecutionPlanStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RescoreExecutionPlanStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RescoreExecutionPlanStatus>(hashCode);
          }

          return RescoreExecutionPlanStatus::NOT_SET;
        }

        Aws::String GetNameForRescoreExecutionPlanStatus(RescoreExecutionPlanStatus enumValue)
        {
          switch(enumValue)
          {
          case RescoreExecutionPlanStatus::NOT_SET:
            return {};
          case RescoreExecutionPlanStatus::CREATING:
            return "CREATING";
          case RescoreExecutionPlanStatus::UPDATING:
            return "UPDATING";
          case RescoreExecutionPlanStatus::ACTIVE:
            return "ACTIVE";
          case RescoreExecutionPlanStatus::DELETING:
            return "DELETING";
          case RescoreExecutionPlanStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RescoreExecutionPlanStatusMapper
    } // namespace Model
  } // namespace KendraRanking
} // namespace Aws
