/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ActivityStreamStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace ActivityStreamStatusMapper
      {

        static const int stopped_HASH = HashingUtils::HashString("stopped");
        static const int starting_HASH = HashingUtils::HashString("starting");
        static const int started_HASH = HashingUtils::HashString("started");
        static const int stopping_HASH = HashingUtils::HashString("stopping");


        ActivityStreamStatus GetActivityStreamStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == stopped_HASH)
          {
            return ActivityStreamStatus::stopped;
          }
          else if (hashCode == starting_HASH)
          {
            return ActivityStreamStatus::starting;
          }
          else if (hashCode == started_HASH)
          {
            return ActivityStreamStatus::started;
          }
          else if (hashCode == stopping_HASH)
          {
            return ActivityStreamStatus::stopping;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivityStreamStatus>(hashCode);
          }

          return ActivityStreamStatus::NOT_SET;
        }

        Aws::String GetNameForActivityStreamStatus(ActivityStreamStatus enumValue)
        {
          switch(enumValue)
          {
          case ActivityStreamStatus::stopped:
            return "stopped";
          case ActivityStreamStatus::starting:
            return "starting";
          case ActivityStreamStatus::started:
            return "started";
          case ActivityStreamStatus::stopping:
            return "stopping";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivityStreamStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
