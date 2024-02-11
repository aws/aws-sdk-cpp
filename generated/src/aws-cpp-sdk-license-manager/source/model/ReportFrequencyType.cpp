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

        static const int DAY_HASH = HashingUtils::HashString("DAY");
        static const int WEEK_HASH = HashingUtils::HashString("WEEK");
        static const int MONTH_HASH = HashingUtils::HashString("MONTH");


        ReportFrequencyType GetReportFrequencyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
