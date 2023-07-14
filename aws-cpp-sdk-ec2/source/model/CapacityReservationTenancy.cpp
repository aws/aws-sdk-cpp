/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationTenancy.h>
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
      namespace CapacityReservationTenancyMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int dedicated_HASH = HashingUtils::HashString("dedicated");


        CapacityReservationTenancy GetCapacityReservationTenancyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return CapacityReservationTenancy::default_;
          }
          else if (hashCode == dedicated_HASH)
          {
            return CapacityReservationTenancy::dedicated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationTenancy>(hashCode);
          }

          return CapacityReservationTenancy::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationTenancy(CapacityReservationTenancy enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationTenancy::default_:
            return "default";
          case CapacityReservationTenancy::dedicated:
            return "dedicated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationTenancyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
