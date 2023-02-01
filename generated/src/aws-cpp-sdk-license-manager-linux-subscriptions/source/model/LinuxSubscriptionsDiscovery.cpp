/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscovery.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManagerLinuxSubscriptions
  {
    namespace Model
    {
      namespace LinuxSubscriptionsDiscoveryMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        LinuxSubscriptionsDiscovery GetLinuxSubscriptionsDiscoveryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return LinuxSubscriptionsDiscovery::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return LinuxSubscriptionsDiscovery::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LinuxSubscriptionsDiscovery>(hashCode);
          }

          return LinuxSubscriptionsDiscovery::NOT_SET;
        }

        Aws::String GetNameForLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery enumValue)
        {
          switch(enumValue)
          {
          case LinuxSubscriptionsDiscovery::Enabled:
            return "Enabled";
          case LinuxSubscriptionsDiscovery::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LinuxSubscriptionsDiscoveryMapper
    } // namespace Model
  } // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
