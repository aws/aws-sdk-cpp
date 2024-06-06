/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ForecastedGeofenceEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace ForecastedGeofenceEventTypeMapper
      {

        static const int ENTER_HASH = HashingUtils::HashString("ENTER");
        static const int EXIT_HASH = HashingUtils::HashString("EXIT");
        static const int IDLE_HASH = HashingUtils::HashString("IDLE");


        ForecastedGeofenceEventType GetForecastedGeofenceEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENTER_HASH)
          {
            return ForecastedGeofenceEventType::ENTER;
          }
          else if (hashCode == EXIT_HASH)
          {
            return ForecastedGeofenceEventType::EXIT;
          }
          else if (hashCode == IDLE_HASH)
          {
            return ForecastedGeofenceEventType::IDLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ForecastedGeofenceEventType>(hashCode);
          }

          return ForecastedGeofenceEventType::NOT_SET;
        }

        Aws::String GetNameForForecastedGeofenceEventType(ForecastedGeofenceEventType enumValue)
        {
          switch(enumValue)
          {
          case ForecastedGeofenceEventType::NOT_SET:
            return {};
          case ForecastedGeofenceEventType::ENTER:
            return "ENTER";
          case ForecastedGeofenceEventType::EXIT:
            return "EXIT";
          case ForecastedGeofenceEventType::IDLE:
            return "IDLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ForecastedGeofenceEventTypeMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
