/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/LaunchStopDesiredState.h>
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
      namespace LaunchStopDesiredStateMapper
      {

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        LaunchStopDesiredState GetLaunchStopDesiredStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return LaunchStopDesiredState::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return LaunchStopDesiredState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchStopDesiredState>(hashCode);
          }

          return LaunchStopDesiredState::NOT_SET;
        }

        Aws::String GetNameForLaunchStopDesiredState(LaunchStopDesiredState enumValue)
        {
          switch(enumValue)
          {
          case LaunchStopDesiredState::NOT_SET:
            return {};
          case LaunchStopDesiredState::COMPLETED:
            return "COMPLETED";
          case LaunchStopDesiredState::CANCELLED:
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

      } // namespace LaunchStopDesiredStateMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
