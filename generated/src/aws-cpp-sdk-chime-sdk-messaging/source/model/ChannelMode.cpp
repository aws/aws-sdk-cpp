/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelMode.h>
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
      namespace ChannelModeMapper
      {

        static constexpr uint32_t UNRESTRICTED_HASH = ConstExprHashingUtils::HashString("UNRESTRICTED");
        static constexpr uint32_t RESTRICTED_HASH = ConstExprHashingUtils::HashString("RESTRICTED");


        ChannelMode GetChannelModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNRESTRICTED_HASH)
          {
            return ChannelMode::UNRESTRICTED;
          }
          else if (hashCode == RESTRICTED_HASH)
          {
            return ChannelMode::RESTRICTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelMode>(hashCode);
          }

          return ChannelMode::NOT_SET;
        }

        Aws::String GetNameForChannelMode(ChannelMode enumValue)
        {
          switch(enumValue)
          {
          case ChannelMode::NOT_SET:
            return {};
          case ChannelMode::UNRESTRICTED:
            return "UNRESTRICTED";
          case ChannelMode::RESTRICTED:
            return "RESTRICTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelModeMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
