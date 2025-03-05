/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StreamSessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLiftStreams
  {
    namespace Model
    {
      namespace StreamSessionStatusMapper
      {

        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int PENDING_CLIENT_RECONNECTION_HASH = HashingUtils::HashString("PENDING_CLIENT_RECONNECTION");
        static const int RECONNECTING_HASH = HashingUtils::HashString("RECONNECTING");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        StreamSessionStatus GetStreamSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATING_HASH)
          {
            return StreamSessionStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return StreamSessionStatus::ACTIVE;
          }
          else if (hashCode == CONNECTED_HASH)
          {
            return StreamSessionStatus::CONNECTED;
          }
          else if (hashCode == PENDING_CLIENT_RECONNECTION_HASH)
          {
            return StreamSessionStatus::PENDING_CLIENT_RECONNECTION;
          }
          else if (hashCode == RECONNECTING_HASH)
          {
            return StreamSessionStatus::RECONNECTING;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return StreamSessionStatus::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return StreamSessionStatus::TERMINATED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return StreamSessionStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamSessionStatus>(hashCode);
          }

          return StreamSessionStatus::NOT_SET;
        }

        Aws::String GetNameForStreamSessionStatus(StreamSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamSessionStatus::NOT_SET:
            return {};
          case StreamSessionStatus::ACTIVATING:
            return "ACTIVATING";
          case StreamSessionStatus::ACTIVE:
            return "ACTIVE";
          case StreamSessionStatus::CONNECTED:
            return "CONNECTED";
          case StreamSessionStatus::PENDING_CLIENT_RECONNECTION:
            return "PENDING_CLIENT_RECONNECTION";
          case StreamSessionStatus::RECONNECTING:
            return "RECONNECTING";
          case StreamSessionStatus::TERMINATING:
            return "TERMINATING";
          case StreamSessionStatus::TERMINATED:
            return "TERMINATED";
          case StreamSessionStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamSessionStatusMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws
