/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialSelectedPointStyle.h>
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
      namespace GeospatialSelectedPointStyleMapper
      {

        static const int POINT_HASH = HashingUtils::HashString("POINT");
        static const int CLUSTER_HASH = HashingUtils::HashString("CLUSTER");


        GeospatialSelectedPointStyle GetGeospatialSelectedPointStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POINT_HASH)
          {
            return GeospatialSelectedPointStyle::POINT;
          }
          else if (hashCode == CLUSTER_HASH)
          {
            return GeospatialSelectedPointStyle::CLUSTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeospatialSelectedPointStyle>(hashCode);
          }

          return GeospatialSelectedPointStyle::NOT_SET;
        }

        Aws::String GetNameForGeospatialSelectedPointStyle(GeospatialSelectedPointStyle enumValue)
        {
          switch(enumValue)
          {
          case GeospatialSelectedPointStyle::POINT:
            return "POINT";
          case GeospatialSelectedPointStyle::CLUSTER:
            return "CLUSTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeospatialSelectedPointStyleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
