/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransportProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace TransportProtocolMapper
      {

        static const int tcp_HASH = HashingUtils::HashString("tcp");
        static const int udp_HASH = HashingUtils::HashString("udp");


        TransportProtocol GetTransportProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == tcp_HASH)
          {
            return TransportProtocol::tcp;
          }
          else if (hashCode == udp_HASH)
          {
            return TransportProtocol::udp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransportProtocol>(hashCode);
          }

          return TransportProtocol::NOT_SET;
        }

        Aws::String GetNameForTransportProtocol(TransportProtocol enumValue)
        {
          switch(enumValue)
          {
          case TransportProtocol::tcp:
            return "tcp";
          case TransportProtocol::udp:
            return "udp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransportProtocolMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
