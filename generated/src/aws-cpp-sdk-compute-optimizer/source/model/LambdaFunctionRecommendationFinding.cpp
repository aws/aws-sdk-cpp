/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionRecommendationFinding.h>
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
      namespace LambdaFunctionRecommendationFindingMapper
      {

        static constexpr uint32_t Optimized_HASH = ConstExprHashingUtils::HashString("Optimized");
        static constexpr uint32_t NotOptimized_HASH = ConstExprHashingUtils::HashString("NotOptimized");
        static constexpr uint32_t Unavailable_HASH = ConstExprHashingUtils::HashString("Unavailable");


        LambdaFunctionRecommendationFinding GetLambdaFunctionRecommendationFindingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Optimized_HASH)
          {
            return LambdaFunctionRecommendationFinding::Optimized;
          }
          else if (hashCode == NotOptimized_HASH)
          {
            return LambdaFunctionRecommendationFinding::NotOptimized;
          }
          else if (hashCode == Unavailable_HASH)
          {
            return LambdaFunctionRecommendationFinding::Unavailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFunctionRecommendationFinding>(hashCode);
          }

          return LambdaFunctionRecommendationFinding::NOT_SET;
        }

        Aws::String GetNameForLambdaFunctionRecommendationFinding(LambdaFunctionRecommendationFinding enumValue)
        {
          switch(enumValue)
          {
          case LambdaFunctionRecommendationFinding::NOT_SET:
            return {};
          case LambdaFunctionRecommendationFinding::Optimized:
            return "Optimized";
          case LambdaFunctionRecommendationFinding::NotOptimized:
            return "NotOptimized";
          case LambdaFunctionRecommendationFinding::Unavailable:
            return "Unavailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaFunctionRecommendationFindingMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
