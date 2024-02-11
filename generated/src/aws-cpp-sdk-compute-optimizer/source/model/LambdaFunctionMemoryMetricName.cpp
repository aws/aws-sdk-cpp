/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionMemoryMetricName.h>
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
      namespace LambdaFunctionMemoryMetricNameMapper
      {

        static const int Duration_HASH = HashingUtils::HashString("Duration");


        LambdaFunctionMemoryMetricName GetLambdaFunctionMemoryMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Duration_HASH)
          {
            return LambdaFunctionMemoryMetricName::Duration;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFunctionMemoryMetricName>(hashCode);
          }

          return LambdaFunctionMemoryMetricName::NOT_SET;
        }

        Aws::String GetNameForLambdaFunctionMemoryMetricName(LambdaFunctionMemoryMetricName enumValue)
        {
          switch(enumValue)
          {
          case LambdaFunctionMemoryMetricName::NOT_SET:
            return {};
          case LambdaFunctionMemoryMetricName::Duration:
            return "Duration";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaFunctionMemoryMetricNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
