/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/QueueBlockedReason.h>
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
      namespace QueueBlockedReasonMapper
      {

        static const int NO_BUDGET_CONFIGURED_HASH = HashingUtils::HashString("NO_BUDGET_CONFIGURED");
        static const int BUDGET_THRESHOLD_REACHED_HASH = HashingUtils::HashString("BUDGET_THRESHOLD_REACHED");


        QueueBlockedReason GetQueueBlockedReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_BUDGET_CONFIGURED_HASH)
          {
            return QueueBlockedReason::NO_BUDGET_CONFIGURED;
          }
          else if (hashCode == BUDGET_THRESHOLD_REACHED_HASH)
          {
            return QueueBlockedReason::BUDGET_THRESHOLD_REACHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueBlockedReason>(hashCode);
          }

          return QueueBlockedReason::NOT_SET;
        }

        Aws::String GetNameForQueueBlockedReason(QueueBlockedReason enumValue)
        {
          switch(enumValue)
          {
          case QueueBlockedReason::NOT_SET:
            return {};
          case QueueBlockedReason::NO_BUDGET_CONFIGURED:
            return "NO_BUDGET_CONFIGURED";
          case QueueBlockedReason::BUDGET_THRESHOLD_REACHED:
            return "BUDGET_THRESHOLD_REACHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueBlockedReasonMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
