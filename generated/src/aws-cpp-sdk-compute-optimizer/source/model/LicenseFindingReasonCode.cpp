/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseFindingReasonCode.h>
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
      namespace LicenseFindingReasonCodeMapper
      {

        static constexpr uint32_t InvalidCloudWatchApplicationInsightsSetup_HASH = ConstExprHashingUtils::HashString("InvalidCloudWatchApplicationInsightsSetup");
        static constexpr uint32_t CloudWatchApplicationInsightsError_HASH = ConstExprHashingUtils::HashString("CloudWatchApplicationInsightsError");
        static constexpr uint32_t LicenseOverprovisioned_HASH = ConstExprHashingUtils::HashString("LicenseOverprovisioned");
        static constexpr uint32_t Optimized_HASH = ConstExprHashingUtils::HashString("Optimized");


        LicenseFindingReasonCode GetLicenseFindingReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidCloudWatchApplicationInsightsSetup_HASH)
          {
            return LicenseFindingReasonCode::InvalidCloudWatchApplicationInsightsSetup;
          }
          else if (hashCode == CloudWatchApplicationInsightsError_HASH)
          {
            return LicenseFindingReasonCode::CloudWatchApplicationInsightsError;
          }
          else if (hashCode == LicenseOverprovisioned_HASH)
          {
            return LicenseFindingReasonCode::LicenseOverprovisioned;
          }
          else if (hashCode == Optimized_HASH)
          {
            return LicenseFindingReasonCode::Optimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseFindingReasonCode>(hashCode);
          }

          return LicenseFindingReasonCode::NOT_SET;
        }

        Aws::String GetNameForLicenseFindingReasonCode(LicenseFindingReasonCode enumValue)
        {
          switch(enumValue)
          {
          case LicenseFindingReasonCode::NOT_SET:
            return {};
          case LicenseFindingReasonCode::InvalidCloudWatchApplicationInsightsSetup:
            return "InvalidCloudWatchApplicationInsightsSetup";
          case LicenseFindingReasonCode::CloudWatchApplicationInsightsError:
            return "CloudWatchApplicationInsightsError";
          case LicenseFindingReasonCode::LicenseOverprovisioned:
            return "LicenseOverprovisioned";
          case LicenseFindingReasonCode::Optimized:
            return "Optimized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseFindingReasonCodeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
