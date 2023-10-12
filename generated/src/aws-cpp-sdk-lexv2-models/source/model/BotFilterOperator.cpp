/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotFilterOperator.h>
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
      namespace BotFilterOperatorMapper
      {

        static constexpr uint32_t CO_HASH = ConstExprHashingUtils::HashString("CO");
        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");
        static constexpr uint32_t NE_HASH = ConstExprHashingUtils::HashString("NE");


        BotFilterOperator GetBotFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CO_HASH)
          {
            return BotFilterOperator::CO;
          }
          else if (hashCode == EQ_HASH)
          {
            return BotFilterOperator::EQ;
          }
          else if (hashCode == NE_HASH)
          {
            return BotFilterOperator::NE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotFilterOperator>(hashCode);
          }

          return BotFilterOperator::NOT_SET;
        }

        Aws::String GetNameForBotFilterOperator(BotFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case BotFilterOperator::NOT_SET:
            return {};
          case BotFilterOperator::CO:
            return "CO";
          case BotFilterOperator::EQ:
            return "EQ";
          case BotFilterOperator::NE:
            return "NE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotFilterOperatorMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
