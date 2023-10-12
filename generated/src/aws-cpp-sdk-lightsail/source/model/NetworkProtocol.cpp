/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/NetworkProtocol.h>
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
      namespace NetworkProtocolMapper
      {

        static constexpr uint32_t tcp_HASH = ConstExprHashingUtils::HashString("tcp");
        static constexpr uint32_t all_HASH = ConstExprHashingUtils::HashString("all");
        static constexpr uint32_t udp_HASH = ConstExprHashingUtils::HashString("udp");
        static constexpr uint32_t icmp_HASH = ConstExprHashingUtils::HashString("icmp");


        NetworkProtocol GetNetworkProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == tcp_HASH)
          {
            return NetworkProtocol::tcp;
          }
          else if (hashCode == all_HASH)
          {
            return NetworkProtocol::all;
          }
          else if (hashCode == udp_HASH)
          {
            return NetworkProtocol::udp;
          }
          else if (hashCode == icmp_HASH)
          {
            return NetworkProtocol::icmp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkProtocol>(hashCode);
          }

          return NetworkProtocol::NOT_SET;
        }

        Aws::String GetNameForNetworkProtocol(NetworkProtocol enumValue)
        {
          switch(enumValue)
          {
          case NetworkProtocol::NOT_SET:
            return {};
          case NetworkProtocol::tcp:
            return "tcp";
          case NetworkProtocol::all:
            return "all";
          case NetworkProtocol::udp:
            return "udp";
          case NetworkProtocol::icmp:
            return "icmp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkProtocolMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
