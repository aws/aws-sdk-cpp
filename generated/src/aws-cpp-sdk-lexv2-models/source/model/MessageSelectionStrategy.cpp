/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/MessageSelectionStrategy.h>
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
      namespace MessageSelectionStrategyMapper
      {

        static const int Random_HASH = HashingUtils::HashString("Random");
        static const int Ordered_HASH = HashingUtils::HashString("Ordered");


        MessageSelectionStrategy GetMessageSelectionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Random_HASH)
          {
            return MessageSelectionStrategy::Random;
          }
          else if (hashCode == Ordered_HASH)
          {
            return MessageSelectionStrategy::Ordered;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageSelectionStrategy>(hashCode);
          }

          return MessageSelectionStrategy::NOT_SET;
        }

        Aws::String GetNameForMessageSelectionStrategy(MessageSelectionStrategy enumValue)
        {
          switch(enumValue)
          {
          case MessageSelectionStrategy::NOT_SET:
            return {};
          case MessageSelectionStrategy::Random:
            return "Random";
          case MessageSelectionStrategy::Ordered:
            return "Ordered";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageSelectionStrategyMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
