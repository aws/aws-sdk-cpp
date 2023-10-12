/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/LoadBalancerSchemeEnum.h>
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
      namespace LoadBalancerSchemeEnumMapper
      {

        static constexpr uint32_t internet_facing_HASH = ConstExprHashingUtils::HashString("internet-facing");
        static constexpr uint32_t internal_HASH = ConstExprHashingUtils::HashString("internal");


        LoadBalancerSchemeEnum GetLoadBalancerSchemeEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == internet_facing_HASH)
          {
            return LoadBalancerSchemeEnum::internet_facing;
          }
          else if (hashCode == internal_HASH)
          {
            return LoadBalancerSchemeEnum::internal;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerSchemeEnum>(hashCode);
          }

          return LoadBalancerSchemeEnum::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerSchemeEnum(LoadBalancerSchemeEnum enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerSchemeEnum::NOT_SET:
            return {};
          case LoadBalancerSchemeEnum::internet_facing:
            return "internet-facing";
          case LoadBalancerSchemeEnum::internal:
            return "internal";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerSchemeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
