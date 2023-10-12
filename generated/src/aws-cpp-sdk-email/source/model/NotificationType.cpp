/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/NotificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace NotificationTypeMapper
      {

        static constexpr uint32_t Bounce_HASH = ConstExprHashingUtils::HashString("Bounce");
        static constexpr uint32_t Complaint_HASH = ConstExprHashingUtils::HashString("Complaint");
        static constexpr uint32_t Delivery_HASH = ConstExprHashingUtils::HashString("Delivery");


        NotificationType GetNotificationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Bounce_HASH)
          {
            return NotificationType::Bounce;
          }
          else if (hashCode == Complaint_HASH)
          {
            return NotificationType::Complaint;
          }
          else if (hashCode == Delivery_HASH)
          {
            return NotificationType::Delivery;
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
          case NotificationType::Bounce:
            return "Bounce";
          case NotificationType::Complaint:
            return "Complaint";
          case NotificationType::Delivery:
            return "Delivery";
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
  } // namespace SES
} // namespace Aws
