/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotAliasReplicationStatus.h>
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
      namespace BotAliasReplicationStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        BotAliasReplicationStatus GetBotAliasReplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return BotAliasReplicationStatus::Creating;
          }
          else if (hashCode == Updating_HASH)
          {
            return BotAliasReplicationStatus::Updating;
          }
          else if (hashCode == Available_HASH)
          {
            return BotAliasReplicationStatus::Available;
          }
          else if (hashCode == Deleting_HASH)
          {
            return BotAliasReplicationStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return BotAliasReplicationStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotAliasReplicationStatus>(hashCode);
          }

          return BotAliasReplicationStatus::NOT_SET;
        }

        Aws::String GetNameForBotAliasReplicationStatus(BotAliasReplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case BotAliasReplicationStatus::NOT_SET:
            return {};
          case BotAliasReplicationStatus::Creating:
            return "Creating";
          case BotAliasReplicationStatus::Updating:
            return "Updating";
          case BotAliasReplicationStatus::Available:
            return "Available";
          case BotAliasReplicationStatus::Deleting:
            return "Deleting";
          case BotAliasReplicationStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotAliasReplicationStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
