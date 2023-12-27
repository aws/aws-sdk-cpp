/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReplaceRootVolumeTaskState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ReplaceRootVolumeTaskStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int in_progress_HASH = HashingUtils::HashString("in-progress");
        static const int failing_HASH = HashingUtils::HashString("failing");
        static const int succeeded_HASH = HashingUtils::HashString("succeeded");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int failed_detached_HASH = HashingUtils::HashString("failed-detached");


        ReplaceRootVolumeTaskState GetReplaceRootVolumeTaskStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return ReplaceRootVolumeTaskState::pending;
          }
          else if (hashCode == in_progress_HASH)
          {
            return ReplaceRootVolumeTaskState::in_progress;
          }
          else if (hashCode == failing_HASH)
          {
            return ReplaceRootVolumeTaskState::failing;
          }
          else if (hashCode == succeeded_HASH)
          {
            return ReplaceRootVolumeTaskState::succeeded;
          }
          else if (hashCode == failed_HASH)
          {
            return ReplaceRootVolumeTaskState::failed;
          }
          else if (hashCode == failed_detached_HASH)
          {
            return ReplaceRootVolumeTaskState::failed_detached;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplaceRootVolumeTaskState>(hashCode);
          }

          return ReplaceRootVolumeTaskState::NOT_SET;
        }

        Aws::String GetNameForReplaceRootVolumeTaskState(ReplaceRootVolumeTaskState enumValue)
        {
          switch(enumValue)
          {
          case ReplaceRootVolumeTaskState::NOT_SET:
            return {};
          case ReplaceRootVolumeTaskState::pending:
            return "pending";
          case ReplaceRootVolumeTaskState::in_progress:
            return "in-progress";
          case ReplaceRootVolumeTaskState::failing:
            return "failing";
          case ReplaceRootVolumeTaskState::succeeded:
            return "succeeded";
          case ReplaceRootVolumeTaskState::failed:
            return "failed";
          case ReplaceRootVolumeTaskState::failed_detached:
            return "failed-detached";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplaceRootVolumeTaskStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
