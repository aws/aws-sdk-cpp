/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/DestinationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace DestinationStateMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int RECONNECTING_HASH = HashingUtils::HashString("RECONNECTING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        DestinationState GetDestinationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return DestinationState::STARTING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DestinationState::ACTIVE;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return DestinationState::STOPPING;
          }
          else if (hashCode == RECONNECTING_HASH)
          {
            return DestinationState::RECONNECTING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DestinationState::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DestinationState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationState>(hashCode);
          }

          return DestinationState::NOT_SET;
        }

        Aws::String GetNameForDestinationState(DestinationState enumValue)
        {
          switch(enumValue)
          {
          case DestinationState::NOT_SET:
            return {};
          case DestinationState::STARTING:
            return "STARTING";
          case DestinationState::ACTIVE:
            return "ACTIVE";
          case DestinationState::STOPPING:
            return "STOPPING";
          case DestinationState::RECONNECTING:
            return "RECONNECTING";
          case DestinationState::FAILED:
            return "FAILED";
          case DestinationState::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationStateMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
