/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsCommonFilterName.h>
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
      namespace AnalyticsCommonFilterNameMapper
      {

        static const int BotAliasId_HASH = HashingUtils::HashString("BotAliasId");
        static const int BotVersion_HASH = HashingUtils::HashString("BotVersion");
        static const int LocaleId_HASH = HashingUtils::HashString("LocaleId");
        static const int Modality_HASH = HashingUtils::HashString("Modality");
        static const int Channel_HASH = HashingUtils::HashString("Channel");


        AnalyticsCommonFilterName GetAnalyticsCommonFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BotAliasId_HASH)
          {
            return AnalyticsCommonFilterName::BotAliasId;
          }
          else if (hashCode == BotVersion_HASH)
          {
            return AnalyticsCommonFilterName::BotVersion;
          }
          else if (hashCode == LocaleId_HASH)
          {
            return AnalyticsCommonFilterName::LocaleId;
          }
          else if (hashCode == Modality_HASH)
          {
            return AnalyticsCommonFilterName::Modality;
          }
          else if (hashCode == Channel_HASH)
          {
            return AnalyticsCommonFilterName::Channel;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsCommonFilterName>(hashCode);
          }

          return AnalyticsCommonFilterName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsCommonFilterName(AnalyticsCommonFilterName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsCommonFilterName::NOT_SET:
            return {};
          case AnalyticsCommonFilterName::BotAliasId:
            return "BotAliasId";
          case AnalyticsCommonFilterName::BotVersion:
            return "BotVersion";
          case AnalyticsCommonFilterName::LocaleId:
            return "LocaleId";
          case AnalyticsCommonFilterName::Modality:
            return "Modality";
          case AnalyticsCommonFilterName::Channel:
            return "Channel";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsCommonFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
