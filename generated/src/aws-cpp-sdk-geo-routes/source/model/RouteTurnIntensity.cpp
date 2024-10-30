/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTurnIntensity.h>
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
      namespace RouteTurnIntensityMapper
      {

        static const int Sharp_HASH = HashingUtils::HashString("Sharp");
        static const int Slight_HASH = HashingUtils::HashString("Slight");
        static const int Typical_HASH = HashingUtils::HashString("Typical");


        RouteTurnIntensity GetRouteTurnIntensityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Sharp_HASH)
          {
            return RouteTurnIntensity::Sharp;
          }
          else if (hashCode == Slight_HASH)
          {
            return RouteTurnIntensity::Slight;
          }
          else if (hashCode == Typical_HASH)
          {
            return RouteTurnIntensity::Typical;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteTurnIntensity>(hashCode);
          }

          return RouteTurnIntensity::NOT_SET;
        }

        Aws::String GetNameForRouteTurnIntensity(RouteTurnIntensity enumValue)
        {
          switch(enumValue)
          {
          case RouteTurnIntensity::NOT_SET:
            return {};
          case RouteTurnIntensity::Sharp:
            return "Sharp";
          case RouteTurnIntensity::Slight:
            return "Slight";
          case RouteTurnIntensity::Typical:
            return "Typical";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteTurnIntensityMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
