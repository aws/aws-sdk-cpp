/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/AssessmentReportType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace AssessmentReportTypeMapper
      {

        static const int pdf_HASH = HashingUtils::HashString("pdf");
        static const int csv_HASH = HashingUtils::HashString("csv");


        AssessmentReportType GetAssessmentReportTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pdf_HASH)
          {
            return AssessmentReportType::pdf;
          }
          else if (hashCode == csv_HASH)
          {
            return AssessmentReportType::csv;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentReportType>(hashCode);
          }

          return AssessmentReportType::NOT_SET;
        }

        Aws::String GetNameForAssessmentReportType(AssessmentReportType enumValue)
        {
          switch(enumValue)
          {
          case AssessmentReportType::NOT_SET:
            return {};
          case AssessmentReportType::pdf:
            return "pdf";
          case AssessmentReportType::csv:
            return "csv";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssessmentReportTypeMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
