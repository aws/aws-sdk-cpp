/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotType.h>
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
      namespace BotTypeMapper
      {

        static const int Bot_HASH = HashingUtils::HashString("Bot");
        static const int BotNetwork_HASH = HashingUtils::HashString("BotNetwork");


        BotType GetBotTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Bot_HASH)
          {
            return BotType::Bot;
          }
          else if (hashCode == BotNetwork_HASH)
          {
            return BotType::BotNetwork;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotType>(hashCode);
          }

          return BotType::NOT_SET;
        }

        Aws::String GetNameForBotType(BotType enumValue)
        {
          switch(enumValue)
          {
          case BotType::NOT_SET:
            return {};
          case BotType::Bot:
            return "Bot";
          case BotType::BotNetwork:
            return "BotNetwork";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotTypeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
