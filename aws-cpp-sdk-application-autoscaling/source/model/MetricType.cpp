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

#include <aws/application-autoscaling/model/MetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace MetricTypeMapper
      {

        static const int DynamoDBReadCapacityUtilization_HASH = HashingUtils::HashString("DynamoDBReadCapacityUtilization");
        static const int DynamoDBWriteCapacityUtilization_HASH = HashingUtils::HashString("DynamoDBWriteCapacityUtilization");


        MetricType GetMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DynamoDBReadCapacityUtilization_HASH)
          {
            return MetricType::DynamoDBReadCapacityUtilization;
          }
          else if (hashCode == DynamoDBWriteCapacityUtilization_HASH)
          {
            return MetricType::DynamoDBWriteCapacityUtilization;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricType>(hashCode);
          }

          return MetricType::NOT_SET;
        }

        Aws::String GetNameForMetricType(MetricType enumValue)
        {
          switch(enumValue)
          {
          case MetricType::DynamoDBReadCapacityUtilization:
            return "DynamoDBReadCapacityUtilization";
          case MetricType::DynamoDBWriteCapacityUtilization:
            return "DynamoDBWriteCapacityUtilization";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MetricTypeMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
