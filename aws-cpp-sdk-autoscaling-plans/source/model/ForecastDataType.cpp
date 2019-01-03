/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/autoscaling-plans/model/ForecastDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScalingPlans
  {
    namespace Model
    {
      namespace ForecastDataTypeMapper
      {

        static const int CapacityForecast_HASH = HashingUtils::HashString("CapacityForecast");
        static const int LoadForecast_HASH = HashingUtils::HashString("LoadForecast");
        static const int ScheduledActionMinCapacity_HASH = HashingUtils::HashString("ScheduledActionMinCapacity");
        static const int ScheduledActionMaxCapacity_HASH = HashingUtils::HashString("ScheduledActionMaxCapacity");


        ForecastDataType GetForecastDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CapacityForecast_HASH)
          {
            return ForecastDataType::CapacityForecast;
          }
          else if (hashCode == LoadForecast_HASH)
          {
            return ForecastDataType::LoadForecast;
          }
          else if (hashCode == ScheduledActionMinCapacity_HASH)
          {
            return ForecastDataType::ScheduledActionMinCapacity;
          }
          else if (hashCode == ScheduledActionMaxCapacity_HASH)
          {
            return ForecastDataType::ScheduledActionMaxCapacity;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ForecastDataType>(hashCode);
          }

          return ForecastDataType::NOT_SET;
        }

        Aws::String GetNameForForecastDataType(ForecastDataType enumValue)
        {
          switch(enumValue)
          {
          case ForecastDataType::CapacityForecast:
            return "CapacityForecast";
          case ForecastDataType::LoadForecast:
            return "LoadForecast";
          case ForecastDataType::ScheduledActionMinCapacity:
            return "ScheduledActionMinCapacity";
          case ForecastDataType::ScheduledActionMaxCapacity:
            return "ScheduledActionMaxCapacity";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ForecastDataTypeMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
