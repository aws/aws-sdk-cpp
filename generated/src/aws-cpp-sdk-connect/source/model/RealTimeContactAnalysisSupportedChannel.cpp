/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisSupportedChannel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace RealTimeContactAnalysisSupportedChannelMapper
      {

        static const int VOICE_HASH = HashingUtils::HashString("VOICE");
        static const int CHAT_HASH = HashingUtils::HashString("CHAT");


        RealTimeContactAnalysisSupportedChannel GetRealTimeContactAnalysisSupportedChannelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VOICE_HASH)
          {
            return RealTimeContactAnalysisSupportedChannel::VOICE;
          }
          else if (hashCode == CHAT_HASH)
          {
            return RealTimeContactAnalysisSupportedChannel::CHAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealTimeContactAnalysisSupportedChannel>(hashCode);
          }

          return RealTimeContactAnalysisSupportedChannel::NOT_SET;
        }

        Aws::String GetNameForRealTimeContactAnalysisSupportedChannel(RealTimeContactAnalysisSupportedChannel enumValue)
        {
          switch(enumValue)
          {
          case RealTimeContactAnalysisSupportedChannel::NOT_SET:
            return {};
          case RealTimeContactAnalysisSupportedChannel::VOICE:
            return "VOICE";
          case RealTimeContactAnalysisSupportedChannel::CHAT:
            return "CHAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RealTimeContactAnalysisSupportedChannelMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
