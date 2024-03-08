/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/NotificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace NotificationTypeMapper
      {

        static const int DATA_DELAY_HASH = HashingUtils::HashString("DATA_DELAY");
        static const int DATA_UPDATE_HASH = HashingUtils::HashString("DATA_UPDATE");
        static const int DEPRECATION_HASH = HashingUtils::HashString("DEPRECATION");
        static const int SCHEMA_CHANGE_HASH = HashingUtils::HashString("SCHEMA_CHANGE");


        NotificationType GetNotificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_DELAY_HASH)
          {
            return NotificationType::DATA_DELAY;
          }
          else if (hashCode == DATA_UPDATE_HASH)
          {
            return NotificationType::DATA_UPDATE;
          }
          else if (hashCode == DEPRECATION_HASH)
          {
            return NotificationType::DEPRECATION;
          }
          else if (hashCode == SCHEMA_CHANGE_HASH)
          {
            return NotificationType::SCHEMA_CHANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationType>(hashCode);
          }

          return NotificationType::NOT_SET;
        }

        Aws::String GetNameForNotificationType(NotificationType enumValue)
        {
          switch(enumValue)
          {
          case NotificationType::NOT_SET:
            return {};
          case NotificationType::DATA_DELAY:
            return "DATA_DELAY";
          case NotificationType::DATA_UPDATE:
            return "DATA_UPDATE";
          case NotificationType::DEPRECATION:
            return "DEPRECATION";
          case NotificationType::SCHEMA_CHANGE:
            return "SCHEMA_CHANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationTypeMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
