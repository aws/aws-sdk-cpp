/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ParticipantProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace ParticipantProtocolMapper
      {

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int WHIP_HASH = HashingUtils::HashString("WHIP");
        static const int RTMP_HASH = HashingUtils::HashString("RTMP");
        static const int RTMPS_HASH = HashingUtils::HashString("RTMPS");


        ParticipantProtocol GetParticipantProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return ParticipantProtocol::UNKNOWN;
          }
          else if (hashCode == WHIP_HASH)
          {
            return ParticipantProtocol::WHIP;
          }
          else if (hashCode == RTMP_HASH)
          {
            return ParticipantProtocol::RTMP;
          }
          else if (hashCode == RTMPS_HASH)
          {
            return ParticipantProtocol::RTMPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantProtocol>(hashCode);
          }

          return ParticipantProtocol::NOT_SET;
        }

        Aws::String GetNameForParticipantProtocol(ParticipantProtocol enumValue)
        {
          switch(enumValue)
          {
          case ParticipantProtocol::NOT_SET:
            return {};
          case ParticipantProtocol::UNKNOWN:
            return "UNKNOWN";
          case ParticipantProtocol::WHIP:
            return "WHIP";
          case ParticipantProtocol::RTMP:
            return "RTMP";
          case ParticipantProtocol::RTMPS:
            return "RTMPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantProtocolMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
