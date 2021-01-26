/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ChannelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace ChannelTypeMapper
      {

        static const int PUSH_HASH = HashingUtils::HashString("PUSH");
        static const int GCM_HASH = HashingUtils::HashString("GCM");
        static const int APNS_HASH = HashingUtils::HashString("APNS");
        static const int APNS_SANDBOX_HASH = HashingUtils::HashString("APNS_SANDBOX");
        static const int APNS_VOIP_HASH = HashingUtils::HashString("APNS_VOIP");
        static const int APNS_VOIP_SANDBOX_HASH = HashingUtils::HashString("APNS_VOIP_SANDBOX");
        static const int ADM_HASH = HashingUtils::HashString("ADM");
        static const int SMS_HASH = HashingUtils::HashString("SMS");
        static const int VOICE_HASH = HashingUtils::HashString("VOICE");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int BAIDU_HASH = HashingUtils::HashString("BAIDU");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        ChannelType GetChannelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUSH_HASH)
          {
            return ChannelType::PUSH;
          }
          else if (hashCode == GCM_HASH)
          {
            return ChannelType::GCM;
          }
          else if (hashCode == APNS_HASH)
          {
            return ChannelType::APNS;
          }
          else if (hashCode == APNS_SANDBOX_HASH)
          {
            return ChannelType::APNS_SANDBOX;
          }
          else if (hashCode == APNS_VOIP_HASH)
          {
            return ChannelType::APNS_VOIP;
          }
          else if (hashCode == APNS_VOIP_SANDBOX_HASH)
          {
            return ChannelType::APNS_VOIP_SANDBOX;
          }
          else if (hashCode == ADM_HASH)
          {
            return ChannelType::ADM;
          }
          else if (hashCode == SMS_HASH)
          {
            return ChannelType::SMS;
          }
          else if (hashCode == VOICE_HASH)
          {
            return ChannelType::VOICE;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return ChannelType::EMAIL;
          }
          else if (hashCode == BAIDU_HASH)
          {
            return ChannelType::BAIDU;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ChannelType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelType>(hashCode);
          }

          return ChannelType::NOT_SET;
        }

        Aws::String GetNameForChannelType(ChannelType enumValue)
        {
          switch(enumValue)
          {
          case ChannelType::PUSH:
            return "PUSH";
          case ChannelType::GCM:
            return "GCM";
          case ChannelType::APNS:
            return "APNS";
          case ChannelType::APNS_SANDBOX:
            return "APNS_SANDBOX";
          case ChannelType::APNS_VOIP:
            return "APNS_VOIP";
          case ChannelType::APNS_VOIP_SANDBOX:
            return "APNS_VOIP_SANDBOX";
          case ChannelType::ADM:
            return "ADM";
          case ChannelType::SMS:
            return "SMS";
          case ChannelType::VOICE:
            return "VOICE";
          case ChannelType::EMAIL:
            return "EMAIL";
          case ChannelType::BAIDU:
            return "BAIDU";
          case ChannelType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelTypeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
