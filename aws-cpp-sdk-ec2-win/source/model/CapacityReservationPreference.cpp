/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationPreference.h>
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
      namespace CapacityReservationPreferenceMapper
      {

        static const int open_HASH = HashingUtils::HashString("open");
        static const int none_HASH = HashingUtils::HashString("none");


        CapacityReservationPreference GetCapacityReservationPreferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == open_HASH)
          {
            return CapacityReservationPreference::open;
          }
          else if (hashCode == none_HASH)
          {
            return CapacityReservationPreference::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationPreference>(hashCode);
          }

          return CapacityReservationPreference::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationPreference(CapacityReservationPreference enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationPreference::open:
            return "open";
          case CapacityReservationPreference::none:
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

      } // namespace CapacityReservationPreferenceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
