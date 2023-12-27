/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionRecommendationFindingReasonCode.h>
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
      namespace LambdaFunctionRecommendationFindingReasonCodeMapper
      {

        static const int MemoryOverprovisioned_HASH = HashingUtils::HashString("MemoryOverprovisioned");
        static const int MemoryUnderprovisioned_HASH = HashingUtils::HashString("MemoryUnderprovisioned");
        static const int InsufficientData_HASH = HashingUtils::HashString("InsufficientData");
        static const int Inconclusive_HASH = HashingUtils::HashString("Inconclusive");


        LambdaFunctionRecommendationFindingReasonCode GetLambdaFunctionRecommendationFindingReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MemoryOverprovisioned_HASH)
          {
            return LambdaFunctionRecommendationFindingReasonCode::MemoryOverprovisioned;
          }
          else if (hashCode == MemoryUnderprovisioned_HASH)
          {
            return LambdaFunctionRecommendationFindingReasonCode::MemoryUnderprovisioned;
          }
          else if (hashCode == InsufficientData_HASH)
          {
            return LambdaFunctionRecommendationFindingReasonCode::InsufficientData;
          }
          else if (hashCode == Inconclusive_HASH)
          {
            return LambdaFunctionRecommendationFindingReasonCode::Inconclusive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFunctionRecommendationFindingReasonCode>(hashCode);
          }

          return LambdaFunctionRecommendationFindingReasonCode::NOT_SET;
        }

        Aws::String GetNameForLambdaFunctionRecommendationFindingReasonCode(LambdaFunctionRecommendationFindingReasonCode enumValue)
        {
          switch(enumValue)
          {
          case LambdaFunctionRecommendationFindingReasonCode::NOT_SET:
            return {};
          case LambdaFunctionRecommendationFindingReasonCode::MemoryOverprovisioned:
            return "MemoryOverprovisioned";
          case LambdaFunctionRecommendationFindingReasonCode::MemoryUnderprovisioned:
            return "MemoryUnderprovisioned";
          case LambdaFunctionRecommendationFindingReasonCode::InsufficientData:
            return "InsufficientData";
          case LambdaFunctionRecommendationFindingReasonCode::Inconclusive:
            return "Inconclusive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaFunctionRecommendationFindingReasonCodeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
