/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ReportFrequencyType.h>
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
      namespace ReportFrequencyTypeMapper
      {

        static constexpr uint32_t DAY_HASH = ConstExprHashingUtils::HashString("DAY");
        static constexpr uint32_t WEEK_HASH = ConstExprHashingUtils::HashString("WEEK");
        static constexpr uint32_t MONTH_HASH = ConstExprHashingUtils::HashString("MONTH");


        ReportFrequencyType GetReportFrequencyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAY_HASH)
          {
            return ReportFrequencyType::DAY;
          }
          else if (hashCode == WEEK_HASH)
          {
            return ReportFrequencyType::WEEK;
          }
          else if (hashCode == MONTH_HASH)
          {
            return ReportFrequencyType::MONTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportFrequencyType>(hashCode);
          }

          return ReportFrequencyType::NOT_SET;
        }

        Aws::String GetNameForReportFrequencyType(ReportFrequencyType enumValue)
        {
          switch(enumValue)
          {
          case ReportFrequencyType::NOT_SET:
            return {};
          case ReportFrequencyType::DAY:
            return "DAY";
          case ReportFrequencyType::WEEK:
            return "WEEK";
          case ReportFrequencyType::MONTH:
            return "MONTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportFrequencyTypeMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
