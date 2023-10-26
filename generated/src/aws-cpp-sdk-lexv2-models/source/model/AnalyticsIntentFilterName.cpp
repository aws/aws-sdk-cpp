/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentFilterName.h>
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
      namespace AnalyticsIntentFilterNameMapper
      {

        static const int BotAliasId_HASH = HashingUtils::HashString("BotAliasId");
        static const int BotVersion_HASH = HashingUtils::HashString("BotVersion");
        static const int LocaleId_HASH = HashingUtils::HashString("LocaleId");
        static const int Modality_HASH = HashingUtils::HashString("Modality");
        static const int Channel_HASH = HashingUtils::HashString("Channel");
        static const int SessionId_HASH = HashingUtils::HashString("SessionId");
        static const int OriginatingRequestId_HASH = HashingUtils::HashString("OriginatingRequestId");
        static const int IntentName_HASH = HashingUtils::HashString("IntentName");
        static const int IntentEndState_HASH = HashingUtils::HashString("IntentEndState");


        AnalyticsIntentFilterName GetAnalyticsIntentFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotAliasId_HASH)
          {
            return AnalyticsIntentFilterName::BotAliasId;
          }
          else if (hashCode == BotVersion_HASH)
          {
            return AnalyticsIntentFilterName::BotVersion;
          }
          else if (hashCode == LocaleId_HASH)
          {
            return AnalyticsIntentFilterName::LocaleId;
          }
          else if (hashCode == Modality_HASH)
          {
            return AnalyticsIntentFilterName::Modality;
          }
          else if (hashCode == Channel_HASH)
          {
            return AnalyticsIntentFilterName::Channel;
          }
          else if (hashCode == SessionId_HASH)
          {
            return AnalyticsIntentFilterName::SessionId;
          }
          else if (hashCode == OriginatingRequestId_HASH)
          {
            return AnalyticsIntentFilterName::OriginatingRequestId;
          }
          else if (hashCode == IntentName_HASH)
          {
            return AnalyticsIntentFilterName::IntentName;
          }
          else if (hashCode == IntentEndState_HASH)
          {
            return AnalyticsIntentFilterName::IntentEndState;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsIntentFilterName>(hashCode);
          }

          return AnalyticsIntentFilterName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsIntentFilterName(AnalyticsIntentFilterName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsIntentFilterName::NOT_SET:
            return {};
          case AnalyticsIntentFilterName::BotAliasId:
            return "BotAliasId";
          case AnalyticsIntentFilterName::BotVersion:
            return "BotVersion";
          case AnalyticsIntentFilterName::LocaleId:
            return "LocaleId";
          case AnalyticsIntentFilterName::Modality:
            return "Modality";
          case AnalyticsIntentFilterName::Channel:
            return "Channel";
          case AnalyticsIntentFilterName::SessionId:
            return "SessionId";
          case AnalyticsIntentFilterName::OriginatingRequestId:
            return "OriginatingRequestId";
          case AnalyticsIntentFilterName::IntentName:
            return "IntentName";
          case AnalyticsIntentFilterName::IntentEndState:
            return "IntentEndState";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsIntentFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
