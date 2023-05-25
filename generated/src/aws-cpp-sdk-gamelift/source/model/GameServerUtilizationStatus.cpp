/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerUtilizationStatus.h>
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
      namespace GameServerUtilizationStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UTILIZED_HASH = HashingUtils::HashString("UTILIZED");


        GameServerUtilizationStatus GetGameServerUtilizationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return GameServerUtilizationStatus::AVAILABLE;
          }
          else if (hashCode == UTILIZED_HASH)
          {
            return GameServerUtilizationStatus::UTILIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerUtilizationStatus>(hashCode);
          }

          return GameServerUtilizationStatus::NOT_SET;
        }

        Aws::String GetNameForGameServerUtilizationStatus(GameServerUtilizationStatus enumValue)
        {
          switch(enumValue)
          {
          case GameServerUtilizationStatus::AVAILABLE:
            return "AVAILABLE";
          case GameServerUtilizationStatus::UTILIZED:
            return "UTILIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerUtilizationStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
