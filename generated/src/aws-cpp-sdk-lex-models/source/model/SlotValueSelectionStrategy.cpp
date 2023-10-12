/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/SlotValueSelectionStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace SlotValueSelectionStrategyMapper
      {

        static constexpr uint32_t ORIGINAL_VALUE_HASH = ConstExprHashingUtils::HashString("ORIGINAL_VALUE");
        static constexpr uint32_t TOP_RESOLUTION_HASH = ConstExprHashingUtils::HashString("TOP_RESOLUTION");


        SlotValueSelectionStrategy GetSlotValueSelectionStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORIGINAL_VALUE_HASH)
          {
            return SlotValueSelectionStrategy::ORIGINAL_VALUE;
          }
          else if (hashCode == TOP_RESOLUTION_HASH)
          {
            return SlotValueSelectionStrategy::TOP_RESOLUTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotValueSelectionStrategy>(hashCode);
          }

          return SlotValueSelectionStrategy::NOT_SET;
        }

        Aws::String GetNameForSlotValueSelectionStrategy(SlotValueSelectionStrategy enumValue)
        {
          switch(enumValue)
          {
          case SlotValueSelectionStrategy::NOT_SET:
            return {};
          case SlotValueSelectionStrategy::ORIGINAL_VALUE:
            return "ORIGINAL_VALUE";
          case SlotValueSelectionStrategy::TOP_RESOLUTION:
            return "TOP_RESOLUTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlotValueSelectionStrategyMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
