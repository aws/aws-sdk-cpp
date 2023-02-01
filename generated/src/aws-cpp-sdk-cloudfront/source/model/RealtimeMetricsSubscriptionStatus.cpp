/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/RealtimeMetricsSubscriptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace RealtimeMetricsSubscriptionStatusMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        RealtimeMetricsSubscriptionStatus GetRealtimeMetricsSubscriptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return RealtimeMetricsSubscriptionStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return RealtimeMetricsSubscriptionStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealtimeMetricsSubscriptionStatus>(hashCode);
          }

          return RealtimeMetricsSubscriptionStatus::NOT_SET;
        }

        Aws::String GetNameForRealtimeMetricsSubscriptionStatus(RealtimeMetricsSubscriptionStatus enumValue)
        {
          switch(enumValue)
          {
          case RealtimeMetricsSubscriptionStatus::Enabled:
            return "Enabled";
          case RealtimeMetricsSubscriptionStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RealtimeMetricsSubscriptionStatusMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
