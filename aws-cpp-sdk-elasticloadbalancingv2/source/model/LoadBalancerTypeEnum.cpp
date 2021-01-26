/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/LoadBalancerTypeEnum.h>
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
      namespace LoadBalancerTypeEnumMapper
      {

        static const int application_HASH = HashingUtils::HashString("application");
        static const int network_HASH = HashingUtils::HashString("network");
        static const int gateway_HASH = HashingUtils::HashString("gateway");


        LoadBalancerTypeEnum GetLoadBalancerTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == application_HASH)
          {
            return LoadBalancerTypeEnum::application;
          }
          else if (hashCode == network_HASH)
          {
            return LoadBalancerTypeEnum::network;
          }
          else if (hashCode == gateway_HASH)
          {
            return LoadBalancerTypeEnum::gateway;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerTypeEnum>(hashCode);
          }

          return LoadBalancerTypeEnum::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerTypeEnum(LoadBalancerTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerTypeEnum::application:
            return "application";
          case LoadBalancerTypeEnum::network:
            return "network";
          case LoadBalancerTypeEnum::gateway:
            return "gateway";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerTypeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
