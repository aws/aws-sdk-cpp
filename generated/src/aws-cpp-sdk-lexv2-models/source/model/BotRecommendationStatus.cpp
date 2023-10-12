/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotRecommendationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace BotRecommendationStatusMapper
      {

        static constexpr uint32_t Processing_HASH = ConstExprHashingUtils::HashString("Processing");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");
        static constexpr uint32_t Downloading_HASH = ConstExprHashingUtils::HashString("Downloading");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t Available_HASH = ConstExprHashingUtils::HashString("Available");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        BotRecommendationStatus GetBotRecommendationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Processing_HASH)
          {
            return BotRecommendationStatus::Processing;
          }
          else if (hashCode == Deleting_HASH)
          {
            return BotRecommendationStatus::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return BotRecommendationStatus::Deleted;
          }
          else if (hashCode == Downloading_HASH)
          {
            return BotRecommendationStatus::Downloading;
          }
          else if (hashCode == Updating_HASH)
          {
            return BotRecommendationStatus::Updating;
          }
          else if (hashCode == Available_HASH)
          {
            return BotRecommendationStatus::Available;
          }
          else if (hashCode == Failed_HASH)
          {
            return BotRecommendationStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return BotRecommendationStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return BotRecommendationStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotRecommendationStatus>(hashCode);
          }

          return BotRecommendationStatus::NOT_SET;
        }

        Aws::String GetNameForBotRecommendationStatus(BotRecommendationStatus enumValue)
        {
          switch(enumValue)
          {
          case BotRecommendationStatus::NOT_SET:
            return {};
          case BotRecommendationStatus::Processing:
            return "Processing";
          case BotRecommendationStatus::Deleting:
            return "Deleting";
          case BotRecommendationStatus::Deleted:
            return "Deleted";
          case BotRecommendationStatus::Downloading:
            return "Downloading";
          case BotRecommendationStatus::Updating:
            return "Updating";
          case BotRecommendationStatus::Available:
            return "Available";
          case BotRecommendationStatus::Failed:
            return "Failed";
          case BotRecommendationStatus::Stopping:
            return "Stopping";
          case BotRecommendationStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotRecommendationStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
