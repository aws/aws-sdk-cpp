/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotFilterName.h>
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
      namespace SlotFilterNameMapper
      {

        static const int SlotName_HASH = HashingUtils::HashString("SlotName");


        SlotFilterName GetSlotFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SlotName_HASH)
          {
            return SlotFilterName::SlotName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotFilterName>(hashCode);
          }

          return SlotFilterName::NOT_SET;
        }

        Aws::String GetNameForSlotFilterName(SlotFilterName enumValue)
        {
          switch(enumValue)
          {
          case SlotFilterName::NOT_SET:
            return {};
          case SlotFilterName::SlotName:
            return "SlotName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlotFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
