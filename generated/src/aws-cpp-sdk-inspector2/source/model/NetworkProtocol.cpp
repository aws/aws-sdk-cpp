/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/NetworkProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace NetworkProtocolMapper
      {

        static const int TCP_HASH = HashingUtils::HashString("TCP");
        static const int UDP_HASH = HashingUtils::HashString("UDP");


        NetworkProtocol GetNetworkProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TCP_HASH)
          {
            return NetworkProtocol::TCP;
          }
          else if (hashCode == UDP_HASH)
          {
            return NetworkProtocol::UDP;
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
          case NetworkProtocol::TCP:
            return "TCP";
          case NetworkProtocol::UDP:
            return "UDP";
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
  } // namespace Inspector2
} // namespace Aws
