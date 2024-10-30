/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/GeometryFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace GeometryFormatMapper
      {

        static const int FlexiblePolyline_HASH = HashingUtils::HashString("FlexiblePolyline");
        static const int Simple_HASH = HashingUtils::HashString("Simple");


        GeometryFormat GetGeometryFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FlexiblePolyline_HASH)
          {
            return GeometryFormat::FlexiblePolyline;
          }
          else if (hashCode == Simple_HASH)
          {
            return GeometryFormat::Simple;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeometryFormat>(hashCode);
          }

          return GeometryFormat::NOT_SET;
        }

        Aws::String GetNameForGeometryFormat(GeometryFormat enumValue)
        {
          switch(enumValue)
          {
          case GeometryFormat::NOT_SET:
            return {};
          case GeometryFormat::FlexiblePolyline:
            return "FlexiblePolyline";
          case GeometryFormat::Simple:
            return "Simple";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeometryFormatMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
