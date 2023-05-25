/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/LoadBalancerStateEnum.h>
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
      namespace LoadBalancerStateEnumMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int provisioning_HASH = HashingUtils::HashString("provisioning");
        static const int active_impaired_HASH = HashingUtils::HashString("active_impaired");
        static const int failed_HASH = HashingUtils::HashString("failed");


        LoadBalancerStateEnum GetLoadBalancerStateEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return LoadBalancerStateEnum::active;
          }
          else if (hashCode == provisioning_HASH)
          {
            return LoadBalancerStateEnum::provisioning;
          }
          else if (hashCode == active_impaired_HASH)
          {
            return LoadBalancerStateEnum::active_impaired;
          }
          else if (hashCode == failed_HASH)
          {
            return LoadBalancerStateEnum::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerStateEnum>(hashCode);
          }

          return LoadBalancerStateEnum::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerStateEnum(LoadBalancerStateEnum enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerStateEnum::active:
            return "active";
          case LoadBalancerStateEnum::provisioning:
            return "provisioning";
          case LoadBalancerStateEnum::active_impaired:
            return "active_impaired";
          case LoadBalancerStateEnum::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerStateEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
