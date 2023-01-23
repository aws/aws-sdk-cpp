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

        static const int MemoryOverprovisioned_HASH = HashingUtils::HashString("MemoryOverprovisioned");
        static const int MemoryUnderprovisioned_HASH = HashingUtils::HashString("MemoryUnderprovisioned");
        static const int CPUOverprovisioned_HASH = HashingUtils::HashString("CPUOverprovisioned");
        static const int CPUUnderprovisioned_HASH = HashingUtils::HashString("CPUUnderprovisioned");


        ECSServiceRecommendationFindingReasonCode GetECSServiceRecommendationFindingReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
