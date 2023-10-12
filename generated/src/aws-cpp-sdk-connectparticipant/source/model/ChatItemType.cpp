/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/ChatItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectParticipant
  {
    namespace Model
    {
      namespace ChatItemTypeMapper
      {

        static constexpr uint32_t TYPING_HASH = ConstExprHashingUtils::HashString("TYPING");
        static constexpr uint32_t PARTICIPANT_JOINED_HASH = ConstExprHashingUtils::HashString("PARTICIPANT_JOINED");
        static constexpr uint32_t PARTICIPANT_LEFT_HASH = ConstExprHashingUtils::HashString("PARTICIPANT_LEFT");
        static constexpr uint32_t CHAT_ENDED_HASH = ConstExprHashingUtils::HashString("CHAT_ENDED");
        static constexpr uint32_t TRANSFER_SUCCEEDED_HASH = ConstExprHashingUtils::HashString("TRANSFER_SUCCEEDED");
        static constexpr uint32_t TRANSFER_FAILED_HASH = ConstExprHashingUtils::HashString("TRANSFER_FAILED");
        static constexpr uint32_t MESSAGE_HASH = ConstExprHashingUtils::HashString("MESSAGE");
        static constexpr uint32_t EVENT_HASH = ConstExprHashingUtils::HashString("EVENT");
        static constexpr uint32_t ATTACHMENT_HASH = ConstExprHashingUtils::HashString("ATTACHMENT");
        static constexpr uint32_t CONNECTION_ACK_HASH = ConstExprHashingUtils::HashString("CONNECTION_ACK");
        static constexpr uint32_t MESSAGE_DELIVERED_HASH = ConstExprHashingUtils::HashString("MESSAGE_DELIVERED");
        static constexpr uint32_t MESSAGE_READ_HASH = ConstExprHashingUtils::HashString("MESSAGE_READ");


        ChatItemType GetChatItemTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TYPING_HASH)
          {
            return ChatItemType::TYPING;
          }
          else if (hashCode == PARTICIPANT_JOINED_HASH)
          {
            return ChatItemType::PARTICIPANT_JOINED;
          }
          else if (hashCode == PARTICIPANT_LEFT_HASH)
          {
            return ChatItemType::PARTICIPANT_LEFT;
          }
          else if (hashCode == CHAT_ENDED_HASH)
          {
            return ChatItemType::CHAT_ENDED;
          }
          else if (hashCode == TRANSFER_SUCCEEDED_HASH)
          {
            return ChatItemType::TRANSFER_SUCCEEDED;
          }
          else if (hashCode == TRANSFER_FAILED_HASH)
          {
            return ChatItemType::TRANSFER_FAILED;
          }
          else if (hashCode == MESSAGE_HASH)
          {
            return ChatItemType::MESSAGE;
          }
          else if (hashCode == EVENT_HASH)
          {
            return ChatItemType::EVENT;
          }
          else if (hashCode == ATTACHMENT_HASH)
          {
            return ChatItemType::ATTACHMENT;
          }
          else if (hashCode == CONNECTION_ACK_HASH)
          {
            return ChatItemType::CONNECTION_ACK;
          }
          else if (hashCode == MESSAGE_DELIVERED_HASH)
          {
            return ChatItemType::MESSAGE_DELIVERED;
          }
          else if (hashCode == MESSAGE_READ_HASH)
          {
            return ChatItemType::MESSAGE_READ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChatItemType>(hashCode);
          }

          return ChatItemType::NOT_SET;
        }

        Aws::String GetNameForChatItemType(ChatItemType enumValue)
        {
          switch(enumValue)
          {
          case ChatItemType::NOT_SET:
            return {};
          case ChatItemType::TYPING:
            return "TYPING";
          case ChatItemType::PARTICIPANT_JOINED:
            return "PARTICIPANT_JOINED";
          case ChatItemType::PARTICIPANT_LEFT:
            return "PARTICIPANT_LEFT";
          case ChatItemType::CHAT_ENDED:
            return "CHAT_ENDED";
          case ChatItemType::TRANSFER_SUCCEEDED:
            return "TRANSFER_SUCCEEDED";
          case ChatItemType::TRANSFER_FAILED:
            return "TRANSFER_FAILED";
          case ChatItemType::MESSAGE:
            return "MESSAGE";
          case ChatItemType::EVENT:
            return "EVENT";
          case ChatItemType::ATTACHMENT:
            return "ATTACHMENT";
          case ChatItemType::CONNECTION_ACK:
            return "CONNECTION_ACK";
          case ChatItemType::MESSAGE_DELIVERED:
            return "MESSAGE_DELIVERED";
          case ChatItemType::MESSAGE_READ:
            return "MESSAGE_READ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChatItemTypeMapper
    } // namespace Model
  } // namespace ConnectParticipant
} // namespace Aws
