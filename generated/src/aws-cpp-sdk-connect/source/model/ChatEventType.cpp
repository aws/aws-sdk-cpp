/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ChatEventType.h>
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
      namespace ChatEventTypeMapper
      {

        static const int DISCONNECT_HASH = HashingUtils::HashString("DISCONNECT");
        static const int MESSAGE_HASH = HashingUtils::HashString("MESSAGE");
        static const int EVENT_HASH = HashingUtils::HashString("EVENT");


        ChatEventType GetChatEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCONNECT_HASH)
          {
            return ChatEventType::DISCONNECT;
          }
          else if (hashCode == MESSAGE_HASH)
          {
            return ChatEventType::MESSAGE;
          }
          else if (hashCode == EVENT_HASH)
          {
            return ChatEventType::EVENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChatEventType>(hashCode);
          }

          return ChatEventType::NOT_SET;
        }

        Aws::String GetNameForChatEventType(ChatEventType enumValue)
        {
          switch(enumValue)
          {
          case ChatEventType::NOT_SET:
            return {};
          case ChatEventType::DISCONNECT:
            return "DISCONNECT";
          case ChatEventType::MESSAGE:
            return "MESSAGE";
          case ChatEventType::EVENT:
            return "EVENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChatEventTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
