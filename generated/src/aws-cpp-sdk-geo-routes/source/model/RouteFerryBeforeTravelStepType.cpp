/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteFerryBeforeTravelStepType.h>
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
      namespace RouteFerryBeforeTravelStepTypeMapper
      {

        static const int Board_HASH = HashingUtils::HashString("Board");


        RouteFerryBeforeTravelStepType GetRouteFerryBeforeTravelStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Board_HASH)
          {
            return RouteFerryBeforeTravelStepType::Board;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteFerryBeforeTravelStepType>(hashCode);
          }

          return RouteFerryBeforeTravelStepType::NOT_SET;
        }

        Aws::String GetNameForRouteFerryBeforeTravelStepType(RouteFerryBeforeTravelStepType enumValue)
        {
          switch(enumValue)
          {
          case RouteFerryBeforeTravelStepType::NOT_SET:
            return {};
          case RouteFerryBeforeTravelStepType::Board:
            return "Board";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteFerryBeforeTravelStepTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
