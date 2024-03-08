/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BuiltInSlotTypeSortAttribute.h>
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
      namespace BuiltInSlotTypeSortAttributeMapper
      {

        static const int SlotTypeSignature_HASH = HashingUtils::HashString("SlotTypeSignature");


        BuiltInSlotTypeSortAttribute GetBuiltInSlotTypeSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SlotTypeSignature_HASH)
          {
            return BuiltInSlotTypeSortAttribute::SlotTypeSignature;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BuiltInSlotTypeSortAttribute>(hashCode);
          }

          return BuiltInSlotTypeSortAttribute::NOT_SET;
        }

        Aws::String GetNameForBuiltInSlotTypeSortAttribute(BuiltInSlotTypeSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case BuiltInSlotTypeSortAttribute::NOT_SET:
            return {};
          case BuiltInSlotTypeSortAttribute::SlotTypeSignature:
            return "SlotTypeSignature";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BuiltInSlotTypeSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
