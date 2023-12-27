/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/RecommendationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace RecommendationTypeMapper
      {

        static const int INFRA_ONLY_HASH = HashingUtils::HashString("INFRA_ONLY");
        static const int WORKLOAD_ONLY_HASH = HashingUtils::HashString("WORKLOAD_ONLY");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        RecommendationType GetRecommendationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFRA_ONLY_HASH)
          {
            return RecommendationType::INFRA_ONLY;
          }
          else if (hashCode == WORKLOAD_ONLY_HASH)
          {
            return RecommendationType::WORKLOAD_ONLY;
          }
          else if (hashCode == ALL_HASH)
          {
            return RecommendationType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationType>(hashCode);
          }

          return RecommendationType::NOT_SET;
        }

        Aws::String GetNameForRecommendationType(RecommendationType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationType::NOT_SET:
            return {};
          case RecommendationType::INFRA_ONLY:
            return "INFRA_ONLY";
          case RecommendationType::WORKLOAD_ONLY:
            return "WORKLOAD_ONLY";
          case RecommendationType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationTypeMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
