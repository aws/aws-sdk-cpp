/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TargetGroupIpAddressTypeEnum.h>
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
      namespace TargetGroupIpAddressTypeEnumMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");
        static const int ipv6_HASH = HashingUtils::HashString("ipv6");


        TargetGroupIpAddressTypeEnum GetTargetGroupIpAddressTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return TargetGroupIpAddressTypeEnum::ipv4;
          }
          else if (hashCode == ipv6_HASH)
          {
            return TargetGroupIpAddressTypeEnum::ipv6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetGroupIpAddressTypeEnum>(hashCode);
          }

          return TargetGroupIpAddressTypeEnum::NOT_SET;
        }

        Aws::String GetNameForTargetGroupIpAddressTypeEnum(TargetGroupIpAddressTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case TargetGroupIpAddressTypeEnum::NOT_SET:
            return {};
          case TargetGroupIpAddressTypeEnum::ipv4:
            return "ipv4";
          case TargetGroupIpAddressTypeEnum::ipv6:
            return "ipv6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetGroupIpAddressTypeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
