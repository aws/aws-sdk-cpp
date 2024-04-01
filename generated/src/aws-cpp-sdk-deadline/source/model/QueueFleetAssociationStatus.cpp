/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/QueueFleetAssociationStatus.h>
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
      namespace QueueFleetAssociationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOP_SCHEDULING_AND_COMPLETE_TASKS_HASH = HashingUtils::HashString("STOP_SCHEDULING_AND_COMPLETE_TASKS");
        static const int STOP_SCHEDULING_AND_CANCEL_TASKS_HASH = HashingUtils::HashString("STOP_SCHEDULING_AND_CANCEL_TASKS");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        QueueFleetAssociationStatus GetQueueFleetAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return QueueFleetAssociationStatus::ACTIVE;
          }
          else if (hashCode == STOP_SCHEDULING_AND_COMPLETE_TASKS_HASH)
          {
            return QueueFleetAssociationStatus::STOP_SCHEDULING_AND_COMPLETE_TASKS;
          }
          else if (hashCode == STOP_SCHEDULING_AND_CANCEL_TASKS_HASH)
          {
            return QueueFleetAssociationStatus::STOP_SCHEDULING_AND_CANCEL_TASKS;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return QueueFleetAssociationStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueFleetAssociationStatus>(hashCode);
          }

          return QueueFleetAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForQueueFleetAssociationStatus(QueueFleetAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case QueueFleetAssociationStatus::NOT_SET:
            return {};
          case QueueFleetAssociationStatus::ACTIVE:
            return "ACTIVE";
          case QueueFleetAssociationStatus::STOP_SCHEDULING_AND_COMPLETE_TASKS:
            return "STOP_SCHEDULING_AND_COMPLETE_TASKS";
          case QueueFleetAssociationStatus::STOP_SCHEDULING_AND_CANCEL_TASKS:
            return "STOP_SCHEDULING_AND_CANCEL_TASKS";
          case QueueFleetAssociationStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueFleetAssociationStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
