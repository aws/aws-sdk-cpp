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

        static constexpr uint32_t HEALTHY_HASH = ConstExprHashingUtils::HashString("HEALTHY");


        GameServerHealthCheck GetGameServerHealthCheckForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case GameServerHealthCheck::NOT_SET:
            return {};
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
