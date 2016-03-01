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
#include <aws/gamelift/model/GameSessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");

namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace GameSessionStatusMapper
      {


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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace GameSessionStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
