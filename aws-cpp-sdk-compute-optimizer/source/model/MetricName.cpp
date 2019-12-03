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

#include <aws/compute-optimizer/model/MetricName.h>
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
      namespace MetricNameMapper
      {

        static const int Cpu_HASH = HashingUtils::HashString("Cpu");
        static const int Memory_HASH = HashingUtils::HashString("Memory");


        MetricName GetMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cpu_HASH)
          {
            return MetricName::Cpu;
          }
          else if (hashCode == Memory_HASH)
          {
            return MetricName::Memory;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricName>(hashCode);
          }

          return MetricName::NOT_SET;
        }

        Aws::String GetNameForMetricName(MetricName enumValue)
        {
          switch(enumValue)
          {
          case MetricName::Cpu:
            return "Cpu";
          case MetricName::Memory:
            return "Memory";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
