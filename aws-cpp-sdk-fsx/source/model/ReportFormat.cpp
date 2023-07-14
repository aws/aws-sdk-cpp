/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ReportFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace ReportFormatMapper
      {

        static const int REPORT_CSV_20191124_HASH = HashingUtils::HashString("REPORT_CSV_20191124");


        ReportFormat GetReportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPORT_CSV_20191124_HASH)
          {
            return ReportFormat::REPORT_CSV_20191124;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportFormat>(hashCode);
          }

          return ReportFormat::NOT_SET;
        }

        Aws::String GetNameForReportFormat(ReportFormat enumValue)
        {
          switch(enumValue)
          {
          case ReportFormat::REPORT_CSV_20191124:
            return "REPORT_CSV_20191124";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportFormatMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
