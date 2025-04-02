/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/MetricSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationSignals
  {
    namespace Model
    {
      namespace MetricSourceTypeMapper
      {

        static const int ServiceOperation_HASH = HashingUtils::HashString("ServiceOperation");
        static const int CloudWatchMetric_HASH = HashingUtils::HashString("CloudWatchMetric");
        static const int ServiceDependency_HASH = HashingUtils::HashString("ServiceDependency");


        MetricSourceType GetMetricSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ServiceOperation_HASH)
          {
            return MetricSourceType::ServiceOperation;
          }
          else if (hashCode == CloudWatchMetric_HASH)
          {
            return MetricSourceType::CloudWatchMetric;
          }
          else if (hashCode == ServiceDependency_HASH)
          {
            return MetricSourceType::ServiceDependency;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricSourceType>(hashCode);
          }

          return MetricSourceType::NOT_SET;
        }

        Aws::String GetNameForMetricSourceType(MetricSourceType enumValue)
        {
          switch(enumValue)
          {
          case MetricSourceType::NOT_SET:
            return {};
          case MetricSourceType::ServiceOperation:
            return "ServiceOperation";
          case MetricSourceType::CloudWatchMetric:
            return "CloudWatchMetric";
          case MetricSourceType::ServiceDependency:
            return "ServiceDependency";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricSourceTypeMapper
    } // namespace Model
  } // namespace ApplicationSignals
} // namespace Aws
