/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ReportType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace ReportTypeMapper
      {

        static constexpr uint32_t LicenseConfigurationSummaryReport_HASH = ConstExprHashingUtils::HashString("LicenseConfigurationSummaryReport");
        static constexpr uint32_t LicenseConfigurationUsageReport_HASH = ConstExprHashingUtils::HashString("LicenseConfigurationUsageReport");


        ReportType GetReportTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LicenseConfigurationSummaryReport_HASH)
          {
            return ReportType::LicenseConfigurationSummaryReport;
          }
          else if (hashCode == LicenseConfigurationUsageReport_HASH)
          {
            return ReportType::LicenseConfigurationUsageReport;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportType>(hashCode);
          }

          return ReportType::NOT_SET;
        }

        Aws::String GetNameForReportType(ReportType enumValue)
        {
          switch(enumValue)
          {
          case ReportType::NOT_SET:
            return {};
          case ReportType::LicenseConfigurationSummaryReport:
            return "LicenseConfigurationSummaryReport";
          case ReportType::LicenseConfigurationUsageReport:
            return "LicenseConfigurationUsageReport";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportTypeMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
