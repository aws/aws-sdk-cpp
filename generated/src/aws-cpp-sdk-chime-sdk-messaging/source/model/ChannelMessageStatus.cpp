/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelMessageStatus.h>
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
      namespace ChannelMessageStatusMapper
      {

        static const int SENT_HASH = HashingUtils::HashString("SENT");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DENIED_HASH = HashingUtils::HashString("DENIED");


        ChannelMessageStatus GetChannelMessageStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SENT_HASH)
          {
            return ChannelMessageStatus::SENT;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ChannelMessageStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChannelMessageStatus::FAILED;
          }
          else if (hashCode == DENIED_HASH)
          {
            return ChannelMessageStatus::DENIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelMessageStatus>(hashCode);
          }

          return ChannelMessageStatus::NOT_SET;
        }

        Aws::String GetNameForChannelMessageStatus(ChannelMessageStatus enumValue)
        {
          switch(enumValue)
          {
          case ChannelMessageStatus::NOT_SET:
            return {};
          case ChannelMessageStatus::SENT:
            return "SENT";
          case ChannelMessageStatus::PENDING:
            return "PENDING";
          case ChannelMessageStatus::FAILED:
            return "FAILED";
          case ChannelMessageStatus::DENIED:
            return "DENIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelMessageStatusMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
