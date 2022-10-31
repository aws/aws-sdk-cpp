/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/RecommendationImpact.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace RecommendationImpactMapper
      {

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        RecommendationImpact GetRecommendationImpactForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return RecommendationImpact::LOW;
          }
          else if (hashCode == HIGH_HASH)
          {
            return RecommendationImpact::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationImpact>(hashCode);
          }

          return RecommendationImpact::NOT_SET;
        }

        Aws::String GetNameForRecommendationImpact(RecommendationImpact enumValue)
        {
          switch(enumValue)
          {
          case RecommendationImpact::LOW:
            return "LOW";
          case RecommendationImpact::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationImpactMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
