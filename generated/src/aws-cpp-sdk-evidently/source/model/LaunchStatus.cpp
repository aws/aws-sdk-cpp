/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/LaunchStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace LaunchStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        LaunchStatus GetLaunchStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return LaunchStatus::CREATED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return LaunchStatus::UPDATING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return LaunchStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return LaunchStatus::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return LaunchStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchStatus>(hashCode);
          }

          return LaunchStatus::NOT_SET;
        }

        Aws::String GetNameForLaunchStatus(LaunchStatus enumValue)
        {
          switch(enumValue)
          {
          case LaunchStatus::NOT_SET:
            return {};
          case LaunchStatus::CREATED:
            return "CREATED";
          case LaunchStatus::UPDATING:
            return "UPDATING";
          case LaunchStatus::RUNNING:
            return "RUNNING";
          case LaunchStatus::COMPLETED:
            return "COMPLETED";
          case LaunchStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchStatusMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
