/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/OriginationRouteProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace OriginationRouteProtocolMapper
      {

        static constexpr uint32_t TCP_HASH = ConstExprHashingUtils::HashString("TCP");
        static constexpr uint32_t UDP_HASH = ConstExprHashingUtils::HashString("UDP");


        OriginationRouteProtocol GetOriginationRouteProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TCP_HASH)
          {
            return OriginationRouteProtocol::TCP;
          }
          else if (hashCode == UDP_HASH)
          {
            return OriginationRouteProtocol::UDP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginationRouteProtocol>(hashCode);
          }

          return OriginationRouteProtocol::NOT_SET;
        }

        Aws::String GetNameForOriginationRouteProtocol(OriginationRouteProtocol enumValue)
        {
          switch(enumValue)
          {
          case OriginationRouteProtocol::NOT_SET:
            return {};
          case OriginationRouteProtocol::TCP:
            return "TCP";
          case OriginationRouteProtocol::UDP:
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

      } // namespace OriginationRouteProtocolMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
