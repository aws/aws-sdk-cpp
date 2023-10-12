/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsSessionMetricName.h>
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
      namespace AnalyticsSessionMetricNameMapper
      {

        static constexpr uint32_t Count_HASH = ConstExprHashingUtils::HashString("Count");
        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t Failure_HASH = ConstExprHashingUtils::HashString("Failure");
        static constexpr uint32_t Dropped_HASH = ConstExprHashingUtils::HashString("Dropped");
        static constexpr uint32_t Duration_HASH = ConstExprHashingUtils::HashString("Duration");
        static constexpr uint32_t TurnsPerConversation_HASH = ConstExprHashingUtils::HashString("TurnsPerConversation");
        static constexpr uint32_t Concurrency_HASH = ConstExprHashingUtils::HashString("Concurrency");


        AnalyticsSessionMetricName GetAnalyticsSessionMetricNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Count_HASH)
          {
            return AnalyticsSessionMetricName::Count;
          }
          else if (hashCode == Success_HASH)
          {
            return AnalyticsSessionMetricName::Success;
          }
          else if (hashCode == Failure_HASH)
          {
            return AnalyticsSessionMetricName::Failure;
          }
          else if (hashCode == Dropped_HASH)
          {
            return AnalyticsSessionMetricName::Dropped;
          }
          else if (hashCode == Duration_HASH)
          {
            return AnalyticsSessionMetricName::Duration;
          }
          else if (hashCode == TurnsPerConversation_HASH)
          {
            return AnalyticsSessionMetricName::TurnsPerConversation;
          }
          else if (hashCode == Concurrency_HASH)
          {
            return AnalyticsSessionMetricName::Concurrency;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsSessionMetricName>(hashCode);
          }

          return AnalyticsSessionMetricName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsSessionMetricName(AnalyticsSessionMetricName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsSessionMetricName::NOT_SET:
            return {};
          case AnalyticsSessionMetricName::Count:
            return "Count";
          case AnalyticsSessionMetricName::Success:
            return "Success";
          case AnalyticsSessionMetricName::Failure:
            return "Failure";
          case AnalyticsSessionMetricName::Dropped:
            return "Dropped";
          case AnalyticsSessionMetricName::Duration:
            return "Duration";
          case AnalyticsSessionMetricName::TurnsPerConversation:
            return "TurnsPerConversation";
          case AnalyticsSessionMetricName::Concurrency:
            return "Concurrency";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsSessionMetricNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
