/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace GameSessionPlacementStateMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
