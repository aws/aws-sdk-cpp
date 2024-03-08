/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionMetricName.h>
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
      namespace LambdaFunctionMetricNameMapper
      {

        static const int Duration_HASH = HashingUtils::HashString("Duration");
        static const int Memory_HASH = HashingUtils::HashString("Memory");


        LambdaFunctionMetricName GetLambdaFunctionMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Duration_HASH)
          {
            return LambdaFunctionMetricName::Duration;
          }
          else if (hashCode == Memory_HASH)
          {
            return LambdaFunctionMetricName::Memory;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFunctionMetricName>(hashCode);
          }

          return LambdaFunctionMetricName::NOT_SET;
        }

        Aws::String GetNameForLambdaFunctionMetricName(LambdaFunctionMetricName enumValue)
        {
          switch(enumValue)
          {
          case LambdaFunctionMetricName::NOT_SET:
            return {};
          case LambdaFunctionMetricName::Duration:
            return "Duration";
          case LambdaFunctionMetricName::Memory:
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

      } // namespace LambdaFunctionMetricNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
