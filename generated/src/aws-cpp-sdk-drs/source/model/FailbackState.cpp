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

        static const int FAILBACK_NOT_STARTED_HASH = HashingUtils::HashString("FAILBACK_NOT_STARTED");
        static const int FAILBACK_IN_PROGRESS_HASH = HashingUtils::HashString("FAILBACK_IN_PROGRESS");
        static const int FAILBACK_READY_FOR_LAUNCH_HASH = HashingUtils::HashString("FAILBACK_READY_FOR_LAUNCH");
        static const int FAILBACK_COMPLETED_HASH = HashingUtils::HashString("FAILBACK_COMPLETED");
        static const int FAILBACK_ERROR_HASH = HashingUtils::HashString("FAILBACK_ERROR");
        static const int FAILBACK_NOT_READY_FOR_LAUNCH_HASH = HashingUtils::HashString("FAILBACK_NOT_READY_FOR_LAUNCH");
        static const int FAILBACK_LAUNCH_STATE_NOT_AVAILABLE_HASH = HashingUtils::HashString("FAILBACK_LAUNCH_STATE_NOT_AVAILABLE");


        FailbackState GetFailbackStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
