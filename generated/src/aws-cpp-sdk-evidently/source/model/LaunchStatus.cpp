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

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        LaunchStatus GetLaunchStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
