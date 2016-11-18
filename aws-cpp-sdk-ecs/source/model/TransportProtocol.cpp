/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/model/TransportProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
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

            return "";
          }
        }

      } // namespace TransportProtocolMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
