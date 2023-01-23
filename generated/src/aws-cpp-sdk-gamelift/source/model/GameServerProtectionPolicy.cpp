/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerProtectionPolicy.h>
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
      namespace GameServerProtectionPolicyMapper
      {

        static const int NO_PROTECTION_HASH = HashingUtils::HashString("NO_PROTECTION");
        static const int FULL_PROTECTION_HASH = HashingUtils::HashString("FULL_PROTECTION");


        GameServerProtectionPolicy GetGameServerProtectionPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PROTECTION_HASH)
          {
            return GameServerProtectionPolicy::NO_PROTECTION;
          }
          else if (hashCode == FULL_PROTECTION_HASH)
          {
            return GameServerProtectionPolicy::FULL_PROTECTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerProtectionPolicy>(hashCode);
          }

          return GameServerProtectionPolicy::NOT_SET;
        }

        Aws::String GetNameForGameServerProtectionPolicy(GameServerProtectionPolicy enumValue)
        {
          switch(enumValue)
          {
          case GameServerProtectionPolicy::NO_PROTECTION:
            return "NO_PROTECTION";
          case GameServerProtectionPolicy::FULL_PROTECTION:
            return "FULL_PROTECTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerProtectionPolicyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
