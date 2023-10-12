/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotFilterName.h>
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
      namespace BotFilterNameMapper
      {

        static constexpr uint32_t BotName_HASH = ConstExprHashingUtils::HashString("BotName");
        static constexpr uint32_t BotType_HASH = ConstExprHashingUtils::HashString("BotType");


        BotFilterName GetBotFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotName_HASH)
          {
            return BotFilterName::BotName;
          }
          else if (hashCode == BotType_HASH)
          {
            return BotFilterName::BotType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotFilterName>(hashCode);
          }

          return BotFilterName::NOT_SET;
        }

        Aws::String GetNameForBotFilterName(BotFilterName enumValue)
        {
          switch(enumValue)
          {
          case BotFilterName::NOT_SET:
            return {};
          case BotFilterName::BotName:
            return "BotName";
          case BotFilterName::BotType:
            return "BotType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
