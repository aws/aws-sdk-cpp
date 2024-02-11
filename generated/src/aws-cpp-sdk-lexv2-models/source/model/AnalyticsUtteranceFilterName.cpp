/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsUtteranceFilterName.h>
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
      namespace AnalyticsUtteranceFilterNameMapper
      {

        static const int BotAliasId_HASH = HashingUtils::HashString("BotAliasId");
        static const int BotVersion_HASH = HashingUtils::HashString("BotVersion");
        static const int LocaleId_HASH = HashingUtils::HashString("LocaleId");
        static const int Modality_HASH = HashingUtils::HashString("Modality");
        static const int Channel_HASH = HashingUtils::HashString("Channel");
        static const int SessionId_HASH = HashingUtils::HashString("SessionId");
        static const int OriginatingRequestId_HASH = HashingUtils::HashString("OriginatingRequestId");
        static const int UtteranceState_HASH = HashingUtils::HashString("UtteranceState");
        static const int UtteranceText_HASH = HashingUtils::HashString("UtteranceText");


        AnalyticsUtteranceFilterName GetAnalyticsUtteranceFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotAliasId_HASH)
          {
            return AnalyticsUtteranceFilterName::BotAliasId;
          }
          else if (hashCode == BotVersion_HASH)
          {
            return AnalyticsUtteranceFilterName::BotVersion;
          }
          else if (hashCode == LocaleId_HASH)
          {
            return AnalyticsUtteranceFilterName::LocaleId;
          }
          else if (hashCode == Modality_HASH)
          {
            return AnalyticsUtteranceFilterName::Modality;
          }
          else if (hashCode == Channel_HASH)
          {
            return AnalyticsUtteranceFilterName::Channel;
          }
          else if (hashCode == SessionId_HASH)
          {
            return AnalyticsUtteranceFilterName::SessionId;
          }
          else if (hashCode == OriginatingRequestId_HASH)
          {
            return AnalyticsUtteranceFilterName::OriginatingRequestId;
          }
          else if (hashCode == UtteranceState_HASH)
          {
            return AnalyticsUtteranceFilterName::UtteranceState;
          }
          else if (hashCode == UtteranceText_HASH)
          {
            return AnalyticsUtteranceFilterName::UtteranceText;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsUtteranceFilterName>(hashCode);
          }

          return AnalyticsUtteranceFilterName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsUtteranceFilterName(AnalyticsUtteranceFilterName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsUtteranceFilterName::NOT_SET:
            return {};
          case AnalyticsUtteranceFilterName::BotAliasId:
            return "BotAliasId";
          case AnalyticsUtteranceFilterName::BotVersion:
            return "BotVersion";
          case AnalyticsUtteranceFilterName::LocaleId:
            return "LocaleId";
          case AnalyticsUtteranceFilterName::Modality:
            return "Modality";
          case AnalyticsUtteranceFilterName::Channel:
            return "Channel";
          case AnalyticsUtteranceFilterName::SessionId:
            return "SessionId";
          case AnalyticsUtteranceFilterName::OriginatingRequestId:
            return "OriginatingRequestId";
          case AnalyticsUtteranceFilterName::UtteranceState:
            return "UtteranceState";
          case AnalyticsUtteranceFilterName::UtteranceText:
            return "UtteranceText";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsUtteranceFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
