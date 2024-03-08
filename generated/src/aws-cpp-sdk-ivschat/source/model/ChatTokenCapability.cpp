/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/ChatTokenCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivschat
  {
    namespace Model
    {
      namespace ChatTokenCapabilityMapper
      {

        static const int SEND_MESSAGE_HASH = HashingUtils::HashString("SEND_MESSAGE");
        static const int DISCONNECT_USER_HASH = HashingUtils::HashString("DISCONNECT_USER");
        static const int DELETE_MESSAGE_HASH = HashingUtils::HashString("DELETE_MESSAGE");


        ChatTokenCapability GetChatTokenCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_MESSAGE_HASH)
          {
            return ChatTokenCapability::SEND_MESSAGE;
          }
          else if (hashCode == DISCONNECT_USER_HASH)
          {
            return ChatTokenCapability::DISCONNECT_USER;
          }
          else if (hashCode == DELETE_MESSAGE_HASH)
          {
            return ChatTokenCapability::DELETE_MESSAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChatTokenCapability>(hashCode);
          }

          return ChatTokenCapability::NOT_SET;
        }

        Aws::String GetNameForChatTokenCapability(ChatTokenCapability enumValue)
        {
          switch(enumValue)
          {
          case ChatTokenCapability::NOT_SET:
            return {};
          case ChatTokenCapability::SEND_MESSAGE:
            return "SEND_MESSAGE";
          case ChatTokenCapability::DISCONNECT_USER:
            return "DISCONNECT_USER";
          case ChatTokenCapability::DELETE_MESSAGE:
            return "DELETE_MESSAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChatTokenCapabilityMapper
    } // namespace Model
  } // namespace ivschat
} // namespace Aws
