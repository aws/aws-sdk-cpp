/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/IpAddressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace IpAddressTypeMapper
      {

        static constexpr uint32_t ipv4_HASH = ConstExprHashingUtils::HashString("ipv4");
        static constexpr uint32_t dualstack_HASH = ConstExprHashingUtils::HashString("dualstack");


        IpAddressType GetIpAddressTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return IpAddressType::ipv4;
          }
          else if (hashCode == dualstack_HASH)
          {
            return IpAddressType::dualstack;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpAddressType>(hashCode);
          }

          return IpAddressType::NOT_SET;
        }

        Aws::String GetNameForIpAddressType(IpAddressType enumValue)
        {
          switch(enumValue)
          {
          case IpAddressType::NOT_SET:
            return {};
          case IpAddressType::ipv4:
            return "ipv4";
          case IpAddressType::dualstack:
            return "dualstack";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpAddressTypeMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
