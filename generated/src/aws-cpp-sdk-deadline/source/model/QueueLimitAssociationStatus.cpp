/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/QueueLimitAssociationStatus.h>
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
      namespace QueueLimitAssociationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOP_LIMIT_USAGE_AND_COMPLETE_TASKS_HASH = HashingUtils::HashString("STOP_LIMIT_USAGE_AND_COMPLETE_TASKS");
        static const int STOP_LIMIT_USAGE_AND_CANCEL_TASKS_HASH = HashingUtils::HashString("STOP_LIMIT_USAGE_AND_CANCEL_TASKS");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        QueueLimitAssociationStatus GetQueueLimitAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return QueueLimitAssociationStatus::ACTIVE;
          }
          else if (hashCode == STOP_LIMIT_USAGE_AND_COMPLETE_TASKS_HASH)
          {
            return QueueLimitAssociationStatus::STOP_LIMIT_USAGE_AND_COMPLETE_TASKS;
          }
          else if (hashCode == STOP_LIMIT_USAGE_AND_CANCEL_TASKS_HASH)
          {
            return QueueLimitAssociationStatus::STOP_LIMIT_USAGE_AND_CANCEL_TASKS;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return QueueLimitAssociationStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueLimitAssociationStatus>(hashCode);
          }

          return QueueLimitAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForQueueLimitAssociationStatus(QueueLimitAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case QueueLimitAssociationStatus::NOT_SET:
            return {};
          case QueueLimitAssociationStatus::ACTIVE:
            return "ACTIVE";
          case QueueLimitAssociationStatus::STOP_LIMIT_USAGE_AND_COMPLETE_TASKS:
            return "STOP_LIMIT_USAGE_AND_COMPLETE_TASKS";
          case QueueLimitAssociationStatus::STOP_LIMIT_USAGE_AND_CANCEL_TASKS:
            return "STOP_LIMIT_USAGE_AND_CANCEL_TASKS";
          case QueueLimitAssociationStatus::STOPPED:
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

      } // namespace QueueLimitAssociationStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
