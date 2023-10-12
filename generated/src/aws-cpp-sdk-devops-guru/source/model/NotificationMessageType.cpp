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

        static constexpr uint32_t NEW_INSIGHT_HASH = ConstExprHashingUtils::HashString("NEW_INSIGHT");
        static constexpr uint32_t CLOSED_INSIGHT_HASH = ConstExprHashingUtils::HashString("CLOSED_INSIGHT");
        static constexpr uint32_t NEW_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("NEW_ASSOCIATION");
        static constexpr uint32_t SEVERITY_UPGRADED_HASH = ConstExprHashingUtils::HashString("SEVERITY_UPGRADED");
        static constexpr uint32_t NEW_RECOMMENDATION_HASH = ConstExprHashingUtils::HashString("NEW_RECOMMENDATION");


        NotificationMessageType GetNotificationMessageTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case NotificationMessageType::NOT_SET:
            return {};
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
