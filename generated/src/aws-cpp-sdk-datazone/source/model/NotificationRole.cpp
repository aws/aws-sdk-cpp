/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/NotificationRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace NotificationRoleMapper
      {

        static const int PROJECT_OWNER_HASH = HashingUtils::HashString("PROJECT_OWNER");
        static const int PROJECT_CONTRIBUTOR_HASH = HashingUtils::HashString("PROJECT_CONTRIBUTOR");
        static const int PROJECT_VIEWER_HASH = HashingUtils::HashString("PROJECT_VIEWER");
        static const int DOMAIN_OWNER_HASH = HashingUtils::HashString("DOMAIN_OWNER");
        static const int PROJECT_SUBSCRIBER_HASH = HashingUtils::HashString("PROJECT_SUBSCRIBER");


        NotificationRole GetNotificationRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECT_OWNER_HASH)
          {
            return NotificationRole::PROJECT_OWNER;
          }
          else if (hashCode == PROJECT_CONTRIBUTOR_HASH)
          {
            return NotificationRole::PROJECT_CONTRIBUTOR;
          }
          else if (hashCode == PROJECT_VIEWER_HASH)
          {
            return NotificationRole::PROJECT_VIEWER;
          }
          else if (hashCode == DOMAIN_OWNER_HASH)
          {
            return NotificationRole::DOMAIN_OWNER;
          }
          else if (hashCode == PROJECT_SUBSCRIBER_HASH)
          {
            return NotificationRole::PROJECT_SUBSCRIBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationRole>(hashCode);
          }

          return NotificationRole::NOT_SET;
        }

        Aws::String GetNameForNotificationRole(NotificationRole enumValue)
        {
          switch(enumValue)
          {
          case NotificationRole::NOT_SET:
            return {};
          case NotificationRole::PROJECT_OWNER:
            return "PROJECT_OWNER";
          case NotificationRole::PROJECT_CONTRIBUTOR:
            return "PROJECT_CONTRIBUTOR";
          case NotificationRole::PROJECT_VIEWER:
            return "PROJECT_VIEWER";
          case NotificationRole::DOMAIN_OWNER:
            return "DOMAIN_OWNER";
          case NotificationRole::PROJECT_SUBSCRIBER:
            return "PROJECT_SUBSCRIBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationRoleMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
