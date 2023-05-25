/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerGroupAction.h>
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
      namespace GameServerGroupActionMapper
      {

        static const int REPLACE_INSTANCE_TYPES_HASH = HashingUtils::HashString("REPLACE_INSTANCE_TYPES");


        GameServerGroupAction GetGameServerGroupActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPLACE_INSTANCE_TYPES_HASH)
          {
            return GameServerGroupAction::REPLACE_INSTANCE_TYPES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerGroupAction>(hashCode);
          }

          return GameServerGroupAction::NOT_SET;
        }

        Aws::String GetNameForGameServerGroupAction(GameServerGroupAction enumValue)
        {
          switch(enumValue)
          {
          case GameServerGroupAction::REPLACE_INSTANCE_TYPES:
            return "REPLACE_INSTANCE_TYPES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerGroupActionMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
