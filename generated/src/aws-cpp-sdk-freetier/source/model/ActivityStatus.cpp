/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/ActivityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FreeTier
  {
    namespace Model
    {
      namespace ActivityStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int EXPIRING_HASH = HashingUtils::HashString("EXPIRING");


        ActivityStatus GetActivityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return ActivityStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ActivityStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ActivityStatus::COMPLETED;
          }
          else if (hashCode == EXPIRING_HASH)
          {
            return ActivityStatus::EXPIRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivityStatus>(hashCode);
          }

          return ActivityStatus::NOT_SET;
        }

        Aws::String GetNameForActivityStatus(ActivityStatus enumValue)
        {
          switch(enumValue)
          {
          case ActivityStatus::NOT_SET:
            return {};
          case ActivityStatus::NOT_STARTED:
            return "NOT_STARTED";
          case ActivityStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ActivityStatus::COMPLETED:
            return "COMPLETED";
          case ActivityStatus::EXPIRING:
            return "EXPIRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivityStatusMapper
    } // namespace Model
  } // namespace FreeTier
} // namespace Aws
