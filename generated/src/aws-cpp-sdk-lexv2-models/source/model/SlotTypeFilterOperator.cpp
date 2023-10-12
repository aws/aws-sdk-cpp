/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotTypeFilterOperator.h>
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
      namespace SlotTypeFilterOperatorMapper
      {

        static constexpr uint32_t CO_HASH = ConstExprHashingUtils::HashString("CO");
        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");


        SlotTypeFilterOperator GetSlotTypeFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CO_HASH)
          {
            return SlotTypeFilterOperator::CO;
          }
          else if (hashCode == EQ_HASH)
          {
            return SlotTypeFilterOperator::EQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotTypeFilterOperator>(hashCode);
          }

          return SlotTypeFilterOperator::NOT_SET;
        }

        Aws::String GetNameForSlotTypeFilterOperator(SlotTypeFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case SlotTypeFilterOperator::NOT_SET:
            return {};
          case SlotTypeFilterOperator::CO:
            return "CO";
          case SlotTypeFilterOperator::EQ:
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

      } // namespace SlotTypeFilterOperatorMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
