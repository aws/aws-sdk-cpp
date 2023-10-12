/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceRecommendationFinding.h>
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
      namespace ECSServiceRecommendationFindingMapper
      {

        static constexpr uint32_t Optimized_HASH = ConstExprHashingUtils::HashString("Optimized");
        static constexpr uint32_t Underprovisioned_HASH = ConstExprHashingUtils::HashString("Underprovisioned");
        static constexpr uint32_t Overprovisioned_HASH = ConstExprHashingUtils::HashString("Overprovisioned");


        ECSServiceRecommendationFinding GetECSServiceRecommendationFindingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Optimized_HASH)
          {
            return ECSServiceRecommendationFinding::Optimized;
          }
          else if (hashCode == Underprovisioned_HASH)
          {
            return ECSServiceRecommendationFinding::Underprovisioned;
          }
          else if (hashCode == Overprovisioned_HASH)
          {
            return ECSServiceRecommendationFinding::Overprovisioned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ECSServiceRecommendationFinding>(hashCode);
          }

          return ECSServiceRecommendationFinding::NOT_SET;
        }

        Aws::String GetNameForECSServiceRecommendationFinding(ECSServiceRecommendationFinding enumValue)
        {
          switch(enumValue)
          {
          case ECSServiceRecommendationFinding::NOT_SET:
            return {};
          case ECSServiceRecommendationFinding::Optimized:
            return "Optimized";
          case ECSServiceRecommendationFinding::Underprovisioned:
            return "Underprovisioned";
          case ECSServiceRecommendationFinding::Overprovisioned:
            return "Overprovisioned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ECSServiceRecommendationFindingMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
