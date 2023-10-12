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

        static constexpr uint32_t NEW__HASH = ConstExprHashingUtils::HashString("NEW");
        static constexpr uint32_t ACTIVATING_HASH = ConstExprHashingUtils::HashString("ACTIVATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETE_SCHEDULED_HASH = ConstExprHashingUtils::HashString("DELETE_SCHEDULED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        GameServerGroupStatus GetGameServerGroupStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case GameServerGroupStatus::NOT_SET:
            return {};
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
