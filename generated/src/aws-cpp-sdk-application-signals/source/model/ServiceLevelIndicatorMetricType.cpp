/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceLevelIndicatorMetricType.h>
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
      namespace ServiceLevelIndicatorMetricTypeMapper
      {

        static const int LATENCY_HASH = HashingUtils::HashString("LATENCY");
        static const int AVAILABILITY_HASH = HashingUtils::HashString("AVAILABILITY");


        ServiceLevelIndicatorMetricType GetServiceLevelIndicatorMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LATENCY_HASH)
          {
            return ServiceLevelIndicatorMetricType::LATENCY;
          }
          else if (hashCode == AVAILABILITY_HASH)
          {
            return ServiceLevelIndicatorMetricType::AVAILABILITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceLevelIndicatorMetricType>(hashCode);
          }

          return ServiceLevelIndicatorMetricType::NOT_SET;
        }

        Aws::String GetNameForServiceLevelIndicatorMetricType(ServiceLevelIndicatorMetricType enumValue)
        {
          switch(enumValue)
          {
          case ServiceLevelIndicatorMetricType::NOT_SET:
            return {};
          case ServiceLevelIndicatorMetricType::LATENCY:
            return "LATENCY";
          case ServiceLevelIndicatorMetricType::AVAILABILITY:
            return "AVAILABILITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceLevelIndicatorMetricTypeMapper
    } // namespace Model
  } // namespace ApplicationSignals
} // namespace Aws
