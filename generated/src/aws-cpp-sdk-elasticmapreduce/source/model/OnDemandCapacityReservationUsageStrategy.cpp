/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OnDemandCapacityReservationUsageStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace OnDemandCapacityReservationUsageStrategyMapper
      {

        static constexpr uint32_t use_capacity_reservations_first_HASH = ConstExprHashingUtils::HashString("use-capacity-reservations-first");


        OnDemandCapacityReservationUsageStrategy GetOnDemandCapacityReservationUsageStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == use_capacity_reservations_first_HASH)
          {
            return OnDemandCapacityReservationUsageStrategy::use_capacity_reservations_first;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnDemandCapacityReservationUsageStrategy>(hashCode);
          }

          return OnDemandCapacityReservationUsageStrategy::NOT_SET;
        }

        Aws::String GetNameForOnDemandCapacityReservationUsageStrategy(OnDemandCapacityReservationUsageStrategy enumValue)
        {
          switch(enumValue)
          {
          case OnDemandCapacityReservationUsageStrategy::NOT_SET:
            return {};
          case OnDemandCapacityReservationUsageStrategy::use_capacity_reservations_first:
            return "use-capacity-reservations-first";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OnDemandCapacityReservationUsageStrategyMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
