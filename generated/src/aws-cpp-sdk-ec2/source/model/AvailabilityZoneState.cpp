/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AvailabilityZoneState.h>
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
      namespace AvailabilityZoneStateMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int information_HASH = HashingUtils::HashString("information");
        static const int impaired_HASH = HashingUtils::HashString("impaired");
        static const int unavailable_HASH = HashingUtils::HashString("unavailable");
        static const int constrained_HASH = HashingUtils::HashString("constrained");


        AvailabilityZoneState GetAvailabilityZoneStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return AvailabilityZoneState::available;
          }
          else if (hashCode == information_HASH)
          {
            return AvailabilityZoneState::information;
          }
          else if (hashCode == impaired_HASH)
          {
            return AvailabilityZoneState::impaired;
          }
          else if (hashCode == unavailable_HASH)
          {
            return AvailabilityZoneState::unavailable;
          }
          else if (hashCode == constrained_HASH)
          {
            return AvailabilityZoneState::constrained;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvailabilityZoneState>(hashCode);
          }

          return AvailabilityZoneState::NOT_SET;
        }

        Aws::String GetNameForAvailabilityZoneState(AvailabilityZoneState enumValue)
        {
          switch(enumValue)
          {
          case AvailabilityZoneState::NOT_SET:
            return {};
          case AvailabilityZoneState::available:
            return "available";
          case AvailabilityZoneState::information:
            return "information";
          case AvailabilityZoneState::impaired:
            return "impaired";
          case AvailabilityZoneState::unavailable:
            return "unavailable";
          case AvailabilityZoneState::constrained:
            return "constrained";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AvailabilityZoneStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
