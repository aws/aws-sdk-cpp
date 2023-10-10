/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentStageMetricName.h>
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
      namespace AnalyticsIntentStageMetricNameMapper
      {

        static const int Count_HASH = HashingUtils::HashString("Count");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Dropped_HASH = HashingUtils::HashString("Dropped");
        static const int Retry_HASH = HashingUtils::HashString("Retry");


        AnalyticsIntentStageMetricName GetAnalyticsIntentStageMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Count_HASH)
          {
            return AnalyticsIntentStageMetricName::Count;
          }
          else if (hashCode == Success_HASH)
          {
            return AnalyticsIntentStageMetricName::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return AnalyticsIntentStageMetricName::Failed;
          }
          else if (hashCode == Dropped_HASH)
          {
            return AnalyticsIntentStageMetricName::Dropped;
          }
          else if (hashCode == Retry_HASH)
          {
            return AnalyticsIntentStageMetricName::Retry;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsIntentStageMetricName>(hashCode);
          }

          return AnalyticsIntentStageMetricName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsIntentStageMetricName(AnalyticsIntentStageMetricName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsIntentStageMetricName::NOT_SET:
            return {};
          case AnalyticsIntentStageMetricName::Count:
            return "Count";
          case AnalyticsIntentStageMetricName::Success:
            return "Success";
          case AnalyticsIntentStageMetricName::Failed:
            return "Failed";
          case AnalyticsIntentStageMetricName::Dropped:
            return "Dropped";
          case AnalyticsIntentStageMetricName::Retry:
            return "Retry";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsIntentStageMetricNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
