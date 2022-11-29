/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataLabelPosition.h>
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
      namespace DataLabelPositionMapper
      {

        static const int INSIDE_HASH = HashingUtils::HashString("INSIDE");
        static const int OUTSIDE_HASH = HashingUtils::HashString("OUTSIDE");
        static const int LEFT_HASH = HashingUtils::HashString("LEFT");
        static const int TOP_HASH = HashingUtils::HashString("TOP");
        static const int BOTTOM_HASH = HashingUtils::HashString("BOTTOM");
        static const int RIGHT_HASH = HashingUtils::HashString("RIGHT");


        DataLabelPosition GetDataLabelPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSIDE_HASH)
          {
            return DataLabelPosition::INSIDE;
          }
          else if (hashCode == OUTSIDE_HASH)
          {
            return DataLabelPosition::OUTSIDE;
          }
          else if (hashCode == LEFT_HASH)
          {
            return DataLabelPosition::LEFT;
          }
          else if (hashCode == TOP_HASH)
          {
            return DataLabelPosition::TOP;
          }
          else if (hashCode == BOTTOM_HASH)
          {
            return DataLabelPosition::BOTTOM;
          }
          else if (hashCode == RIGHT_HASH)
          {
            return DataLabelPosition::RIGHT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataLabelPosition>(hashCode);
          }

          return DataLabelPosition::NOT_SET;
        }

        Aws::String GetNameForDataLabelPosition(DataLabelPosition enumValue)
        {
          switch(enumValue)
          {
          case DataLabelPosition::INSIDE:
            return "INSIDE";
          case DataLabelPosition::OUTSIDE:
            return "OUTSIDE";
          case DataLabelPosition::LEFT:
            return "LEFT";
          case DataLabelPosition::TOP:
            return "TOP";
          case DataLabelPosition::BOTTOM:
            return "BOTTOM";
          case DataLabelPosition::RIGHT:
            return "RIGHT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataLabelPositionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
