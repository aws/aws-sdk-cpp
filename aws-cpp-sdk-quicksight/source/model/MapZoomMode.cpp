/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/MapZoomMode.h>
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
      namespace MapZoomModeMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        MapZoomMode GetMapZoomModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return MapZoomMode::AUTO;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return MapZoomMode::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MapZoomMode>(hashCode);
          }

          return MapZoomMode::NOT_SET;
        }

        Aws::String GetNameForMapZoomMode(MapZoomMode enumValue)
        {
          switch(enumValue)
          {
          case MapZoomMode::AUTO:
            return "AUTO";
          case MapZoomMode::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MapZoomModeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
