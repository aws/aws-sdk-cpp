/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentStageFilterName.h>
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
      namespace AnalyticsIntentStageFilterNameMapper
      {

        static const int BotAliasId_HASH = HashingUtils::HashString("BotAliasId");
        static const int BotVersion_HASH = HashingUtils::HashString("BotVersion");
        static const int LocaleId_HASH = HashingUtils::HashString("LocaleId");
        static const int Modality_HASH = HashingUtils::HashString("Modality");
        static const int Channel_HASH = HashingUtils::HashString("Channel");
        static const int SessionId_HASH = HashingUtils::HashString("SessionId");
        static const int OriginatingRequestId_HASH = HashingUtils::HashString("OriginatingRequestId");
        static const int IntentName_HASH = HashingUtils::HashString("IntentName");
        static const int IntentStageName_HASH = HashingUtils::HashString("IntentStageName");


        AnalyticsIntentStageFilterName GetAnalyticsIntentStageFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotAliasId_HASH)
          {
            return AnalyticsIntentStageFilterName::BotAliasId;
          }
          else if (hashCode == BotVersion_HASH)
          {
            return AnalyticsIntentStageFilterName::BotVersion;
          }
          else if (hashCode == LocaleId_HASH)
          {
            return AnalyticsIntentStageFilterName::LocaleId;
          }
          else if (hashCode == Modality_HASH)
          {
            return AnalyticsIntentStageFilterName::Modality;
          }
          else if (hashCode == Channel_HASH)
          {
            return AnalyticsIntentStageFilterName::Channel;
          }
          else if (hashCode == SessionId_HASH)
          {
            return AnalyticsIntentStageFilterName::SessionId;
          }
          else if (hashCode == OriginatingRequestId_HASH)
          {
            return AnalyticsIntentStageFilterName::OriginatingRequestId;
          }
          else if (hashCode == IntentName_HASH)
          {
            return AnalyticsIntentStageFilterName::IntentName;
          }
          else if (hashCode == IntentStageName_HASH)
          {
            return AnalyticsIntentStageFilterName::IntentStageName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsIntentStageFilterName>(hashCode);
          }

          return AnalyticsIntentStageFilterName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsIntentStageFilterName(AnalyticsIntentStageFilterName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsIntentStageFilterName::NOT_SET:
            return {};
          case AnalyticsIntentStageFilterName::BotAliasId:
            return "BotAliasId";
          case AnalyticsIntentStageFilterName::BotVersion:
            return "BotVersion";
          case AnalyticsIntentStageFilterName::LocaleId:
            return "LocaleId";
          case AnalyticsIntentStageFilterName::Modality:
            return "Modality";
          case AnalyticsIntentStageFilterName::Channel:
            return "Channel";
          case AnalyticsIntentStageFilterName::SessionId:
            return "SessionId";
          case AnalyticsIntentStageFilterName::OriginatingRequestId:
            return "OriginatingRequestId";
          case AnalyticsIntentStageFilterName::IntentName:
            return "IntentName";
          case AnalyticsIntentStageFilterName::IntentStageName:
            return "IntentStageName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsIntentStageFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
