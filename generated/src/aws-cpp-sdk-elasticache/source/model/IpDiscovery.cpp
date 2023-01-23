/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/IpDiscovery.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace IpDiscoveryMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");
        static const int ipv6_HASH = HashingUtils::HashString("ipv6");


        IpDiscovery GetIpDiscoveryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return IpDiscovery::ipv4;
          }
          else if (hashCode == ipv6_HASH)
          {
            return IpDiscovery::ipv6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpDiscovery>(hashCode);
          }

          return IpDiscovery::NOT_SET;
        }

        Aws::String GetNameForIpDiscovery(IpDiscovery enumValue)
        {
          switch(enumValue)
          {
          case IpDiscovery::ipv4:
            return "ipv4";
          case IpDiscovery::ipv6:
            return "ipv6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpDiscoveryMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
