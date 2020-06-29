/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerGroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace GameServerGroupStatusMapper
      {

        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETE_SCHEDULED_HASH = HashingUtils::HashString("DELETE_SCHEDULED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        GameServerGroupStatus GetGameServerGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW__HASH)
          {
            return GameServerGroupStatus::NEW_;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return GameServerGroupStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return GameServerGroupStatus::ACTIVE;
          }
          else if (hashCode == DELETE_SCHEDULED_HASH)
          {
            return GameServerGroupStatus::DELETE_SCHEDULED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GameServerGroupStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return GameServerGroupStatus::DELETED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return GameServerGroupStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerGroupStatus>(hashCode);
          }

          return GameServerGroupStatus::NOT_SET;
        }

        Aws::String GetNameForGameServerGroupStatus(GameServerGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case GameServerGroupStatus::NEW_:
            return "NEW";
          case GameServerGroupStatus::ACTIVATING:
            return "ACTIVATING";
          case GameServerGroupStatus::ACTIVE:
            return "ACTIVE";
          case GameServerGroupStatus::DELETE_SCHEDULED:
            return "DELETE_SCHEDULED";
          case GameServerGroupStatus::DELETING:
            return "DELETING";
          case GameServerGroupStatus::DELETED:
            return "DELETED";
          case GameServerGroupStatus::ERROR_:
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

      } // namespace GameServerGroupStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
