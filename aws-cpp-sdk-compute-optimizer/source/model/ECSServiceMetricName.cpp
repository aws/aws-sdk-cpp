/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceMetricName.h>
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
      namespace ECSServiceMetricNameMapper
      {

        static const int Cpu_HASH = HashingUtils::HashString("Cpu");
        static const int Memory_HASH = HashingUtils::HashString("Memory");


        ECSServiceMetricName GetECSServiceMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cpu_HASH)
          {
            return ECSServiceMetricName::Cpu;
          }
          else if (hashCode == Memory_HASH)
          {
            return ECSServiceMetricName::Memory;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ECSServiceMetricName>(hashCode);
          }

          return ECSServiceMetricName::NOT_SET;
        }

        Aws::String GetNameForECSServiceMetricName(ECSServiceMetricName enumValue)
        {
          switch(enumValue)
          {
          case ECSServiceMetricName::Cpu:
            return "Cpu";
          case ECSServiceMetricName::Memory:
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

      } // namespace ECSServiceMetricNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
