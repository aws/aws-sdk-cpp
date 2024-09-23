/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetCapacityReservationUsageStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace FleetCapacityReservationUsageStrategyMapper
      {

        static const int use_capacity_reservations_first_HASH = HashingUtils::HashString("use-capacity-reservations-first");
        static const int use_capacity_reservations_only_HASH = HashingUtils::HashString("use-capacity-reservations-only");
        static const int none_HASH = HashingUtils::HashString("none");


        FleetCapacityReservationUsageStrategy GetFleetCapacityReservationUsageStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == use_capacity_reservations_first_HASH)
          {
            return FleetCapacityReservationUsageStrategy::use_capacity_reservations_first;
          }
          else if (hashCode == use_capacity_reservations_only_HASH)
          {
            return FleetCapacityReservationUsageStrategy::use_capacity_reservations_only;
          }
          else if (hashCode == none_HASH)
          {
            return FleetCapacityReservationUsageStrategy::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetCapacityReservationUsageStrategy>(hashCode);
          }

          return FleetCapacityReservationUsageStrategy::NOT_SET;
        }

        Aws::String GetNameForFleetCapacityReservationUsageStrategy(FleetCapacityReservationUsageStrategy enumValue)
        {
          switch(enumValue)
          {
          case FleetCapacityReservationUsageStrategy::NOT_SET:
            return {};
          case FleetCapacityReservationUsageStrategy::use_capacity_reservations_first:
            return "use-capacity-reservations-first";
          case FleetCapacityReservationUsageStrategy::use_capacity_reservations_only:
            return "use-capacity-reservations-only";
          case FleetCapacityReservationUsageStrategy::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetCapacityReservationUsageStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
