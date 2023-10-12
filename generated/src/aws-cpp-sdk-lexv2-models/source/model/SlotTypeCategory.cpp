/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotTypeCategory.h>
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
      namespace SlotTypeCategoryMapper
      {

        static constexpr uint32_t Custom_HASH = ConstExprHashingUtils::HashString("Custom");
        static constexpr uint32_t Extended_HASH = ConstExprHashingUtils::HashString("Extended");
        static constexpr uint32_t ExternalGrammar_HASH = ConstExprHashingUtils::HashString("ExternalGrammar");
        static constexpr uint32_t Composite_HASH = ConstExprHashingUtils::HashString("Composite");


        SlotTypeCategory GetSlotTypeCategoryForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Custom_HASH)
          {
            return SlotTypeCategory::Custom;
          }
          else if (hashCode == Extended_HASH)
          {
            return SlotTypeCategory::Extended;
          }
          else if (hashCode == ExternalGrammar_HASH)
          {
            return SlotTypeCategory::ExternalGrammar;
          }
          else if (hashCode == Composite_HASH)
          {
            return SlotTypeCategory::Composite;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotTypeCategory>(hashCode);
          }

          return SlotTypeCategory::NOT_SET;
        }

        Aws::String GetNameForSlotTypeCategory(SlotTypeCategory enumValue)
        {
          switch(enumValue)
          {
          case SlotTypeCategory::NOT_SET:
            return {};
          case SlotTypeCategory::Custom:
            return "Custom";
          case SlotTypeCategory::Extended:
            return "Extended";
          case SlotTypeCategory::ExternalGrammar:
            return "ExternalGrammar";
          case SlotTypeCategory::Composite:
            return "Composite";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlotTypeCategoryMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
