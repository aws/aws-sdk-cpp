/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace LaunchStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int LAUNCHED_HASH = HashingUtils::HashString("LAUNCHED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");


        LaunchStatus GetLaunchStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return LaunchStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return LaunchStatus::IN_PROGRESS;
          }
          else if (hashCode == LAUNCHED_HASH)
          {
            return LaunchStatus::LAUNCHED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LaunchStatus::FAILED;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return LaunchStatus::TERMINATED;
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
          case LaunchStatus::PENDING:
            return "PENDING";
          case LaunchStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case LaunchStatus::LAUNCHED:
            return "LAUNCHED";
          case LaunchStatus::FAILED:
            return "FAILED";
          case LaunchStatus::TERMINATED:
            return "TERMINATED";
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
  } // namespace drs
} // namespace Aws
