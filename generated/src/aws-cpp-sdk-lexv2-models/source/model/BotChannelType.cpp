/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotChannelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace BotChannelTypeMapper
      {

        static const int Facebook_HASH = HashingUtils::HashString("Facebook");
        static const int Slack_HASH = HashingUtils::HashString("Slack");
        static const int TwilioSms_HASH = HashingUtils::HashString("TwilioSms");


        BotChannelType GetBotChannelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Facebook_HASH)
          {
            return BotChannelType::Facebook;
          }
          else if (hashCode == Slack_HASH)
          {
            return BotChannelType::Slack;
          }
          else if (hashCode == TwilioSms_HASH)
          {
            return BotChannelType::TwilioSms;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotChannelType>(hashCode);
          }

          return BotChannelType::NOT_SET;
        }

        Aws::String GetNameForBotChannelType(BotChannelType enumValue)
        {
          switch(enumValue)
          {
          case BotChannelType::Facebook:
            return "Facebook";
          case BotChannelType::Slack:
            return "Slack";
          case BotChannelType::TwilioSms:
            return "TwilioSms";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotChannelTypeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
