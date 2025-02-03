/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateQueueLimitAssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace UpdateQueueLimitAssociationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOP_LIMIT_USAGE_AND_COMPLETE_TASKS_HASH = HashingUtils::HashString("STOP_LIMIT_USAGE_AND_COMPLETE_TASKS");
        static const int STOP_LIMIT_USAGE_AND_CANCEL_TASKS_HASH = HashingUtils::HashString("STOP_LIMIT_USAGE_AND_CANCEL_TASKS");


        UpdateQueueLimitAssociationStatus GetUpdateQueueLimitAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return UpdateQueueLimitAssociationStatus::ACTIVE;
          }
          else if (hashCode == STOP_LIMIT_USAGE_AND_COMPLETE_TASKS_HASH)
          {
            return UpdateQueueLimitAssociationStatus::STOP_LIMIT_USAGE_AND_COMPLETE_TASKS;
          }
          else if (hashCode == STOP_LIMIT_USAGE_AND_CANCEL_TASKS_HASH)
          {
            return UpdateQueueLimitAssociationStatus::STOP_LIMIT_USAGE_AND_CANCEL_TASKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateQueueLimitAssociationStatus>(hashCode);
          }

          return UpdateQueueLimitAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForUpdateQueueLimitAssociationStatus(UpdateQueueLimitAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdateQueueLimitAssociationStatus::NOT_SET:
            return {};
          case UpdateQueueLimitAssociationStatus::ACTIVE:
            return "ACTIVE";
          case UpdateQueueLimitAssociationStatus::STOP_LIMIT_USAGE_AND_COMPLETE_TASKS:
            return "STOP_LIMIT_USAGE_AND_COMPLETE_TASKS";
          case UpdateQueueLimitAssociationStatus::STOP_LIMIT_USAGE_AND_CANCEL_TASKS:
            return "STOP_LIMIT_USAGE_AND_CANCEL_TASKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateQueueLimitAssociationStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
