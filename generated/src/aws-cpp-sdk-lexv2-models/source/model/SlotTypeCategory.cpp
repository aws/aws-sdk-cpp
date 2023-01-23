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

        static const int Custom_HASH = HashingUtils::HashString("Custom");
        static const int Extended_HASH = HashingUtils::HashString("Extended");
        static const int ExternalGrammar_HASH = HashingUtils::HashString("ExternalGrammar");
        static const int Composite_HASH = HashingUtils::HashString("Composite");


        SlotTypeCategory GetSlotTypeCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
