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

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Available_HASH = ConstExprHashingUtils::HashString("Available");
        static constexpr uint32_t Inactive_HASH = ConstExprHashingUtils::HashString("Inactive");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Versioning_HASH = ConstExprHashingUtils::HashString("Versioning");
        static constexpr uint32_t Importing_HASH = ConstExprHashingUtils::HashString("Importing");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");


        BotStatus GetBotStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
