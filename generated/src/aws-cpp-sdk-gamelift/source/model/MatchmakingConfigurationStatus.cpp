/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/MatchmakingConfigurationStatus.h>
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
      namespace MatchmakingConfigurationStatusMapper
      {

        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PLACING_HASH = HashingUtils::HashString("PLACING");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int REQUIRES_ACCEPTANCE_HASH = HashingUtils::HashString("REQUIRES_ACCEPTANCE");
        static const int SEARCHING_HASH = HashingUtils::HashString("SEARCHING");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        MatchmakingConfigurationStatus GetMatchmakingConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCELLED_HASH)
          {
            return MatchmakingConfigurationStatus::CANCELLED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return MatchmakingConfigurationStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MatchmakingConfigurationStatus::FAILED;
          }
          else if (hashCode == PLACING_HASH)
          {
            return MatchmakingConfigurationStatus::PLACING;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return MatchmakingConfigurationStatus::QUEUED;
          }
          else if (hashCode == REQUIRES_ACCEPTANCE_HASH)
          {
            return MatchmakingConfigurationStatus::REQUIRES_ACCEPTANCE;
          }
          else if (hashCode == SEARCHING_HASH)
          {
            return MatchmakingConfigurationStatus::SEARCHING;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return MatchmakingConfigurationStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MatchmakingConfigurationStatus>(hashCode);
          }

          return MatchmakingConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForMatchmakingConfigurationStatus(MatchmakingConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case MatchmakingConfigurationStatus::CANCELLED:
            return "CANCELLED";
          case MatchmakingConfigurationStatus::COMPLETED:
            return "COMPLETED";
          case MatchmakingConfigurationStatus::FAILED:
            return "FAILED";
          case MatchmakingConfigurationStatus::PLACING:
            return "PLACING";
          case MatchmakingConfigurationStatus::QUEUED:
            return "QUEUED";
          case MatchmakingConfigurationStatus::REQUIRES_ACCEPTANCE:
            return "REQUIRES_ACCEPTANCE";
          case MatchmakingConfigurationStatus::SEARCHING:
            return "SEARCHING";
          case MatchmakingConfigurationStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MatchmakingConfigurationStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
