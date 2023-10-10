/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionRecommendationFilterName.h>
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
      namespace LambdaFunctionRecommendationFilterNameMapper
      {

        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int FindingReasonCode_HASH = HashingUtils::HashString("FindingReasonCode");


        LambdaFunctionRecommendationFilterName GetLambdaFunctionRecommendationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Finding_HASH)
          {
            return LambdaFunctionRecommendationFilterName::Finding;
          }
          else if (hashCode == FindingReasonCode_HASH)
          {
            return LambdaFunctionRecommendationFilterName::FindingReasonCode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFunctionRecommendationFilterName>(hashCode);
          }

          return LambdaFunctionRecommendationFilterName::NOT_SET;
        }

        Aws::String GetNameForLambdaFunctionRecommendationFilterName(LambdaFunctionRecommendationFilterName enumValue)
        {
          switch(enumValue)
          {
          case LambdaFunctionRecommendationFilterName::NOT_SET:
            return {};
          case LambdaFunctionRecommendationFilterName::Finding:
            return "Finding";
          case LambdaFunctionRecommendationFilterName::FindingReasonCode:
            return "FindingReasonCode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaFunctionRecommendationFilterNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
