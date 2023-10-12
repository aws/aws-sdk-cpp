/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t HealthCheckPath_HASH = ConstExprHashingUtils::HashString("HealthCheckPath");
        static constexpr uint32_t SessionStickinessEnabled_HASH = ConstExprHashingUtils::HashString("SessionStickinessEnabled");
        static constexpr uint32_t SessionStickiness_LB_CookieDurationSeconds_HASH = ConstExprHashingUtils::HashString("SessionStickiness_LB_CookieDurationSeconds");
        static constexpr uint32_t HttpsRedirectionEnabled_HASH = ConstExprHashingUtils::HashString("HttpsRedirectionEnabled");
        static constexpr uint32_t TlsPolicyName_HASH = ConstExprHashingUtils::HashString("TlsPolicyName");


        LoadBalancerAttributeName GetLoadBalancerAttributeNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == HttpsRedirectionEnabled_HASH)
          {
            return LoadBalancerAttributeName::HttpsRedirectionEnabled;
          }
          else if (hashCode == TlsPolicyName_HASH)
          {
            return LoadBalancerAttributeName::TlsPolicyName;
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
          case LoadBalancerAttributeName::NOT_SET:
            return {};
          case LoadBalancerAttributeName::HealthCheckPath:
            return "HealthCheckPath";
          case LoadBalancerAttributeName::SessionStickinessEnabled:
            return "SessionStickinessEnabled";
          case LoadBalancerAttributeName::SessionStickiness_LB_CookieDurationSeconds:
            return "SessionStickiness_LB_CookieDurationSeconds";
          case LoadBalancerAttributeName::HttpsRedirectionEnabled:
            return "HttpsRedirectionEnabled";
          case LoadBalancerAttributeName::TlsPolicyName:
            return "TlsPolicyName";
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
