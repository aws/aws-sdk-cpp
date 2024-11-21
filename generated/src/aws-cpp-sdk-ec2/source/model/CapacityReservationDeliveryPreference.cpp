/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationDeliveryPreference.h>
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
      namespace CapacityReservationDeliveryPreferenceMapper
      {

        static const int fixed_HASH = HashingUtils::HashString("fixed");
        static const int incremental_HASH = HashingUtils::HashString("incremental");


        CapacityReservationDeliveryPreference GetCapacityReservationDeliveryPreferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == fixed_HASH)
          {
            return CapacityReservationDeliveryPreference::fixed;
          }
          else if (hashCode == incremental_HASH)
          {
            return CapacityReservationDeliveryPreference::incremental;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationDeliveryPreference>(hashCode);
          }

          return CapacityReservationDeliveryPreference::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationDeliveryPreference(CapacityReservationDeliveryPreference enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationDeliveryPreference::NOT_SET:
            return {};
          case CapacityReservationDeliveryPreference::fixed:
            return "fixed";
          case CapacityReservationDeliveryPreference::incremental:
            return "incremental";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationDeliveryPreferenceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
