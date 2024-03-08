/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotTypeFilterName.h>
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
      namespace SlotTypeFilterNameMapper
      {

        static const int SlotTypeName_HASH = HashingUtils::HashString("SlotTypeName");
        static const int ExternalSourceType_HASH = HashingUtils::HashString("ExternalSourceType");


        SlotTypeFilterName GetSlotTypeFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SlotTypeName_HASH)
          {
            return SlotTypeFilterName::SlotTypeName;
          }
          else if (hashCode == ExternalSourceType_HASH)
          {
            return SlotTypeFilterName::ExternalSourceType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotTypeFilterName>(hashCode);
          }

          return SlotTypeFilterName::NOT_SET;
        }

        Aws::String GetNameForSlotTypeFilterName(SlotTypeFilterName enumValue)
        {
          switch(enumValue)
          {
          case SlotTypeFilterName::NOT_SET:
            return {};
          case SlotTypeFilterName::SlotTypeName:
            return "SlotTypeName";
          case SlotTypeFilterName::ExternalSourceType:
            return "ExternalSourceType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlotTypeFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
