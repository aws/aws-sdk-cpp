/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficIpAddressType.h>
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
      namespace TrafficIpAddressTypeMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");
        static const int ipv6_HASH = HashingUtils::HashString("ipv6");
        static const int dual_stack_HASH = HashingUtils::HashString("dual-stack");


        TrafficIpAddressType GetTrafficIpAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return TrafficIpAddressType::ipv4;
          }
          else if (hashCode == ipv6_HASH)
          {
            return TrafficIpAddressType::ipv6;
          }
          else if (hashCode == dual_stack_HASH)
          {
            return TrafficIpAddressType::dual_stack;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficIpAddressType>(hashCode);
          }

          return TrafficIpAddressType::NOT_SET;
        }

        Aws::String GetNameForTrafficIpAddressType(TrafficIpAddressType enumValue)
        {
          switch(enumValue)
          {
          case TrafficIpAddressType::NOT_SET:
            return {};
          case TrafficIpAddressType::ipv4:
            return "ipv4";
          case TrafficIpAddressType::ipv6:
            return "ipv6";
          case TrafficIpAddressType::dual_stack:
            return "dual-stack";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficIpAddressTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
