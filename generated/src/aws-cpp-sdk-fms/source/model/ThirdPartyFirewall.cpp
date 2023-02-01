/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ThirdPartyFirewall.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace ThirdPartyFirewallMapper
      {

        static const int PALO_ALTO_NETWORKS_CLOUD_NGFW_HASH = HashingUtils::HashString("PALO_ALTO_NETWORKS_CLOUD_NGFW");
        static const int FORTIGATE_CLOUD_NATIVE_FIREWALL_HASH = HashingUtils::HashString("FORTIGATE_CLOUD_NATIVE_FIREWALL");


        ThirdPartyFirewall GetThirdPartyFirewallForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PALO_ALTO_NETWORKS_CLOUD_NGFW_HASH)
          {
            return ThirdPartyFirewall::PALO_ALTO_NETWORKS_CLOUD_NGFW;
          }
          else if (hashCode == FORTIGATE_CLOUD_NATIVE_FIREWALL_HASH)
          {
            return ThirdPartyFirewall::FORTIGATE_CLOUD_NATIVE_FIREWALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThirdPartyFirewall>(hashCode);
          }

          return ThirdPartyFirewall::NOT_SET;
        }

        Aws::String GetNameForThirdPartyFirewall(ThirdPartyFirewall enumValue)
        {
          switch(enumValue)
          {
          case ThirdPartyFirewall::PALO_ALTO_NETWORKS_CLOUD_NGFW:
            return "PALO_ALTO_NETWORKS_CLOUD_NGFW";
          case ThirdPartyFirewall::FORTIGATE_CLOUD_NATIVE_FIREWALL:
            return "FORTIGATE_CLOUD_NATIVE_FIREWALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThirdPartyFirewallMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
