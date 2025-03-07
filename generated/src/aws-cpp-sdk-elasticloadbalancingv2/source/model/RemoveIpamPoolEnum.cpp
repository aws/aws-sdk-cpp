/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RemoveIpamPoolEnum.h>
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
      namespace RemoveIpamPoolEnumMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");


        RemoveIpamPoolEnum GetRemoveIpamPoolEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return RemoveIpamPoolEnum::ipv4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RemoveIpamPoolEnum>(hashCode);
          }

          return RemoveIpamPoolEnum::NOT_SET;
        }

        Aws::String GetNameForRemoveIpamPoolEnum(RemoveIpamPoolEnum enumValue)
        {
          switch(enumValue)
          {
          case RemoveIpamPoolEnum::NOT_SET:
            return {};
          case RemoveIpamPoolEnum::ipv4:
            return "ipv4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RemoveIpamPoolEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
