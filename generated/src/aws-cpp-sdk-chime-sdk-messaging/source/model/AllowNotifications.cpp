/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/AllowNotifications.h>
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
      namespace AllowNotificationsMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t FILTERED_HASH = ConstExprHashingUtils::HashString("FILTERED");


        AllowNotifications GetAllowNotificationsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return AllowNotifications::ALL;
          }
          else if (hashCode == NONE_HASH)
          {
            return AllowNotifications::NONE;
          }
          else if (hashCode == FILTERED_HASH)
          {
            return AllowNotifications::FILTERED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowNotifications>(hashCode);
          }

          return AllowNotifications::NOT_SET;
        }

        Aws::String GetNameForAllowNotifications(AllowNotifications enumValue)
        {
          switch(enumValue)
          {
          case AllowNotifications::NOT_SET:
            return {};
          case AllowNotifications::ALL:
            return "ALL";
          case AllowNotifications::NONE:
            return "NONE";
          case AllowNotifications::FILTERED:
            return "FILTERED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowNotificationsMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
