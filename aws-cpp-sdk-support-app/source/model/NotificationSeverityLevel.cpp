/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/NotificationSeverityLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SupportApp
  {
    namespace Model
    {
      namespace NotificationSeverityLevelMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int all_HASH = HashingUtils::HashString("all");
        static const int high_HASH = HashingUtils::HashString("high");


        NotificationSeverityLevel GetNotificationSeverityLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return NotificationSeverityLevel::none;
          }
          else if (hashCode == all_HASH)
          {
            return NotificationSeverityLevel::all;
          }
          else if (hashCode == high_HASH)
          {
            return NotificationSeverityLevel::high;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationSeverityLevel>(hashCode);
          }

          return NotificationSeverityLevel::NOT_SET;
        }

        Aws::String GetNameForNotificationSeverityLevel(NotificationSeverityLevel enumValue)
        {
          switch(enumValue)
          {
          case NotificationSeverityLevel::none:
            return "none";
          case NotificationSeverityLevel::all:
            return "all";
          case NotificationSeverityLevel::high:
            return "high";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationSeverityLevelMapper
    } // namespace Model
  } // namespace SupportApp
} // namespace Aws
