/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/MetricDestination.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchRUM
  {
    namespace Model
    {
      namespace MetricDestinationMapper
      {

        static const int CloudWatch_HASH = HashingUtils::HashString("CloudWatch");
        static const int Evidently_HASH = HashingUtils::HashString("Evidently");


        MetricDestination GetMetricDestinationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CloudWatch_HASH)
          {
            return MetricDestination::CloudWatch;
          }
          else if (hashCode == Evidently_HASH)
          {
            return MetricDestination::Evidently;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricDestination>(hashCode);
          }

          return MetricDestination::NOT_SET;
        }

        Aws::String GetNameForMetricDestination(MetricDestination enumValue)
        {
          switch(enumValue)
          {
          case MetricDestination::CloudWatch:
            return "CloudWatch";
          case MetricDestination::Evidently:
            return "Evidently";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricDestinationMapper
    } // namespace Model
  } // namespace CloudWatchRUM
} // namespace Aws
