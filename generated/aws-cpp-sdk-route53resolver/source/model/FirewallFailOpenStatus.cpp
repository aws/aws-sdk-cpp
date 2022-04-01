﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallFailOpenStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace FirewallFailOpenStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        FirewallFailOpenStatus GetFirewallFailOpenStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return FirewallFailOpenStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return FirewallFailOpenStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirewallFailOpenStatus>(hashCode);
          }

          return FirewallFailOpenStatus::NOT_SET;
        }

        Aws::String GetNameForFirewallFailOpenStatus(FirewallFailOpenStatus enumValue)
        {
          switch(enumValue)
          {
          case FirewallFailOpenStatus::ENABLED:
            return "ENABLED";
          case FirewallFailOpenStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FirewallFailOpenStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
