/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/MessageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace MessageTypeMapper
      {

        static const int CUSTOM_COMMAND_ID_NOTIFY_HASH = HashingUtils::HashString("CUSTOM_COMMAND_ID_NOTIFY");
        static const int CUSTOM_COMMAND_ID_GET_HASH = HashingUtils::HashString("CUSTOM_COMMAND_ID_GET");
        static const int CUSTOM_COMMAND_ID_SET_HASH = HashingUtils::HashString("CUSTOM_COMMAND_ID_SET");
        static const int CUSTOM_COMMAND_ID_RESP_HASH = HashingUtils::HashString("CUSTOM_COMMAND_ID_RESP");


        MessageType GetMessageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_COMMAND_ID_NOTIFY_HASH)
          {
            return MessageType::CUSTOM_COMMAND_ID_NOTIFY;
          }
          else if (hashCode == CUSTOM_COMMAND_ID_GET_HASH)
          {
            return MessageType::CUSTOM_COMMAND_ID_GET;
          }
          else if (hashCode == CUSTOM_COMMAND_ID_SET_HASH)
          {
            return MessageType::CUSTOM_COMMAND_ID_SET;
          }
          else if (hashCode == CUSTOM_COMMAND_ID_RESP_HASH)
          {
            return MessageType::CUSTOM_COMMAND_ID_RESP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageType>(hashCode);
          }

          return MessageType::NOT_SET;
        }

        Aws::String GetNameForMessageType(MessageType enumValue)
        {
          switch(enumValue)
          {
          case MessageType::NOT_SET:
            return {};
          case MessageType::CUSTOM_COMMAND_ID_NOTIFY:
            return "CUSTOM_COMMAND_ID_NOTIFY";
          case MessageType::CUSTOM_COMMAND_ID_GET:
            return "CUSTOM_COMMAND_ID_GET";
          case MessageType::CUSTOM_COMMAND_ID_SET:
            return "CUSTOM_COMMAND_ID_SET";
          case MessageType::CUSTOM_COMMAND_ID_RESP:
            return "CUSTOM_COMMAND_ID_RESP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
