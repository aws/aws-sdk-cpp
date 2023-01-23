/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/PlayerSessionStatus.h>
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
      namespace PlayerSessionStatusMapper
      {

        static const int RESERVED_HASH = HashingUtils::HashString("RESERVED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int TIMEDOUT_HASH = HashingUtils::HashString("TIMEDOUT");


        PlayerSessionStatus GetPlayerSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESERVED_HASH)
          {
            return PlayerSessionStatus::RESERVED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return PlayerSessionStatus::ACTIVE;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return PlayerSessionStatus::COMPLETED;
          }
          else if (hashCode == TIMEDOUT_HASH)
          {
            return PlayerSessionStatus::TIMEDOUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlayerSessionStatus>(hashCode);
          }

          return PlayerSessionStatus::NOT_SET;
        }

        Aws::String GetNameForPlayerSessionStatus(PlayerSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case PlayerSessionStatus::RESERVED:
            return "RESERVED";
          case PlayerSessionStatus::ACTIVE:
            return "ACTIVE";
          case PlayerSessionStatus::COMPLETED:
            return "COMPLETED";
          case PlayerSessionStatus::TIMEDOUT:
            return "TIMEDOUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlayerSessionStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
