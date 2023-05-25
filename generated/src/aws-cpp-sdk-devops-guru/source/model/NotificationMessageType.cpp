/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/NotificationMessageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace NotificationMessageTypeMapper
      {

        static const int NEW_INSIGHT_HASH = HashingUtils::HashString("NEW_INSIGHT");
        static const int CLOSED_INSIGHT_HASH = HashingUtils::HashString("CLOSED_INSIGHT");
        static const int NEW_ASSOCIATION_HASH = HashingUtils::HashString("NEW_ASSOCIATION");
        static const int SEVERITY_UPGRADED_HASH = HashingUtils::HashString("SEVERITY_UPGRADED");
        static const int NEW_RECOMMENDATION_HASH = HashingUtils::HashString("NEW_RECOMMENDATION");


        NotificationMessageType GetNotificationMessageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW_INSIGHT_HASH)
          {
            return NotificationMessageType::NEW_INSIGHT;
          }
          else if (hashCode == CLOSED_INSIGHT_HASH)
          {
            return NotificationMessageType::CLOSED_INSIGHT;
          }
          else if (hashCode == NEW_ASSOCIATION_HASH)
          {
            return NotificationMessageType::NEW_ASSOCIATION;
          }
          else if (hashCode == SEVERITY_UPGRADED_HASH)
          {
            return NotificationMessageType::SEVERITY_UPGRADED;
          }
          else if (hashCode == NEW_RECOMMENDATION_HASH)
          {
            return NotificationMessageType::NEW_RECOMMENDATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationMessageType>(hashCode);
          }

          return NotificationMessageType::NOT_SET;
        }

        Aws::String GetNameForNotificationMessageType(NotificationMessageType enumValue)
        {
          switch(enumValue)
          {
          case NotificationMessageType::NEW_INSIGHT:
            return "NEW_INSIGHT";
          case NotificationMessageType::CLOSED_INSIGHT:
            return "CLOSED_INSIGHT";
          case NotificationMessageType::NEW_ASSOCIATION:
            return "NEW_ASSOCIATION";
          case NotificationMessageType::SEVERITY_UPGRADED:
            return "SEVERITY_UPGRADED";
          case NotificationMessageType::NEW_RECOMMENDATION:
            return "NEW_RECOMMENDATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationMessageTypeMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
