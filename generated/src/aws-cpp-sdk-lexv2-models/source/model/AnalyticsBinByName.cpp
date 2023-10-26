/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsBinByName.h>
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
      namespace AnalyticsBinByNameMapper
      {

        static const int ConversationStartTime_HASH = HashingUtils::HashString("ConversationStartTime");
        static const int UtteranceTimestamp_HASH = HashingUtils::HashString("UtteranceTimestamp");


        AnalyticsBinByName GetAnalyticsBinByNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConversationStartTime_HASH)
          {
            return AnalyticsBinByName::ConversationStartTime;
          }
          else if (hashCode == UtteranceTimestamp_HASH)
          {
            return AnalyticsBinByName::UtteranceTimestamp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsBinByName>(hashCode);
          }

          return AnalyticsBinByName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsBinByName(AnalyticsBinByName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsBinByName::NOT_SET:
            return {};
          case AnalyticsBinByName::ConversationStartTime:
            return "ConversationStartTime";
          case AnalyticsBinByName::UtteranceTimestamp:
            return "UtteranceTimestamp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsBinByNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
