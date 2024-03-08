/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationType.h>
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
      namespace CapacityReservationTypeMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int capacity_block_HASH = HashingUtils::HashString("capacity-block");


        CapacityReservationType GetCapacityReservationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return CapacityReservationType::default_;
          }
          else if (hashCode == capacity_block_HASH)
          {
            return CapacityReservationType::capacity_block;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationType>(hashCode);
          }

          return CapacityReservationType::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationType(CapacityReservationType enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationType::NOT_SET:
            return {};
          case CapacityReservationType::default_:
            return "default";
          case CapacityReservationType::capacity_block:
            return "capacity-block";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
