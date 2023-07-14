/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameSessionStatusReason.h>
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
      namespace GameSessionStatusReasonMapper
      {

        static const int INTERRUPTED_HASH = HashingUtils::HashString("INTERRUPTED");


        GameSessionStatusReason GetGameSessionStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERRUPTED_HASH)
          {
            return GameSessionStatusReason::INTERRUPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameSessionStatusReason>(hashCode);
          }

          return GameSessionStatusReason::NOT_SET;
        }

        Aws::String GetNameForGameSessionStatusReason(GameSessionStatusReason enumValue)
        {
          switch(enumValue)
          {
          case GameSessionStatusReason::INTERRUPTED:
            return "INTERRUPTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameSessionStatusReasonMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
