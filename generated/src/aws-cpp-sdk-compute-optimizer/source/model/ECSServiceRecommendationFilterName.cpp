/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceRecommendationFilterName.h>
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
      namespace ECSServiceRecommendationFilterNameMapper
      {

        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int FindingReasonCode_HASH = HashingUtils::HashString("FindingReasonCode");


        ECSServiceRecommendationFilterName GetECSServiceRecommendationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Finding_HASH)
          {
            return ECSServiceRecommendationFilterName::Finding;
          }
          else if (hashCode == FindingReasonCode_HASH)
          {
            return ECSServiceRecommendationFilterName::FindingReasonCode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ECSServiceRecommendationFilterName>(hashCode);
          }

          return ECSServiceRecommendationFilterName::NOT_SET;
        }

        Aws::String GetNameForECSServiceRecommendationFilterName(ECSServiceRecommendationFilterName enumValue)
        {
          switch(enumValue)
          {
          case ECSServiceRecommendationFilterName::Finding:
            return "Finding";
          case ECSServiceRecommendationFilterName::FindingReasonCode:
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

      } // namespace ECSServiceRecommendationFilterNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
