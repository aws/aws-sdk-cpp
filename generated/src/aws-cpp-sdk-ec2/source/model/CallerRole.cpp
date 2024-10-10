/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CallerRole.h>
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
      namespace CallerRoleMapper
      {

        static const int odcr_owner_HASH = HashingUtils::HashString("odcr-owner");
        static const int unused_reservation_billing_owner_HASH = HashingUtils::HashString("unused-reservation-billing-owner");


        CallerRole GetCallerRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == odcr_owner_HASH)
          {
            return CallerRole::odcr_owner;
          }
          else if (hashCode == unused_reservation_billing_owner_HASH)
          {
            return CallerRole::unused_reservation_billing_owner;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CallerRole>(hashCode);
          }

          return CallerRole::NOT_SET;
        }

        Aws::String GetNameForCallerRole(CallerRole enumValue)
        {
          switch(enumValue)
          {
          case CallerRole::NOT_SET:
            return {};
          case CallerRole::odcr_owner:
            return "odcr-owner";
          case CallerRole::unused_reservation_billing_owner:
            return "unused-reservation-billing-owner";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CallerRoleMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
