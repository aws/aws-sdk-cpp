/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerClaimStatus.h>
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
      namespace GameServerClaimStatusMapper
      {

        static const int CLAIMED_HASH = HashingUtils::HashString("CLAIMED");


        GameServerClaimStatus GetGameServerClaimStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLAIMED_HASH)
          {
            return GameServerClaimStatus::CLAIMED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerClaimStatus>(hashCode);
          }

          return GameServerClaimStatus::NOT_SET;
        }

        Aws::String GetNameForGameServerClaimStatus(GameServerClaimStatus enumValue)
        {
          switch(enumValue)
          {
          case GameServerClaimStatus::CLAIMED:
            return "CLAIMED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerClaimStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
