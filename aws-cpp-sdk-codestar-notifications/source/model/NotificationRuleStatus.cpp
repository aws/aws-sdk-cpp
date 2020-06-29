/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/NotificationRuleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarNotifications
  {
    namespace Model
    {
      namespace NotificationRuleStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        NotificationRuleStatus GetNotificationRuleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return NotificationRuleStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return NotificationRuleStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationRuleStatus>(hashCode);
          }

          return NotificationRuleStatus::NOT_SET;
        }

        Aws::String GetNameForNotificationRuleStatus(NotificationRuleStatus enumValue)
        {
          switch(enumValue)
          {
          case NotificationRuleStatus::ENABLED:
            return "ENABLED";
          case NotificationRuleStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationRuleStatusMapper
    } // namespace Model
  } // namespace CodeStarNotifications
} // namespace Aws
