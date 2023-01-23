/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerHealthCheck.h>
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
      namespace GameServerHealthCheckMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");


        GameServerHealthCheck GetGameServerHealthCheckForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return GameServerHealthCheck::HEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerHealthCheck>(hashCode);
          }

          return GameServerHealthCheck::NOT_SET;
        }

        Aws::String GetNameForGameServerHealthCheck(GameServerHealthCheck enumValue)
        {
          switch(enumValue)
          {
          case GameServerHealthCheck::HEALTHY:
            return "HEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerHealthCheckMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
