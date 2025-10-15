/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservationType.h>
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
      namespace ReservationTypeMapper
      {

        static const int capacity_block_HASH = HashingUtils::HashString("capacity-block");
        static const int odcr_HASH = HashingUtils::HashString("odcr");


        ReservationType GetReservationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == capacity_block_HASH)
          {
            return ReservationType::capacity_block;
          }
          else if (hashCode == odcr_HASH)
          {
            return ReservationType::odcr;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationType>(hashCode);
          }

          return ReservationType::NOT_SET;
        }

        Aws::String GetNameForReservationType(ReservationType enumValue)
        {
          switch(enumValue)
          {
          case ReservationType::NOT_SET:
            return {};
          case ReservationType::capacity_block:
            return "capacity-block";
          case ReservationType::odcr:
            return "odcr";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
