/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineChartMarkerShape.h>
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
      namespace LineChartMarkerShapeMapper
      {

        static const int CIRCLE_HASH = HashingUtils::HashString("CIRCLE");
        static const int TRIANGLE_HASH = HashingUtils::HashString("TRIANGLE");
        static const int SQUARE_HASH = HashingUtils::HashString("SQUARE");
        static const int DIAMOND_HASH = HashingUtils::HashString("DIAMOND");
        static const int ROUNDED_SQUARE_HASH = HashingUtils::HashString("ROUNDED_SQUARE");


        LineChartMarkerShape GetLineChartMarkerShapeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CIRCLE_HASH)
          {
            return LineChartMarkerShape::CIRCLE;
          }
          else if (hashCode == TRIANGLE_HASH)
          {
            return LineChartMarkerShape::TRIANGLE;
          }
          else if (hashCode == SQUARE_HASH)
          {
            return LineChartMarkerShape::SQUARE;
          }
          else if (hashCode == DIAMOND_HASH)
          {
            return LineChartMarkerShape::DIAMOND;
          }
          else if (hashCode == ROUNDED_SQUARE_HASH)
          {
            return LineChartMarkerShape::ROUNDED_SQUARE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineChartMarkerShape>(hashCode);
          }

          return LineChartMarkerShape::NOT_SET;
        }

        Aws::String GetNameForLineChartMarkerShape(LineChartMarkerShape enumValue)
        {
          switch(enumValue)
          {
          case LineChartMarkerShape::CIRCLE:
            return "CIRCLE";
          case LineChartMarkerShape::TRIANGLE:
            return "TRIANGLE";
          case LineChartMarkerShape::SQUARE:
            return "SQUARE";
          case LineChartMarkerShape::DIAMOND:
            return "DIAMOND";
          case LineChartMarkerShape::ROUNDED_SQUARE:
            return "ROUNDED_SQUARE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineChartMarkerShapeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
