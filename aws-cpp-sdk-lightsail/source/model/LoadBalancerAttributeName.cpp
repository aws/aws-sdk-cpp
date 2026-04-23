/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/lightsail/model/LoadBalancerAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace LoadBalancerAttributeNameMapper
      {

        static const int HealthCheckPath_HASH = HashingUtils::HashString("HealthCheckPath");
        static const int SessionStickinessEnabled_HASH = HashingUtils::HashString("SessionStickinessEnabled");
        static const int SessionStickiness_LB_CookieDurationSeconds_HASH = HashingUtils::HashString("SessionStickiness_LB_CookieDurationSeconds");


        LoadBalancerAttributeName GetLoadBalancerAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HealthCheckPath_HASH)
          {
            return LoadBalancerAttributeName::HealthCheckPath;
          }
          else if (hashCode == SessionStickinessEnabled_HASH)
          {
            return LoadBalancerAttributeName::SessionStickinessEnabled;
          }
          else if (hashCode == SessionStickiness_LB_CookieDurationSeconds_HASH)
          {
            return LoadBalancerAttributeName::SessionStickiness_LB_CookieDurationSeconds;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerAttributeName>(hashCode);
          }

          return LoadBalancerAttributeName::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerAttributeName(LoadBalancerAttributeName enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerAttributeName::HealthCheckPath:
            return "HealthCheckPath";
          case LoadBalancerAttributeName::SessionStickinessEnabled:
            return "SessionStickinessEnabled";
          case LoadBalancerAttributeName::SessionStickiness_LB_CookieDurationSeconds:
            return "SessionStickiness_LB_CookieDurationSeconds";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerAttributeNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
