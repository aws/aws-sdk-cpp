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

        static constexpr uint32_t BotAliasId_HASH = ConstExprHashingUtils::HashString("BotAliasId");
        static constexpr uint32_t BotVersion_HASH = ConstExprHashingUtils::HashString("BotVersion");
        static constexpr uint32_t LocaleId_HASH = ConstExprHashingUtils::HashString("LocaleId");
        static constexpr uint32_t Modality_HASH = ConstExprHashingUtils::HashString("Modality");
        static constexpr uint32_t Channel_HASH = ConstExprHashingUtils::HashString("Channel");
        static constexpr uint32_t Duration_HASH = ConstExprHashingUtils::HashString("Duration");
        static constexpr uint32_t ConversationEndState_HASH = ConstExprHashingUtils::HashString("ConversationEndState");
        static constexpr uint32_t SessionId_HASH = ConstExprHashingUtils::HashString("SessionId");
        static constexpr uint32_t OriginatingRequestId_HASH = ConstExprHashingUtils::HashString("OriginatingRequestId");
        static constexpr uint32_t IntentPath_HASH = ConstExprHashingUtils::HashString("IntentPath");


        AnalyticsSessionFilterName GetAnalyticsSessionFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
