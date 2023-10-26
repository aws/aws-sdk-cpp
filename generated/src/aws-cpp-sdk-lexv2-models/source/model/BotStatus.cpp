/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotStatus.h>
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
      namespace BotStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Versioning_HASH = HashingUtils::HashString("Versioning");
        static const int Importing_HASH = HashingUtils::HashString("Importing");
        static const int Updating_HASH = HashingUtils::HashString("Updating");


        BotStatus GetBotStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return BotStatus::Creating;
          }
          else if (hashCode == Available_HASH)
          {
            return BotStatus::Available;
          }
          else if (hashCode == Inactive_HASH)
          {
            return BotStatus::Inactive;
          }
          else if (hashCode == Deleting_HASH)
          {
            return BotStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return BotStatus::Failed;
          }
          else if (hashCode == Versioning_HASH)
          {
            return BotStatus::Versioning;
          }
          else if (hashCode == Importing_HASH)
          {
            return BotStatus::Importing;
          }
          else if (hashCode == Updating_HASH)
          {
            return BotStatus::Updating;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotStatus>(hashCode);
          }

          return BotStatus::NOT_SET;
        }

        Aws::String GetNameForBotStatus(BotStatus enumValue)
        {
          switch(enumValue)
          {
          case BotStatus::NOT_SET:
            return {};
          case BotStatus::Creating:
            return "Creating";
          case BotStatus::Available:
            return "Available";
          case BotStatus::Inactive:
            return "Inactive";
          case BotStatus::Deleting:
            return "Deleting";
          case BotStatus::Failed:
            return "Failed";
          case BotStatus::Versioning:
            return "Versioning";
          case BotStatus::Importing:
            return "Importing";
          case BotStatus::Updating:
            return "Updating";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
