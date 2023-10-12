/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/PushNotificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMessaging
  {
    namespace Model
    {
      namespace PushNotificationTypeMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t VOIP_HASH = ConstExprHashingUtils::HashString("VOIP");


        PushNotificationType GetPushNotificationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return PushNotificationType::DEFAULT;
          }
          else if (hashCode == VOIP_HASH)
          {
            return PushNotificationType::VOIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PushNotificationType>(hashCode);
          }

          return PushNotificationType::NOT_SET;
        }

        Aws::String GetNameForPushNotificationType(PushNotificationType enumValue)
        {
          switch(enumValue)
          {
          case PushNotificationType::NOT_SET:
            return {};
          case PushNotificationType::DEFAULT:
            return "DEFAULT";
          case PushNotificationType::VOIP:
            return "VOIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PushNotificationTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
