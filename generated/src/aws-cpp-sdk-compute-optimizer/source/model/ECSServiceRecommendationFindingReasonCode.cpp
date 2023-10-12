/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceRecommendationFindingReasonCode.h>
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
      namespace ECSServiceRecommendationFindingReasonCodeMapper
      {

        static constexpr uint32_t MemoryOverprovisioned_HASH = ConstExprHashingUtils::HashString("MemoryOverprovisioned");
        static constexpr uint32_t MemoryUnderprovisioned_HASH = ConstExprHashingUtils::HashString("MemoryUnderprovisioned");
        static constexpr uint32_t CPUOverprovisioned_HASH = ConstExprHashingUtils::HashString("CPUOverprovisioned");
        static constexpr uint32_t CPUUnderprovisioned_HASH = ConstExprHashingUtils::HashString("CPUUnderprovisioned");


        ECSServiceRecommendationFindingReasonCode GetECSServiceRecommendationFindingReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MemoryOverprovisioned_HASH)
          {
            return ECSServiceRecommendationFindingReasonCode::MemoryOverprovisioned;
          }
          else if (hashCode == MemoryUnderprovisioned_HASH)
          {
            return ECSServiceRecommendationFindingReasonCode::MemoryUnderprovisioned;
          }
          else if (hashCode == CPUOverprovisioned_HASH)
          {
            return ECSServiceRecommendationFindingReasonCode::CPUOverprovisioned;
          }
          else if (hashCode == CPUUnderprovisioned_HASH)
          {
            return ECSServiceRecommendationFindingReasonCode::CPUUnderprovisioned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ECSServiceRecommendationFindingReasonCode>(hashCode);
          }

          return ECSServiceRecommendationFindingReasonCode::NOT_SET;
        }

        Aws::String GetNameForECSServiceRecommendationFindingReasonCode(ECSServiceRecommendationFindingReasonCode enumValue)
        {
          switch(enumValue)
          {
          case ECSServiceRecommendationFindingReasonCode::NOT_SET:
            return {};
          case ECSServiceRecommendationFindingReasonCode::MemoryOverprovisioned:
            return "MemoryOverprovisioned";
          case ECSServiceRecommendationFindingReasonCode::MemoryUnderprovisioned:
            return "MemoryUnderprovisioned";
          case ECSServiceRecommendationFindingReasonCode::CPUOverprovisioned:
            return "CPUOverprovisioned";
          case ECSServiceRecommendationFindingReasonCode::CPUUnderprovisioned:
            return "CPUUnderprovisioned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ECSServiceRecommendationFindingReasonCodeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
