/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/ChannelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace ChannelTypeMapper
      {

        static const int Facebook_HASH = HashingUtils::HashString("Facebook");
        static const int Slack_HASH = HashingUtils::HashString("Slack");
        static const int Twilio_Sms_HASH = HashingUtils::HashString("Twilio-Sms");
        static const int Kik_HASH = HashingUtils::HashString("Kik");


        ChannelType GetChannelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Facebook_HASH)
          {
            return ChannelType::Facebook;
          }
          else if (hashCode == Slack_HASH)
          {
            return ChannelType::Slack;
          }
          else if (hashCode == Twilio_Sms_HASH)
          {
            return ChannelType::Twilio_Sms;
          }
          else if (hashCode == Kik_HASH)
          {
            return ChannelType::Kik;
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
          case ChannelType::Facebook:
            return "Facebook";
          case ChannelType::Slack:
            return "Slack";
          case ChannelType::Twilio_Sms:
            return "Twilio-Sms";
          case ChannelType::Kik:
            return "Kik";
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
  } // namespace LexModelBuildingService
} // namespace Aws
