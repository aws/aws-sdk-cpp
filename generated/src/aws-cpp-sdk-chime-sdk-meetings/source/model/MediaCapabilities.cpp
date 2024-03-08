/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/MediaCapabilities.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMeetings
  {
    namespace Model
    {
      namespace MediaCapabilitiesMapper
      {

        static const int SendReceive_HASH = HashingUtils::HashString("SendReceive");
        static const int Send_HASH = HashingUtils::HashString("Send");
        static const int Receive_HASH = HashingUtils::HashString("Receive");
        static const int None_HASH = HashingUtils::HashString("None");


        MediaCapabilities GetMediaCapabilitiesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SendReceive_HASH)
          {
            return MediaCapabilities::SendReceive;
          }
          else if (hashCode == Send_HASH)
          {
            return MediaCapabilities::Send;
          }
          else if (hashCode == Receive_HASH)
          {
            return MediaCapabilities::Receive;
          }
          else if (hashCode == None_HASH)
          {
            return MediaCapabilities::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaCapabilities>(hashCode);
          }

          return MediaCapabilities::NOT_SET;
        }

        Aws::String GetNameForMediaCapabilities(MediaCapabilities enumValue)
        {
          switch(enumValue)
          {
          case MediaCapabilities::NOT_SET:
            return {};
          case MediaCapabilities::SendReceive:
            return "SendReceive";
          case MediaCapabilities::Send:
            return "Send";
          case MediaCapabilities::Receive:
            return "Receive";
          case MediaCapabilities::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaCapabilitiesMapper
    } // namespace Model
  } // namespace ChimeSDKMeetings
} // namespace Aws
