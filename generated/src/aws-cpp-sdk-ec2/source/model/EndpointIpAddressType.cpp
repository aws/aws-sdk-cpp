/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EndpointIpAddressType.h>
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
      namespace EndpointIpAddressTypeMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");
        static const int ipv6_HASH = HashingUtils::HashString("ipv6");
        static const int dual_stack_HASH = HashingUtils::HashString("dual-stack");


        EndpointIpAddressType GetEndpointIpAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return EndpointIpAddressType::ipv4;
          }
          else if (hashCode == ipv6_HASH)
          {
            return EndpointIpAddressType::ipv6;
          }
          else if (hashCode == dual_stack_HASH)
          {
            return EndpointIpAddressType::dual_stack;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointIpAddressType>(hashCode);
          }

          return EndpointIpAddressType::NOT_SET;
        }

        Aws::String GetNameForEndpointIpAddressType(EndpointIpAddressType enumValue)
        {
          switch(enumValue)
          {
          case EndpointIpAddressType::NOT_SET:
            return {};
          case EndpointIpAddressType::ipv4:
            return "ipv4";
          case EndpointIpAddressType::ipv6:
            return "ipv6";
          case EndpointIpAddressType::dual_stack:
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

      } // namespace EndpointIpAddressTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
