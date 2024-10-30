/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineOptimizationObjective.h>
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
      namespace IsolineOptimizationObjectiveMapper
      {

        static const int AccurateCalculation_HASH = HashingUtils::HashString("AccurateCalculation");
        static const int BalancedCalculation_HASH = HashingUtils::HashString("BalancedCalculation");
        static const int FastCalculation_HASH = HashingUtils::HashString("FastCalculation");


        IsolineOptimizationObjective GetIsolineOptimizationObjectiveForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccurateCalculation_HASH)
          {
            return IsolineOptimizationObjective::AccurateCalculation;
          }
          else if (hashCode == BalancedCalculation_HASH)
          {
            return IsolineOptimizationObjective::BalancedCalculation;
          }
          else if (hashCode == FastCalculation_HASH)
          {
            return IsolineOptimizationObjective::FastCalculation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsolineOptimizationObjective>(hashCode);
          }

          return IsolineOptimizationObjective::NOT_SET;
        }

        Aws::String GetNameForIsolineOptimizationObjective(IsolineOptimizationObjective enumValue)
        {
          switch(enumValue)
          {
          case IsolineOptimizationObjective::NOT_SET:
            return {};
          case IsolineOptimizationObjective::AccurateCalculation:
            return "AccurateCalculation";
          case IsolineOptimizationObjective::BalancedCalculation:
            return "BalancedCalculation";
          case IsolineOptimizationObjective::FastCalculation:
            return "FastCalculation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsolineOptimizationObjectiveMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
