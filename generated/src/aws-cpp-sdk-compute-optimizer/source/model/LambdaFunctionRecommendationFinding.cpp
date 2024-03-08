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

        static const int Optimized_HASH = HashingUtils::HashString("Optimized");
        static const int NotOptimized_HASH = HashingUtils::HashString("NotOptimized");
        static const int Unavailable_HASH = HashingUtils::HashString("Unavailable");


        LambdaFunctionRecommendationFinding GetLambdaFunctionRecommendationFindingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
