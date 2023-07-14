/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AvailabilityZoneOptInStatus.h>
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
      namespace AvailabilityZoneOptInStatusMapper
      {

        static const int opt_in_not_required_HASH = HashingUtils::HashString("opt-in-not-required");
        static const int opted_in_HASH = HashingUtils::HashString("opted-in");
        static const int not_opted_in_HASH = HashingUtils::HashString("not-opted-in");


        AvailabilityZoneOptInStatus GetAvailabilityZoneOptInStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == opt_in_not_required_HASH)
          {
            return AvailabilityZoneOptInStatus::opt_in_not_required;
          }
          else if (hashCode == opted_in_HASH)
          {
            return AvailabilityZoneOptInStatus::opted_in;
          }
          else if (hashCode == not_opted_in_HASH)
          {
            return AvailabilityZoneOptInStatus::not_opted_in;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvailabilityZoneOptInStatus>(hashCode);
          }

          return AvailabilityZoneOptInStatus::NOT_SET;
        }

        Aws::String GetNameForAvailabilityZoneOptInStatus(AvailabilityZoneOptInStatus enumValue)
        {
          switch(enumValue)
          {
          case AvailabilityZoneOptInStatus::opt_in_not_required:
            return "opt-in-not-required";
          case AvailabilityZoneOptInStatus::opted_in:
            return "opted-in";
          case AvailabilityZoneOptInStatus::not_opted_in:
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

      } // namespace AvailabilityZoneOptInStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
