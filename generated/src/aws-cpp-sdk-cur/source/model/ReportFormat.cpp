/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/ReportFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostandUsageReportService
  {
    namespace Model
    {
      namespace ReportFormatMapper
      {

        static const int textORcsv_HASH = HashingUtils::HashString("textORcsv");
        static const int Parquet_HASH = HashingUtils::HashString("Parquet");


        ReportFormat GetReportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == textORcsv_HASH)
          {
            return ReportFormat::textORcsv;
          }
          else if (hashCode == Parquet_HASH)
          {
            return ReportFormat::Parquet;
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
          case ReportFormat::textORcsv:
            return "textORcsv";
          case ReportFormat::Parquet:
            return "Parquet";
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
  } // namespace CostandUsageReportService
} // namespace Aws
