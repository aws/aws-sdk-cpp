/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationStepType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace RecommendationStepTypeMapper
      {

        static const int BENCHMARK_HASH = HashingUtils::HashString("BENCHMARK");


        RecommendationStepType GetRecommendationStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BENCHMARK_HASH)
          {
            return RecommendationStepType::BENCHMARK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationStepType>(hashCode);
          }

          return RecommendationStepType::NOT_SET;
        }

        Aws::String GetNameForRecommendationStepType(RecommendationStepType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationStepType::BENCHMARK:
            return "BENCHMARK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationStepTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
