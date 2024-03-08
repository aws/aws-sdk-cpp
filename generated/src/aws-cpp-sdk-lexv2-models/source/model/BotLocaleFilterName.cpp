/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotLocaleFilterName.h>
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
      namespace BotLocaleFilterNameMapper
      {

        static const int BotLocaleName_HASH = HashingUtils::HashString("BotLocaleName");


        BotLocaleFilterName GetBotLocaleFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotLocaleName_HASH)
          {
            return BotLocaleFilterName::BotLocaleName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotLocaleFilterName>(hashCode);
          }

          return BotLocaleFilterName::NOT_SET;
        }

        Aws::String GetNameForBotLocaleFilterName(BotLocaleFilterName enumValue)
        {
          switch(enumValue)
          {
          case BotLocaleFilterName::NOT_SET:
            return {};
          case BotLocaleFilterName::BotLocaleName:
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

      } // namespace BotLocaleFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
