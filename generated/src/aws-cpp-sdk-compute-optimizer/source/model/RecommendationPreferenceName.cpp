/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RecommendationPreferenceName.h>
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
      namespace RecommendationPreferenceNameMapper
      {

        static const int EnhancedInfrastructureMetrics_HASH = HashingUtils::HashString("EnhancedInfrastructureMetrics");
        static const int InferredWorkloadTypes_HASH = HashingUtils::HashString("InferredWorkloadTypes");
        static const int ExternalMetricsPreference_HASH = HashingUtils::HashString("ExternalMetricsPreference");


        RecommendationPreferenceName GetRecommendationPreferenceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EnhancedInfrastructureMetrics_HASH)
          {
            return RecommendationPreferenceName::EnhancedInfrastructureMetrics;
          }
          else if (hashCode == InferredWorkloadTypes_HASH)
          {
            return RecommendationPreferenceName::InferredWorkloadTypes;
          }
          else if (hashCode == ExternalMetricsPreference_HASH)
          {
            return RecommendationPreferenceName::ExternalMetricsPreference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationPreferenceName>(hashCode);
          }

          return RecommendationPreferenceName::NOT_SET;
        }

        Aws::String GetNameForRecommendationPreferenceName(RecommendationPreferenceName enumValue)
        {
          switch(enumValue)
          {
          case RecommendationPreferenceName::EnhancedInfrastructureMetrics:
            return "EnhancedInfrastructureMetrics";
          case RecommendationPreferenceName::InferredWorkloadTypes:
            return "InferredWorkloadTypes";
          case RecommendationPreferenceName::ExternalMetricsPreference:
            return "ExternalMetricsPreference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationPreferenceNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
