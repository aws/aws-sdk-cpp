/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/QueueStatus.h>
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
      namespace QueueStatusMapper
      {

        static const int IDLE_HASH = HashingUtils::HashString("IDLE");
        static const int SCHEDULING_HASH = HashingUtils::HashString("SCHEDULING");
        static const int SCHEDULING_BLOCKED_HASH = HashingUtils::HashString("SCHEDULING_BLOCKED");


        QueueStatus GetQueueStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDLE_HASH)
          {
            return QueueStatus::IDLE;
          }
          else if (hashCode == SCHEDULING_HASH)
          {
            return QueueStatus::SCHEDULING;
          }
          else if (hashCode == SCHEDULING_BLOCKED_HASH)
          {
            return QueueStatus::SCHEDULING_BLOCKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueStatus>(hashCode);
          }

          return QueueStatus::NOT_SET;
        }

        Aws::String GetNameForQueueStatus(QueueStatus enumValue)
        {
          switch(enumValue)
          {
          case QueueStatus::NOT_SET:
            return {};
          case QueueStatus::IDLE:
            return "IDLE";
          case QueueStatus::SCHEDULING:
            return "SCHEDULING";
          case QueueStatus::SCHEDULING_BLOCKED:
            return "SCHEDULING_BLOCKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
