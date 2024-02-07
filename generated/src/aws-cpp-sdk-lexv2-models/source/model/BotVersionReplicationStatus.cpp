/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotVersionReplicationStatus.h>
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
      namespace BotVersionReplicationStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        BotVersionReplicationStatus GetBotVersionReplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return BotVersionReplicationStatus::Creating;
          }
          else if (hashCode == Available_HASH)
          {
            return BotVersionReplicationStatus::Available;
          }
          else if (hashCode == Deleting_HASH)
          {
            return BotVersionReplicationStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return BotVersionReplicationStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotVersionReplicationStatus>(hashCode);
          }

          return BotVersionReplicationStatus::NOT_SET;
        }

        Aws::String GetNameForBotVersionReplicationStatus(BotVersionReplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case BotVersionReplicationStatus::NOT_SET:
            return {};
          case BotVersionReplicationStatus::Creating:
            return "Creating";
          case BotVersionReplicationStatus::Available:
            return "Available";
          case BotVersionReplicationStatus::Deleting:
            return "Deleting";
          case BotVersionReplicationStatus::Failed:
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

      } // namespace BotVersionReplicationStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
