/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTravelStepType.h>
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
      namespace RouteTravelStepTypeMapper
      {

        static const int Default_HASH = HashingUtils::HashString("Default");
        static const int TurnByTurn_HASH = HashingUtils::HashString("TurnByTurn");


        RouteTravelStepType GetRouteTravelStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Default_HASH)
          {
            return RouteTravelStepType::Default;
          }
          else if (hashCode == TurnByTurn_HASH)
          {
            return RouteTravelStepType::TurnByTurn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteTravelStepType>(hashCode);
          }

          return RouteTravelStepType::NOT_SET;
        }

        Aws::String GetNameForRouteTravelStepType(RouteTravelStepType enumValue)
        {
          switch(enumValue)
          {
          case RouteTravelStepType::NOT_SET:
            return {};
          case RouteTravelStepType::Default:
            return "Default";
          case RouteTravelStepType::TurnByTurn:
            return "TurnByTurn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteTravelStepTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
