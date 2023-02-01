/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameSessionPlacementState.h>
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
      namespace GameSessionPlacementStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FULFILLED_HASH = HashingUtils::HashString("FULFILLED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        GameSessionPlacementState GetGameSessionPlacementStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return GameSessionPlacementState::PENDING;
          }
          else if (hashCode == FULFILLED_HASH)
          {
            return GameSessionPlacementState::FULFILLED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return GameSessionPlacementState::CANCELLED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return GameSessionPlacementState::TIMED_OUT;
          }
          else if (hashCode == FAILED_HASH)
          {
            return GameSessionPlacementState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameSessionPlacementState>(hashCode);
          }

          return GameSessionPlacementState::NOT_SET;
        }

        Aws::String GetNameForGameSessionPlacementState(GameSessionPlacementState enumValue)
        {
          switch(enumValue)
          {
          case GameSessionPlacementState::PENDING:
            return "PENDING";
          case GameSessionPlacementState::FULFILLED:
            return "FULFILLED";
          case GameSessionPlacementState::CANCELLED:
            return "CANCELLED";
          case GameSessionPlacementState::TIMED_OUT:
            return "TIMED_OUT";
          case GameSessionPlacementState::FAILED:
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

      } // namespace GameSessionPlacementStateMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
