/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/NotificationTarget.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace NotificationTargetMapper
      {

        static constexpr uint32_t EventBridge_HASH = ConstExprHashingUtils::HashString("EventBridge");
        static constexpr uint32_t SNS_HASH = ConstExprHashingUtils::HashString("SNS");
        static constexpr uint32_t SQS_HASH = ConstExprHashingUtils::HashString("SQS");


        NotificationTarget GetNotificationTargetForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EventBridge_HASH)
          {
            return NotificationTarget::EventBridge;
          }
          else if (hashCode == SNS_HASH)
          {
            return NotificationTarget::SNS;
          }
          else if (hashCode == SQS_HASH)
          {
            return NotificationTarget::SQS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationTarget>(hashCode);
          }

          return NotificationTarget::NOT_SET;
        }

        Aws::String GetNameForNotificationTarget(NotificationTarget enumValue)
        {
          switch(enumValue)
          {
          case NotificationTarget::NOT_SET:
            return {};
          case NotificationTarget::EventBridge:
            return "EventBridge";
          case NotificationTarget::SNS:
            return "SNS";
          case NotificationTarget::SQS:
            return "SQS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationTargetMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
