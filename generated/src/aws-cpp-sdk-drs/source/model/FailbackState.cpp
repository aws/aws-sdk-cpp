/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/FailbackState.h>
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
      namespace FailbackStateMapper
      {

        static constexpr uint32_t FAILBACK_NOT_STARTED_HASH = ConstExprHashingUtils::HashString("FAILBACK_NOT_STARTED");
        static constexpr uint32_t FAILBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("FAILBACK_IN_PROGRESS");
        static constexpr uint32_t FAILBACK_READY_FOR_LAUNCH_HASH = ConstExprHashingUtils::HashString("FAILBACK_READY_FOR_LAUNCH");
        static constexpr uint32_t FAILBACK_COMPLETED_HASH = ConstExprHashingUtils::HashString("FAILBACK_COMPLETED");
        static constexpr uint32_t FAILBACK_ERROR_HASH = ConstExprHashingUtils::HashString("FAILBACK_ERROR");
        static constexpr uint32_t FAILBACK_NOT_READY_FOR_LAUNCH_HASH = ConstExprHashingUtils::HashString("FAILBACK_NOT_READY_FOR_LAUNCH");
        static constexpr uint32_t FAILBACK_LAUNCH_STATE_NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("FAILBACK_LAUNCH_STATE_NOT_AVAILABLE");


        FailbackState GetFailbackStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILBACK_NOT_STARTED_HASH)
          {
            return FailbackState::FAILBACK_NOT_STARTED;
          }
          else if (hashCode == FAILBACK_IN_PROGRESS_HASH)
          {
            return FailbackState::FAILBACK_IN_PROGRESS;
          }
          else if (hashCode == FAILBACK_READY_FOR_LAUNCH_HASH)
          {
            return FailbackState::FAILBACK_READY_FOR_LAUNCH;
          }
          else if (hashCode == FAILBACK_COMPLETED_HASH)
          {
            return FailbackState::FAILBACK_COMPLETED;
          }
          else if (hashCode == FAILBACK_ERROR_HASH)
          {
            return FailbackState::FAILBACK_ERROR;
          }
          else if (hashCode == FAILBACK_NOT_READY_FOR_LAUNCH_HASH)
          {
            return FailbackState::FAILBACK_NOT_READY_FOR_LAUNCH;
          }
          else if (hashCode == FAILBACK_LAUNCH_STATE_NOT_AVAILABLE_HASH)
          {
            return FailbackState::FAILBACK_LAUNCH_STATE_NOT_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailbackState>(hashCode);
          }

          return FailbackState::NOT_SET;
        }

        Aws::String GetNameForFailbackState(FailbackState enumValue)
        {
          switch(enumValue)
          {
          case FailbackState::NOT_SET:
            return {};
          case FailbackState::FAILBACK_NOT_STARTED:
            return "FAILBACK_NOT_STARTED";
          case FailbackState::FAILBACK_IN_PROGRESS:
            return "FAILBACK_IN_PROGRESS";
          case FailbackState::FAILBACK_READY_FOR_LAUNCH:
            return "FAILBACK_READY_FOR_LAUNCH";
          case FailbackState::FAILBACK_COMPLETED:
            return "FAILBACK_COMPLETED";
          case FailbackState::FAILBACK_ERROR:
            return "FAILBACK_ERROR";
          case FailbackState::FAILBACK_NOT_READY_FOR_LAUNCH:
            return "FAILBACK_NOT_READY_FOR_LAUNCH";
          case FailbackState::FAILBACK_LAUNCH_STATE_NOT_AVAILABLE:
            return "FAILBACK_LAUNCH_STATE_NOT_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailbackStateMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
