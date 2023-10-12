/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsUtteranceMetricName.h>
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
      namespace AnalyticsUtteranceMetricNameMapper
      {

        static constexpr uint32_t Count_HASH = ConstExprHashingUtils::HashString("Count");
        static constexpr uint32_t Missed_HASH = ConstExprHashingUtils::HashString("Missed");
        static constexpr uint32_t Detected_HASH = ConstExprHashingUtils::HashString("Detected");
        static constexpr uint32_t UtteranceTimestamp_HASH = ConstExprHashingUtils::HashString("UtteranceTimestamp");


        AnalyticsUtteranceMetricName GetAnalyticsUtteranceMetricNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Count_HASH)
          {
            return AnalyticsUtteranceMetricName::Count;
          }
          else if (hashCode == Missed_HASH)
          {
            return AnalyticsUtteranceMetricName::Missed;
          }
          else if (hashCode == Detected_HASH)
          {
            return AnalyticsUtteranceMetricName::Detected;
          }
          else if (hashCode == UtteranceTimestamp_HASH)
          {
            return AnalyticsUtteranceMetricName::UtteranceTimestamp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsUtteranceMetricName>(hashCode);
          }

          return AnalyticsUtteranceMetricName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsUtteranceMetricName(AnalyticsUtteranceMetricName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsUtteranceMetricName::NOT_SET:
            return {};
          case AnalyticsUtteranceMetricName::Count:
            return "Count";
          case AnalyticsUtteranceMetricName::Missed:
            return "Missed";
          case AnalyticsUtteranceMetricName::Detected:
            return "Detected";
          case AnalyticsUtteranceMetricName::UtteranceTimestamp:
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

      } // namespace AnalyticsUtteranceMetricNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
