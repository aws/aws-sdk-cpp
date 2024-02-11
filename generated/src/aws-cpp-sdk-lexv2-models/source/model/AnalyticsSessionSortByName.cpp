/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsSessionSortByName.h>
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
      namespace AnalyticsSessionSortByNameMapper
      {

        static const int ConversationStartTime_HASH = HashingUtils::HashString("ConversationStartTime");
        static const int NumberOfTurns_HASH = HashingUtils::HashString("NumberOfTurns");
        static const int Duration_HASH = HashingUtils::HashString("Duration");


        AnalyticsSessionSortByName GetAnalyticsSessionSortByNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConversationStartTime_HASH)
          {
            return AnalyticsSessionSortByName::ConversationStartTime;
          }
          else if (hashCode == NumberOfTurns_HASH)
          {
            return AnalyticsSessionSortByName::NumberOfTurns;
          }
          else if (hashCode == Duration_HASH)
          {
            return AnalyticsSessionSortByName::Duration;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsSessionSortByName>(hashCode);
          }

          return AnalyticsSessionSortByName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsSessionSortByName(AnalyticsSessionSortByName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsSessionSortByName::NOT_SET:
            return {};
          case AnalyticsSessionSortByName::ConversationStartTime:
            return "ConversationStartTime";
          case AnalyticsSessionSortByName::NumberOfTurns:
            return "NumberOfTurns";
          case AnalyticsSessionSortByName::Duration:
            return "Duration";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsSessionSortByNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
