/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BotType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace BotTypeMapper
      {

        static const int ChatBot_HASH = HashingUtils::HashString("ChatBot");


        BotType GetBotTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ChatBot_HASH)
          {
            return BotType::ChatBot;
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
          case BotType::ChatBot:
            return "ChatBot";
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
  } // namespace Chime
} // namespace Aws
