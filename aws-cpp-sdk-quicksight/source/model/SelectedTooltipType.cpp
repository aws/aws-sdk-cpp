/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SelectedTooltipType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace SelectedTooltipTypeMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int DETAILED_HASH = HashingUtils::HashString("DETAILED");


        SelectedTooltipType GetSelectedTooltipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return SelectedTooltipType::BASIC;
          }
          else if (hashCode == DETAILED_HASH)
          {
            return SelectedTooltipType::DETAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelectedTooltipType>(hashCode);
          }

          return SelectedTooltipType::NOT_SET;
        }

        Aws::String GetNameForSelectedTooltipType(SelectedTooltipType enumValue)
        {
          switch(enumValue)
          {
          case SelectedTooltipType::BASIC:
            return "BASIC";
          case SelectedTooltipType::DETAILED:
            return "DETAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelectedTooltipTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
