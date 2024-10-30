/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteResponseNoticeCode.h>
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
      namespace RouteResponseNoticeCodeMapper
      {

        static const int MainLanguageNotFound_HASH = HashingUtils::HashString("MainLanguageNotFound");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int TravelTimeExceedsDriverWorkHours_HASH = HashingUtils::HashString("TravelTimeExceedsDriverWorkHours");


        RouteResponseNoticeCode GetRouteResponseNoticeCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MainLanguageNotFound_HASH)
          {
            return RouteResponseNoticeCode::MainLanguageNotFound;
          }
          else if (hashCode == Other_HASH)
          {
            return RouteResponseNoticeCode::Other;
          }
          else if (hashCode == TravelTimeExceedsDriverWorkHours_HASH)
          {
            return RouteResponseNoticeCode::TravelTimeExceedsDriverWorkHours;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteResponseNoticeCode>(hashCode);
          }

          return RouteResponseNoticeCode::NOT_SET;
        }

        Aws::String GetNameForRouteResponseNoticeCode(RouteResponseNoticeCode enumValue)
        {
          switch(enumValue)
          {
          case RouteResponseNoticeCode::NOT_SET:
            return {};
          case RouteResponseNoticeCode::MainLanguageNotFound:
            return "MainLanguageNotFound";
          case RouteResponseNoticeCode::Other:
            return "Other";
          case RouteResponseNoticeCode::TravelTimeExceedsDriverWorkHours:
            return "TravelTimeExceedsDriverWorkHours";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteResponseNoticeCodeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
