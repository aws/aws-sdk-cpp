/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsSessionFilterName.h>
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
      namespace AnalyticsSessionFilterNameMapper
      {

        static const int BotAliasId_HASH = HashingUtils::HashString("BotAliasId");
        static const int BotVersion_HASH = HashingUtils::HashString("BotVersion");
        static const int LocaleId_HASH = HashingUtils::HashString("LocaleId");
        static const int Modality_HASH = HashingUtils::HashString("Modality");
        static const int Channel_HASH = HashingUtils::HashString("Channel");
        static const int Duration_HASH = HashingUtils::HashString("Duration");
        static const int ConversationEndState_HASH = HashingUtils::HashString("ConversationEndState");
        static const int SessionId_HASH = HashingUtils::HashString("SessionId");
        static const int OriginatingRequestId_HASH = HashingUtils::HashString("OriginatingRequestId");
        static const int IntentPath_HASH = HashingUtils::HashString("IntentPath");


        AnalyticsSessionFilterName GetAnalyticsSessionFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotAliasId_HASH)
          {
            return AnalyticsSessionFilterName::BotAliasId;
          }
          else if (hashCode == BotVersion_HASH)
          {
            return AnalyticsSessionFilterName::BotVersion;
          }
          else if (hashCode == LocaleId_HASH)
          {
            return AnalyticsSessionFilterName::LocaleId;
          }
          else if (hashCode == Modality_HASH)
          {
            return AnalyticsSessionFilterName::Modality;
          }
          else if (hashCode == Channel_HASH)
          {
            return AnalyticsSessionFilterName::Channel;
          }
          else if (hashCode == Duration_HASH)
          {
            return AnalyticsSessionFilterName::Duration;
          }
          else if (hashCode == ConversationEndState_HASH)
          {
            return AnalyticsSessionFilterName::ConversationEndState;
          }
          else if (hashCode == SessionId_HASH)
          {
            return AnalyticsSessionFilterName::SessionId;
          }
          else if (hashCode == OriginatingRequestId_HASH)
          {
            return AnalyticsSessionFilterName::OriginatingRequestId;
          }
          else if (hashCode == IntentPath_HASH)
          {
            return AnalyticsSessionFilterName::IntentPath;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsSessionFilterName>(hashCode);
          }

          return AnalyticsSessionFilterName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsSessionFilterName(AnalyticsSessionFilterName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsSessionFilterName::NOT_SET:
            return {};
          case AnalyticsSessionFilterName::BotAliasId:
            return "BotAliasId";
          case AnalyticsSessionFilterName::BotVersion:
            return "BotVersion";
          case AnalyticsSessionFilterName::LocaleId:
            return "LocaleId";
          case AnalyticsSessionFilterName::Modality:
            return "Modality";
          case AnalyticsSessionFilterName::Channel:
            return "Channel";
          case AnalyticsSessionFilterName::Duration:
            return "Duration";
          case AnalyticsSessionFilterName::ConversationEndState:
            return "ConversationEndState";
          case AnalyticsSessionFilterName::SessionId:
            return "SessionId";
          case AnalyticsSessionFilterName::OriginatingRequestId:
            return "OriginatingRequestId";
          case AnalyticsSessionFilterName::IntentPath:
            return "IntentPath";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsSessionFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
