/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotTypeSortAttribute.h>
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
      namespace SlotTypeSortAttributeMapper
      {

        static const int SlotTypeName_HASH = HashingUtils::HashString("SlotTypeName");
        static const int LastUpdatedDateTime_HASH = HashingUtils::HashString("LastUpdatedDateTime");


        SlotTypeSortAttribute GetSlotTypeSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SlotTypeName_HASH)
          {
            return SlotTypeSortAttribute::SlotTypeName;
          }
          else if (hashCode == LastUpdatedDateTime_HASH)
          {
            return SlotTypeSortAttribute::LastUpdatedDateTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotTypeSortAttribute>(hashCode);
          }

          return SlotTypeSortAttribute::NOT_SET;
        }

        Aws::String GetNameForSlotTypeSortAttribute(SlotTypeSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case SlotTypeSortAttribute::NOT_SET:
            return {};
          case SlotTypeSortAttribute::SlotTypeName:
            return "SlotTypeName";
          case SlotTypeSortAttribute::LastUpdatedDateTime:
            return "LastUpdatedDateTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlotTypeSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
