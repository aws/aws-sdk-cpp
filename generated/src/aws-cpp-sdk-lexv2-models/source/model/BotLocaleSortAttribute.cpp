/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotLocaleSortAttribute.h>
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
      namespace BotLocaleSortAttributeMapper
      {

        static const int BotLocaleName_HASH = HashingUtils::HashString("BotLocaleName");


        BotLocaleSortAttribute GetBotLocaleSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotLocaleName_HASH)
          {
            return BotLocaleSortAttribute::BotLocaleName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotLocaleSortAttribute>(hashCode);
          }

          return BotLocaleSortAttribute::NOT_SET;
        }

        Aws::String GetNameForBotLocaleSortAttribute(BotLocaleSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case BotLocaleSortAttribute::NOT_SET:
            return {};
          case BotLocaleSortAttribute::BotLocaleName:
            return "BotLocaleName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotLocaleSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
