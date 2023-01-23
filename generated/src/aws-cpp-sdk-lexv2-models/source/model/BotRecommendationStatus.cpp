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

        static const int Processing_HASH = HashingUtils::HashString("Processing");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");
        static const int Downloading_HASH = HashingUtils::HashString("Downloading");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        BotRecommendationStatus GetBotRecommendationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
