/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotLocaleFilterOperator.h>
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
      namespace BotLocaleFilterOperatorMapper
      {

        static constexpr uint32_t CO_HASH = ConstExprHashingUtils::HashString("CO");
        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");


        BotLocaleFilterOperator GetBotLocaleFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CO_HASH)
          {
            return BotLocaleFilterOperator::CO;
          }
          else if (hashCode == EQ_HASH)
          {
            return BotLocaleFilterOperator::EQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotLocaleFilterOperator>(hashCode);
          }

          return BotLocaleFilterOperator::NOT_SET;
        }

        Aws::String GetNameForBotLocaleFilterOperator(BotLocaleFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case BotLocaleFilterOperator::NOT_SET:
            return {};
          case BotLocaleFilterOperator::CO:
            return "CO";
          case BotLocaleFilterOperator::EQ:
            return "EQ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotLocaleFilterOperatorMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
