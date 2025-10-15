/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservationEndDateType.h>
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
      namespace ReservationEndDateTypeMapper
      {

        static const int limited_HASH = HashingUtils::HashString("limited");
        static const int unlimited_HASH = HashingUtils::HashString("unlimited");


        ReservationEndDateType GetReservationEndDateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == limited_HASH)
          {
            return ReservationEndDateType::limited;
          }
          else if (hashCode == unlimited_HASH)
          {
            return ReservationEndDateType::unlimited;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationEndDateType>(hashCode);
          }

          return ReservationEndDateType::NOT_SET;
        }

        Aws::String GetNameForReservationEndDateType(ReservationEndDateType enumValue)
        {
          switch(enumValue)
          {
          case ReservationEndDateType::NOT_SET:
            return {};
          case ReservationEndDateType::limited:
            return "limited";
          case ReservationEndDateType::unlimited:
            return "unlimited";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationEndDateTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
