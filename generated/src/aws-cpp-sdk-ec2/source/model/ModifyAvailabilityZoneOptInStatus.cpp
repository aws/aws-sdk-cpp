/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyAvailabilityZoneOptInStatus.h>
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
      namespace ModifyAvailabilityZoneOptInStatusMapper
      {

        static const int opted_in_HASH = HashingUtils::HashString("opted-in");
        static const int not_opted_in_HASH = HashingUtils::HashString("not-opted-in");


        ModifyAvailabilityZoneOptInStatus GetModifyAvailabilityZoneOptInStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == opted_in_HASH)
          {
            return ModifyAvailabilityZoneOptInStatus::opted_in;
          }
          else if (hashCode == not_opted_in_HASH)
          {
            return ModifyAvailabilityZoneOptInStatus::not_opted_in;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModifyAvailabilityZoneOptInStatus>(hashCode);
          }

          return ModifyAvailabilityZoneOptInStatus::NOT_SET;
        }

        Aws::String GetNameForModifyAvailabilityZoneOptInStatus(ModifyAvailabilityZoneOptInStatus enumValue)
        {
          switch(enumValue)
          {
          case ModifyAvailabilityZoneOptInStatus::opted_in:
            return "opted-in";
          case ModifyAvailabilityZoneOptInStatus::not_opted_in:
            return "not-opted-in";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModifyAvailabilityZoneOptInStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
