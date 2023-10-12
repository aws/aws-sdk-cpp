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

        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t PLACING_HASH = ConstExprHashingUtils::HashString("PLACING");
        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t REQUIRES_ACCEPTANCE_HASH = ConstExprHashingUtils::HashString("REQUIRES_ACCEPTANCE");
        static constexpr uint32_t SEARCHING_HASH = ConstExprHashingUtils::HashString("SEARCHING");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");


        MatchmakingConfigurationStatus GetMatchmakingConfigurationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case MatchmakingConfigurationStatus::NOT_SET:
            return {};
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
