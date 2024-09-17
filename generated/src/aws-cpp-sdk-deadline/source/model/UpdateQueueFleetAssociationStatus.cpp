/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateQueueFleetAssociationStatus.h>
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
      namespace UpdateQueueFleetAssociationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOP_SCHEDULING_AND_COMPLETE_TASKS_HASH = HashingUtils::HashString("STOP_SCHEDULING_AND_COMPLETE_TASKS");
        static const int STOP_SCHEDULING_AND_CANCEL_TASKS_HASH = HashingUtils::HashString("STOP_SCHEDULING_AND_CANCEL_TASKS");


        UpdateQueueFleetAssociationStatus GetUpdateQueueFleetAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return UpdateQueueFleetAssociationStatus::ACTIVE;
          }
          else if (hashCode == STOP_SCHEDULING_AND_COMPLETE_TASKS_HASH)
          {
            return UpdateQueueFleetAssociationStatus::STOP_SCHEDULING_AND_COMPLETE_TASKS;
          }
          else if (hashCode == STOP_SCHEDULING_AND_CANCEL_TASKS_HASH)
          {
            return UpdateQueueFleetAssociationStatus::STOP_SCHEDULING_AND_CANCEL_TASKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateQueueFleetAssociationStatus>(hashCode);
          }

          return UpdateQueueFleetAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForUpdateQueueFleetAssociationStatus(UpdateQueueFleetAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdateQueueFleetAssociationStatus::NOT_SET:
            return {};
          case UpdateQueueFleetAssociationStatus::ACTIVE:
            return "ACTIVE";
          case UpdateQueueFleetAssociationStatus::STOP_SCHEDULING_AND_COMPLETE_TASKS:
            return "STOP_SCHEDULING_AND_COMPLETE_TASKS";
          case UpdateQueueFleetAssociationStatus::STOP_SCHEDULING_AND_CANCEL_TASKS:
            return "STOP_SCHEDULING_AND_CANCEL_TASKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateQueueFleetAssociationStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
