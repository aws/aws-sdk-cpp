/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentMetricName.h>
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
      namespace AnalyticsIntentMetricNameMapper
      {

        static const int Count_HASH = HashingUtils::HashString("Count");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failure_HASH = HashingUtils::HashString("Failure");
        static const int Switched_HASH = HashingUtils::HashString("Switched");
        static const int Dropped_HASH = HashingUtils::HashString("Dropped");


        AnalyticsIntentMetricName GetAnalyticsIntentMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Count_HASH)
          {
            return AnalyticsIntentMetricName::Count;
          }
          else if (hashCode == Success_HASH)
          {
            return AnalyticsIntentMetricName::Success;
          }
          else if (hashCode == Failure_HASH)
          {
            return AnalyticsIntentMetricName::Failure;
          }
          else if (hashCode == Switched_HASH)
          {
            return AnalyticsIntentMetricName::Switched;
          }
          else if (hashCode == Dropped_HASH)
          {
            return AnalyticsIntentMetricName::Dropped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsIntentMetricName>(hashCode);
          }

          return AnalyticsIntentMetricName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsIntentMetricName(AnalyticsIntentMetricName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsIntentMetricName::NOT_SET:
            return {};
          case AnalyticsIntentMetricName::Count:
            return "Count";
          case AnalyticsIntentMetricName::Success:
            return "Success";
          case AnalyticsIntentMetricName::Failure:
            return "Failure";
          case AnalyticsIntentMetricName::Switched:
            return "Switched";
          case AnalyticsIntentMetricName::Dropped:
            return "Dropped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsIntentMetricNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
