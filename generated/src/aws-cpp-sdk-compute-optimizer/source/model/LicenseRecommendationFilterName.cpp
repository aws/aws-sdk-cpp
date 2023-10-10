/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseRecommendationFilterName.h>
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
      namespace LicenseRecommendationFilterNameMapper
      {

        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int FindingReasonCode_HASH = HashingUtils::HashString("FindingReasonCode");
        static const int LicenseName_HASH = HashingUtils::HashString("LicenseName");


        LicenseRecommendationFilterName GetLicenseRecommendationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Finding_HASH)
          {
            return LicenseRecommendationFilterName::Finding;
          }
          else if (hashCode == FindingReasonCode_HASH)
          {
            return LicenseRecommendationFilterName::FindingReasonCode;
          }
          else if (hashCode == LicenseName_HASH)
          {
            return LicenseRecommendationFilterName::LicenseName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseRecommendationFilterName>(hashCode);
          }

          return LicenseRecommendationFilterName::NOT_SET;
        }

        Aws::String GetNameForLicenseRecommendationFilterName(LicenseRecommendationFilterName enumValue)
        {
          switch(enumValue)
          {
          case LicenseRecommendationFilterName::NOT_SET:
            return {};
          case LicenseRecommendationFilterName::Finding:
            return "Finding";
          case LicenseRecommendationFilterName::FindingReasonCode:
            return "FindingReasonCode";
          case LicenseRecommendationFilterName::LicenseName:
            return "LicenseName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseRecommendationFilterNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
