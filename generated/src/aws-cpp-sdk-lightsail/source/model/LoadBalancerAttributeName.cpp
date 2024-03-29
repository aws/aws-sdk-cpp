﻿/**
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

        static const int HealthCheckPath_HASH = HashingUtils::HashString("HealthCheckPath");
        static const int SessionStickinessEnabled_HASH = HashingUtils::HashString("SessionStickinessEnabled");
        static const int SessionStickiness_LB_CookieDurationSeconds_HASH = HashingUtils::HashString("SessionStickiness_LB_CookieDurationSeconds");
        static const int HttpsRedirectionEnabled_HASH = HashingUtils::HashString("HttpsRedirectionEnabled");
        static const int TlsPolicyName_HASH = HashingUtils::HashString("TlsPolicyName");


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
