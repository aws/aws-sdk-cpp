/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/MetricSourceProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace MetricSourceProviderMapper
      {

        static const int CloudWatchApplicationInsights_HASH = HashingUtils::HashString("CloudWatchApplicationInsights");


        MetricSourceProvider GetMetricSourceProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CloudWatchApplicationInsights_HASH)
          {
            return MetricSourceProvider::CloudWatchApplicationInsights;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricSourceProvider>(hashCode);
          }

          return MetricSourceProvider::NOT_SET;
        }

        Aws::String GetNameForMetricSourceProvider(MetricSourceProvider enumValue)
        {
          switch(enumValue)
          {
          case MetricSourceProvider::NOT_SET:
            return {};
          case MetricSourceProvider::CloudWatchApplicationInsights:
            return "CloudWatchApplicationInsights";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricSourceProviderMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
