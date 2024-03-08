/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetCapacityReservationTenancy.h>
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
      namespace FleetCapacityReservationTenancyMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");


        FleetCapacityReservationTenancy GetFleetCapacityReservationTenancyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return FleetCapacityReservationTenancy::default_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetCapacityReservationTenancy>(hashCode);
          }

          return FleetCapacityReservationTenancy::NOT_SET;
        }

        Aws::String GetNameForFleetCapacityReservationTenancy(FleetCapacityReservationTenancy enumValue)
        {
          switch(enumValue)
          {
          case FleetCapacityReservationTenancy::NOT_SET:
            return {};
          case FleetCapacityReservationTenancy::default_:
            return "default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetCapacityReservationTenancyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
