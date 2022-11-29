/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableSubtotalLevel.h>
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
      namespace PivotTableSubtotalLevelMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int LAST_HASH = HashingUtils::HashString("LAST");


        PivotTableSubtotalLevel GetPivotTableSubtotalLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return PivotTableSubtotalLevel::ALL;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return PivotTableSubtotalLevel::CUSTOM;
          }
          else if (hashCode == LAST_HASH)
          {
            return PivotTableSubtotalLevel::LAST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PivotTableSubtotalLevel>(hashCode);
          }

          return PivotTableSubtotalLevel::NOT_SET;
        }

        Aws::String GetNameForPivotTableSubtotalLevel(PivotTableSubtotalLevel enumValue)
        {
          switch(enumValue)
          {
          case PivotTableSubtotalLevel::ALL:
            return "ALL";
          case PivotTableSubtotalLevel::CUSTOM:
            return "CUSTOM";
          case PivotTableSubtotalLevel::LAST:
            return "LAST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PivotTableSubtotalLevelMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
