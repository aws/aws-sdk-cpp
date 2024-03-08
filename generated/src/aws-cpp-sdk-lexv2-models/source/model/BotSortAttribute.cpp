/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotSortAttribute.h>
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
      namespace BotSortAttributeMapper
      {

        static const int BotName_HASH = HashingUtils::HashString("BotName");


        BotSortAttribute GetBotSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotName_HASH)
          {
            return BotSortAttribute::BotName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotSortAttribute>(hashCode);
          }

          return BotSortAttribute::NOT_SET;
        }

        Aws::String GetNameForBotSortAttribute(BotSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case BotSortAttribute::NOT_SET:
            return {};
          case BotSortAttribute::BotName:
            return "BotName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
