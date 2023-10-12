/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotSortAttribute.h>
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
      namespace SlotSortAttributeMapper
      {

        static constexpr uint32_t SlotName_HASH = ConstExprHashingUtils::HashString("SlotName");
        static constexpr uint32_t LastUpdatedDateTime_HASH = ConstExprHashingUtils::HashString("LastUpdatedDateTime");


        SlotSortAttribute GetSlotSortAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SlotName_HASH)
          {
            return SlotSortAttribute::SlotName;
          }
          else if (hashCode == LastUpdatedDateTime_HASH)
          {
            return SlotSortAttribute::LastUpdatedDateTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotSortAttribute>(hashCode);
          }

          return SlotSortAttribute::NOT_SET;
        }

        Aws::String GetNameForSlotSortAttribute(SlotSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case SlotSortAttribute::NOT_SET:
            return {};
          case SlotSortAttribute::SlotName:
            return "SlotName";
          case SlotSortAttribute::LastUpdatedDateTime:
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

      } // namespace SlotSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
