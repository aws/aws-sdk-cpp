/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/NotificationTarget.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace NotificationTargetMapper
      {

        static const int EventBridge_HASH = HashingUtils::HashString("EventBridge");
        static const int SNS_HASH = HashingUtils::HashString("SNS");
        static const int SQS_HASH = HashingUtils::HashString("SQS");


        NotificationTarget GetNotificationTargetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace ChimeSDKVoice
} // namespace Aws
