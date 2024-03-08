/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotLocaleStatus.h>
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
      namespace BotLocaleStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Building_HASH = HashingUtils::HashString("Building");
        static const int Built_HASH = HashingUtils::HashString("Built");
        static const int ReadyExpressTesting_HASH = HashingUtils::HashString("ReadyExpressTesting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int NotBuilt_HASH = HashingUtils::HashString("NotBuilt");
        static const int Importing_HASH = HashingUtils::HashString("Importing");
        static const int Processing_HASH = HashingUtils::HashString("Processing");


        BotLocaleStatus GetBotLocaleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return BotLocaleStatus::Creating;
          }
          else if (hashCode == Building_HASH)
          {
            return BotLocaleStatus::Building;
          }
          else if (hashCode == Built_HASH)
          {
            return BotLocaleStatus::Built;
          }
          else if (hashCode == ReadyExpressTesting_HASH)
          {
            return BotLocaleStatus::ReadyExpressTesting;
          }
          else if (hashCode == Failed_HASH)
          {
            return BotLocaleStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return BotLocaleStatus::Deleting;
          }
          else if (hashCode == NotBuilt_HASH)
          {
            return BotLocaleStatus::NotBuilt;
          }
          else if (hashCode == Importing_HASH)
          {
            return BotLocaleStatus::Importing;
          }
          else if (hashCode == Processing_HASH)
          {
            return BotLocaleStatus::Processing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotLocaleStatus>(hashCode);
          }

          return BotLocaleStatus::NOT_SET;
        }

        Aws::String GetNameForBotLocaleStatus(BotLocaleStatus enumValue)
        {
          switch(enumValue)
          {
          case BotLocaleStatus::NOT_SET:
            return {};
          case BotLocaleStatus::Creating:
            return "Creating";
          case BotLocaleStatus::Building:
            return "Building";
          case BotLocaleStatus::Built:
            return "Built";
          case BotLocaleStatus::ReadyExpressTesting:
            return "ReadyExpressTesting";
          case BotLocaleStatus::Failed:
            return "Failed";
          case BotLocaleStatus::Deleting:
            return "Deleting";
          case BotLocaleStatus::NotBuilt:
            return "NotBuilt";
          case BotLocaleStatus::Importing:
            return "Importing";
          case BotLocaleStatus::Processing:
            return "Processing";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotLocaleStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
