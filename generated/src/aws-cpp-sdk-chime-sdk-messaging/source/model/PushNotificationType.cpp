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

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int VOIP_HASH = HashingUtils::HashString("VOIP");


        PushNotificationType GetPushNotificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
