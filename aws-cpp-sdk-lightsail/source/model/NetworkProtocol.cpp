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

        static const int tcp_HASH = HashingUtils::HashString("tcp");
        static const int all_HASH = HashingUtils::HashString("all");
        static const int udp_HASH = HashingUtils::HashString("udp");


        NetworkProtocol GetNetworkProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case NetworkProtocol::tcp:
            return "tcp";
          case NetworkProtocol::all:
            return "all";
          case NetworkProtocol::udp:
            return "udp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace NetworkProtocolMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
