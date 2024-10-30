/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoutePedestrianNoticeCode.h>
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
      namespace RoutePedestrianNoticeCodeMapper
      {

        static const int AccuratePolylineUnavailable_HASH = HashingUtils::HashString("AccuratePolylineUnavailable");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int ViolatedAvoidDirtRoad_HASH = HashingUtils::HashString("ViolatedAvoidDirtRoad");
        static const int ViolatedAvoidTunnel_HASH = HashingUtils::HashString("ViolatedAvoidTunnel");
        static const int ViolatedPedestrianOption_HASH = HashingUtils::HashString("ViolatedPedestrianOption");


        RoutePedestrianNoticeCode GetRoutePedestrianNoticeCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccuratePolylineUnavailable_HASH)
          {
            return RoutePedestrianNoticeCode::AccuratePolylineUnavailable;
          }
          else if (hashCode == Other_HASH)
          {
            return RoutePedestrianNoticeCode::Other;
          }
          else if (hashCode == ViolatedAvoidDirtRoad_HASH)
          {
            return RoutePedestrianNoticeCode::ViolatedAvoidDirtRoad;
          }
          else if (hashCode == ViolatedAvoidTunnel_HASH)
          {
            return RoutePedestrianNoticeCode::ViolatedAvoidTunnel;
          }
          else if (hashCode == ViolatedPedestrianOption_HASH)
          {
            return RoutePedestrianNoticeCode::ViolatedPedestrianOption;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutePedestrianNoticeCode>(hashCode);
          }

          return RoutePedestrianNoticeCode::NOT_SET;
        }

        Aws::String GetNameForRoutePedestrianNoticeCode(RoutePedestrianNoticeCode enumValue)
        {
          switch(enumValue)
          {
          case RoutePedestrianNoticeCode::NOT_SET:
            return {};
          case RoutePedestrianNoticeCode::AccuratePolylineUnavailable:
            return "AccuratePolylineUnavailable";
          case RoutePedestrianNoticeCode::Other:
            return "Other";
          case RoutePedestrianNoticeCode::ViolatedAvoidDirtRoad:
            return "ViolatedAvoidDirtRoad";
          case RoutePedestrianNoticeCode::ViolatedAvoidTunnel:
            return "ViolatedAvoidTunnel";
          case RoutePedestrianNoticeCode::ViolatedPedestrianOption:
            return "ViolatedPedestrianOption";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoutePedestrianNoticeCodeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
