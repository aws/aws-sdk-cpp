/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ChannelProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace ChannelProtocolMapper
      {

        static const int WSS_HASH = HashingUtils::HashString("WSS");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int WEBRTC_HASH = HashingUtils::HashString("WEBRTC");


        ChannelProtocol GetChannelProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WSS_HASH)
          {
            return ChannelProtocol::WSS;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return ChannelProtocol::HTTPS;
          }
          else if (hashCode == WEBRTC_HASH)
          {
            return ChannelProtocol::WEBRTC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelProtocol>(hashCode);
          }

          return ChannelProtocol::NOT_SET;
        }

        Aws::String GetNameForChannelProtocol(ChannelProtocol enumValue)
        {
          switch(enumValue)
          {
          case ChannelProtocol::WSS:
            return "WSS";
          case ChannelProtocol::HTTPS:
            return "HTTPS";
          case ChannelProtocol::WEBRTC:
            return "WEBRTC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelProtocolMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
