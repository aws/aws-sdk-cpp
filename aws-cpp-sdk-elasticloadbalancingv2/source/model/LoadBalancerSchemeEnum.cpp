/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int internet_facing_HASH = HashingUtils::HashString("internet-facing");
        static const int internal_HASH = HashingUtils::HashString("internal");


        LoadBalancerSchemeEnum GetLoadBalancerSchemeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace LoadBalancerSchemeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
