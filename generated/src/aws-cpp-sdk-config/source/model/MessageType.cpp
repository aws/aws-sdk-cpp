/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/MessageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace MessageTypeMapper
      {

        static constexpr uint32_t ConfigurationItemChangeNotification_HASH = ConstExprHashingUtils::HashString("ConfigurationItemChangeNotification");
        static constexpr uint32_t ConfigurationSnapshotDeliveryCompleted_HASH = ConstExprHashingUtils::HashString("ConfigurationSnapshotDeliveryCompleted");
        static constexpr uint32_t ScheduledNotification_HASH = ConstExprHashingUtils::HashString("ScheduledNotification");
        static constexpr uint32_t OversizedConfigurationItemChangeNotification_HASH = ConstExprHashingUtils::HashString("OversizedConfigurationItemChangeNotification");


        MessageType GetMessageTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConfigurationItemChangeNotification_HASH)
          {
            return MessageType::ConfigurationItemChangeNotification;
          }
          else if (hashCode == ConfigurationSnapshotDeliveryCompleted_HASH)
          {
            return MessageType::ConfigurationSnapshotDeliveryCompleted;
          }
          else if (hashCode == ScheduledNotification_HASH)
          {
            return MessageType::ScheduledNotification;
          }
          else if (hashCode == OversizedConfigurationItemChangeNotification_HASH)
          {
            return MessageType::OversizedConfigurationItemChangeNotification;
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
          case MessageType::ConfigurationItemChangeNotification:
            return "ConfigurationItemChangeNotification";
          case MessageType::ConfigurationSnapshotDeliveryCompleted:
            return "ConfigurationSnapshotDeliveryCompleted";
          case MessageType::ScheduledNotification:
            return "ScheduledNotification";
          case MessageType::OversizedConfigurationItemChangeNotification:
            return "OversizedConfigurationItemChangeNotification";
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
  } // namespace ConfigService
} // namespace Aws
