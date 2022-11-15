/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/RecommendationStatus.h>
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
      namespace RecommendationStatusMapper
      {

        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int FIXED_HASH = HashingUtils::HashString("FIXED");


        RecommendationStatus GetRecommendationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return RecommendationStatus::OPEN;
          }
          else if (hashCode == FIXED_HASH)
          {
            return RecommendationStatus::FIXED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationStatus>(hashCode);
          }

          return RecommendationStatus::NOT_SET;
        }

        Aws::String GetNameForRecommendationStatus(RecommendationStatus enumValue)
        {
          switch(enumValue)
          {
          case RecommendationStatus::OPEN:
            return "OPEN";
          case RecommendationStatus::FIXED:
            return "FIXED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationStatusMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
