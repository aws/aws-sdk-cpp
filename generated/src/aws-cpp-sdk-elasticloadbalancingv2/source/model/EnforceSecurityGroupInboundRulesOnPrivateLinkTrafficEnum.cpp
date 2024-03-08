/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum.h>
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
      namespace EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnumMapper
      {

        static const int on_HASH = HashingUtils::HashString("on");
        static const int off_HASH = HashingUtils::HashString("off");


        EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum GetEnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == on_HASH)
          {
            return EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum::on;
          }
          else if (hashCode == off_HASH)
          {
            return EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum::off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum>(hashCode);
          }

          return EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum::NOT_SET;
        }

        Aws::String GetNameForEnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum enumValue)
        {
          switch(enumValue)
          {
          case EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum::NOT_SET:
            return {};
          case EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum::on:
            return "on";
          case EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum::off:
            return "off";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
