/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ReplayState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvents
  {
    namespace Model
    {
      namespace ReplayStateMapper
      {

        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ReplayState GetReplayStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return ReplayState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ReplayState::RUNNING;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ReplayState::CANCELLING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReplayState::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ReplayState::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReplayState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplayState>(hashCode);
          }

          return ReplayState::NOT_SET;
        }

        Aws::String GetNameForReplayState(ReplayState enumValue)
        {
          switch(enumValue)
          {
          case ReplayState::NOT_SET:
            return {};
          case ReplayState::STARTING:
            return "STARTING";
          case ReplayState::RUNNING:
            return "RUNNING";
          case ReplayState::CANCELLING:
            return "CANCELLING";
          case ReplayState::COMPLETED:
            return "COMPLETED";
          case ReplayState::CANCELLED:
            return "CANCELLED";
          case ReplayState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplayStateMapper
    } // namespace Model
  } // namespace CloudWatchEvents
} // namespace Aws
