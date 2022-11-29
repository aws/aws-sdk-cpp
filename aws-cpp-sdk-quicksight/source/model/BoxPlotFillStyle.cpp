/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BoxPlotFillStyle.h>
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
      namespace BoxPlotFillStyleMapper
      {

        static const int SOLID_HASH = HashingUtils::HashString("SOLID");
        static const int TRANSPARENT_HASH = HashingUtils::HashString("TRANSPARENT");


        BoxPlotFillStyle GetBoxPlotFillStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOLID_HASH)
          {
            return BoxPlotFillStyle::SOLID;
          }
          else if (hashCode == TRANSPARENT_HASH)
          {
            return BoxPlotFillStyle::TRANSPARENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BoxPlotFillStyle>(hashCode);
          }

          return BoxPlotFillStyle::NOT_SET;
        }

        Aws::String GetNameForBoxPlotFillStyle(BoxPlotFillStyle enumValue)
        {
          switch(enumValue)
          {
          case BoxPlotFillStyle::SOLID:
            return "SOLID";
          case BoxPlotFillStyle::TRANSPARENT:
            return "TRANSPARENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BoxPlotFillStyleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
