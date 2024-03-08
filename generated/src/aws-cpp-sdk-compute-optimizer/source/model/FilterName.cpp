/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/FilterName.h>
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
      namespace FilterNameMapper
      {

        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int FindingReasonCodes_HASH = HashingUtils::HashString("FindingReasonCodes");
        static const int RecommendationSourceType_HASH = HashingUtils::HashString("RecommendationSourceType");
        static const int InferredWorkloadTypes_HASH = HashingUtils::HashString("InferredWorkloadTypes");


        FilterName GetFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Finding_HASH)
          {
            return FilterName::Finding;
          }
          else if (hashCode == FindingReasonCodes_HASH)
          {
            return FilterName::FindingReasonCodes;
          }
          else if (hashCode == RecommendationSourceType_HASH)
          {
            return FilterName::RecommendationSourceType;
          }
          else if (hashCode == InferredWorkloadTypes_HASH)
          {
            return FilterName::InferredWorkloadTypes;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterName>(hashCode);
          }

          return FilterName::NOT_SET;
        }

        Aws::String GetNameForFilterName(FilterName enumValue)
        {
          switch(enumValue)
          {
          case FilterName::NOT_SET:
            return {};
          case FilterName::Finding:
            return "Finding";
          case FilterName::FindingReasonCodes:
            return "FindingReasonCodes";
          case FilterName::RecommendationSourceType:
            return "RecommendationSourceType";
          case FilterName::InferredWorkloadTypes:
            return "InferredWorkloadTypes";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
