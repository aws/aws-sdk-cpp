/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteEngineType.h>
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
      namespace RouteEngineTypeMapper
      {

        static const int Electric_HASH = HashingUtils::HashString("Electric");
        static const int InternalCombustion_HASH = HashingUtils::HashString("InternalCombustion");
        static const int PluginHybrid_HASH = HashingUtils::HashString("PluginHybrid");


        RouteEngineType GetRouteEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Electric_HASH)
          {
            return RouteEngineType::Electric;
          }
          else if (hashCode == InternalCombustion_HASH)
          {
            return RouteEngineType::InternalCombustion;
          }
          else if (hashCode == PluginHybrid_HASH)
          {
            return RouteEngineType::PluginHybrid;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteEngineType>(hashCode);
          }

          return RouteEngineType::NOT_SET;
        }

        Aws::String GetNameForRouteEngineType(RouteEngineType enumValue)
        {
          switch(enumValue)
          {
          case RouteEngineType::NOT_SET:
            return {};
          case RouteEngineType::Electric:
            return "Electric";
          case RouteEngineType::InternalCombustion:
            return "InternalCombustion";
          case RouteEngineType::PluginHybrid:
            return "PluginHybrid";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteEngineTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
