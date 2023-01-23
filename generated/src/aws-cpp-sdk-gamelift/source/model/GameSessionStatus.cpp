/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameSessionStatus.h>
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
      namespace GameSessionStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        GameSessionStatus GetGameSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return GameSessionStatus::ACTIVE;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return GameSessionStatus::ACTIVATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return GameSessionStatus::TERMINATED;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return GameSessionStatus::TERMINATING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return GameSessionStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameSessionStatus>(hashCode);
          }

          return GameSessionStatus::NOT_SET;
        }

        Aws::String GetNameForGameSessionStatus(GameSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case GameSessionStatus::ACTIVE:
            return "ACTIVE";
          case GameSessionStatus::ACTIVATING:
            return "ACTIVATING";
          case GameSessionStatus::TERMINATED:
            return "TERMINATED";
          case GameSessionStatus::TERMINATING:
            return "TERMINATING";
          case GameSessionStatus::ERROR_:
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

      } // namespace GameSessionStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
