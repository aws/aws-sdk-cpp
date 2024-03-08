/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotAliasStatus.h>
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
      namespace BotAliasStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        BotAliasStatus GetBotAliasStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return BotAliasStatus::Creating;
          }
          else if (hashCode == Available_HASH)
          {
            return BotAliasStatus::Available;
          }
          else if (hashCode == Deleting_HASH)
          {
            return BotAliasStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return BotAliasStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotAliasStatus>(hashCode);
          }

          return BotAliasStatus::NOT_SET;
        }

        Aws::String GetNameForBotAliasStatus(BotAliasStatus enumValue)
        {
          switch(enumValue)
          {
          case BotAliasStatus::NOT_SET:
            return {};
          case BotAliasStatus::Creating:
            return "Creating";
          case BotAliasStatus::Available:
            return "Available";
          case BotAliasStatus::Deleting:
            return "Deleting";
          case BotAliasStatus::Failed:
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

      } // namespace BotAliasStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
