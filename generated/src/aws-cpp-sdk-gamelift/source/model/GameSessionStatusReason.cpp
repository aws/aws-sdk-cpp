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
        static const int TRIGGERED_ON_PROCESS_TERMINATE_HASH = HashingUtils::HashString("TRIGGERED_ON_PROCESS_TERMINATE");
        static const int FORCE_TERMINATED_HASH = HashingUtils::HashString("FORCE_TERMINATED");


        GameSessionStatusReason GetGameSessionStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERRUPTED_HASH)
          {
            return GameSessionStatusReason::INTERRUPTED;
          }
          else if (hashCode == TRIGGERED_ON_PROCESS_TERMINATE_HASH)
          {
            return GameSessionStatusReason::TRIGGERED_ON_PROCESS_TERMINATE;
          }
          else if (hashCode == FORCE_TERMINATED_HASH)
          {
            return GameSessionStatusReason::FORCE_TERMINATED;
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
          case GameSessionStatusReason::NOT_SET:
            return {};
          case GameSessionStatusReason::INTERRUPTED:
            return "INTERRUPTED";
          case GameSessionStatusReason::TRIGGERED_ON_PROCESS_TERMINATE:
            return "TRIGGERED_ON_PROCESS_TERMINATE";
          case GameSessionStatusReason::FORCE_TERMINATED:
            return "FORCE_TERMINATED";
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
