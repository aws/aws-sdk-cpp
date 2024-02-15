/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/NotificationSubscriptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Artifact
  {
    namespace Model
    {
      namespace NotificationSubscriptionStatusMapper
      {

        static const int SUBSCRIBED_HASH = HashingUtils::HashString("SUBSCRIBED");
        static const int NOT_SUBSCRIBED_HASH = HashingUtils::HashString("NOT_SUBSCRIBED");


        NotificationSubscriptionStatus GetNotificationSubscriptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBSCRIBED_HASH)
          {
            return NotificationSubscriptionStatus::SUBSCRIBED;
          }
          else if (hashCode == NOT_SUBSCRIBED_HASH)
          {
            return NotificationSubscriptionStatus::NOT_SUBSCRIBED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationSubscriptionStatus>(hashCode);
          }

          return NotificationSubscriptionStatus::NOT_SET;
        }

        Aws::String GetNameForNotificationSubscriptionStatus(NotificationSubscriptionStatus enumValue)
        {
          switch(enumValue)
          {
          case NotificationSubscriptionStatus::NOT_SET:
            return {};
          case NotificationSubscriptionStatus::SUBSCRIBED:
            return "SUBSCRIBED";
          case NotificationSubscriptionStatus::NOT_SUBSCRIBED:
            return "NOT_SUBSCRIBED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationSubscriptionStatusMapper
    } // namespace Model
  } // namespace Artifact
} // namespace Aws
