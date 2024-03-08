/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/MessagingDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMessaging
  {
    namespace Model
    {
      namespace MessagingDataTypeMapper
      {

        static const int Channel_HASH = HashingUtils::HashString("Channel");
        static const int ChannelMessage_HASH = HashingUtils::HashString("ChannelMessage");


        MessagingDataType GetMessagingDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Channel_HASH)
          {
            return MessagingDataType::Channel;
          }
          else if (hashCode == ChannelMessage_HASH)
          {
            return MessagingDataType::ChannelMessage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessagingDataType>(hashCode);
          }

          return MessagingDataType::NOT_SET;
        }

        Aws::String GetNameForMessagingDataType(MessagingDataType enumValue)
        {
          switch(enumValue)
          {
          case MessagingDataType::NOT_SET:
            return {};
          case MessagingDataType::Channel:
            return "Channel";
          case MessagingDataType::ChannelMessage:
            return "ChannelMessage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessagingDataTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
