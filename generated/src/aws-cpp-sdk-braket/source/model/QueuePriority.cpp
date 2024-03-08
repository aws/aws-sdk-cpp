/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/QueuePriority.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace QueuePriorityMapper
      {

        static const int Normal_HASH = HashingUtils::HashString("Normal");
        static const int Priority_HASH = HashingUtils::HashString("Priority");


        QueuePriority GetQueuePriorityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Normal_HASH)
          {
            return QueuePriority::Normal;
          }
          else if (hashCode == Priority_HASH)
          {
            return QueuePriority::Priority;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueuePriority>(hashCode);
          }

          return QueuePriority::NOT_SET;
        }

        Aws::String GetNameForQueuePriority(QueuePriority enumValue)
        {
          switch(enumValue)
          {
          case QueuePriority::NOT_SET:
            return {};
          case QueuePriority::Normal:
            return "Normal";
          case QueuePriority::Priority:
            return "Priority";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueuePriorityMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
