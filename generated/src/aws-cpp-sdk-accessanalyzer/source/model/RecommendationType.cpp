/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/RecommendationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace RecommendationTypeMapper
      {

        static const int UnusedPermissionRecommendation_HASH = HashingUtils::HashString("UnusedPermissionRecommendation");


        RecommendationType GetRecommendationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UnusedPermissionRecommendation_HASH)
          {
            return RecommendationType::UnusedPermissionRecommendation;
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
          case RecommendationType::UnusedPermissionRecommendation:
            return "UnusedPermissionRecommendation";
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
  } // namespace AccessAnalyzer
} // namespace Aws
