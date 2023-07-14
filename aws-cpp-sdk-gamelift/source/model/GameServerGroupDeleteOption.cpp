/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerGroupDeleteOption.h>
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
      namespace GameServerGroupDeleteOptionMapper
      {

        static const int SAFE_DELETE_HASH = HashingUtils::HashString("SAFE_DELETE");
        static const int FORCE_DELETE_HASH = HashingUtils::HashString("FORCE_DELETE");
        static const int RETAIN_HASH = HashingUtils::HashString("RETAIN");


        GameServerGroupDeleteOption GetGameServerGroupDeleteOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAFE_DELETE_HASH)
          {
            return GameServerGroupDeleteOption::SAFE_DELETE;
          }
          else if (hashCode == FORCE_DELETE_HASH)
          {
            return GameServerGroupDeleteOption::FORCE_DELETE;
          }
          else if (hashCode == RETAIN_HASH)
          {
            return GameServerGroupDeleteOption::RETAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerGroupDeleteOption>(hashCode);
          }

          return GameServerGroupDeleteOption::NOT_SET;
        }

        Aws::String GetNameForGameServerGroupDeleteOption(GameServerGroupDeleteOption enumValue)
        {
          switch(enumValue)
          {
          case GameServerGroupDeleteOption::SAFE_DELETE:
            return "SAFE_DELETE";
          case GameServerGroupDeleteOption::FORCE_DELETE:
            return "FORCE_DELETE";
          case GameServerGroupDeleteOption::RETAIN:
            return "RETAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerGroupDeleteOptionMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
