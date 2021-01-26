/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobReportFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace JobReportFormatMapper
      {

        static const int Report_CSV_20180820_HASH = HashingUtils::HashString("Report_CSV_20180820");


        JobReportFormat GetJobReportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Report_CSV_20180820_HASH)
          {
            return JobReportFormat::Report_CSV_20180820;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobReportFormat>(hashCode);
          }

          return JobReportFormat::NOT_SET;
        }

        Aws::String GetNameForJobReportFormat(JobReportFormat enumValue)
        {
          switch(enumValue)
          {
          case JobReportFormat::Report_CSV_20180820:
            return "Report_CSV_20180820";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobReportFormatMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
