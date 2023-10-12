/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerInstanceStatus.h>
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
      namespace GameServerInstanceStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DRAINING_HASH = ConstExprHashingUtils::HashString("DRAINING");
        static constexpr uint32_t SPOT_TERMINATING_HASH = ConstExprHashingUtils::HashString("SPOT_TERMINATING");


        GameServerInstanceStatus GetGameServerInstanceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return GameServerInstanceStatus::ACTIVE;
          }
          else if (hashCode == DRAINING_HASH)
          {
            return GameServerInstanceStatus::DRAINING;
          }
          else if (hashCode == SPOT_TERMINATING_HASH)
          {
            return GameServerInstanceStatus::SPOT_TERMINATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerInstanceStatus>(hashCode);
          }

          return GameServerInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForGameServerInstanceStatus(GameServerInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case GameServerInstanceStatus::NOT_SET:
            return {};
          case GameServerInstanceStatus::ACTIVE:
            return "ACTIVE";
          case GameServerInstanceStatus::DRAINING:
            return "DRAINING";
          case GameServerInstanceStatus::SPOT_TERMINATING:
            return "SPOT_TERMINATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerInstanceStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
