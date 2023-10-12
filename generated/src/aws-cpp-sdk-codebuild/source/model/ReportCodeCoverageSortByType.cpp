/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportCodeCoverageSortByType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace ReportCodeCoverageSortByTypeMapper
      {

        static constexpr uint32_t LINE_COVERAGE_PERCENTAGE_HASH = ConstExprHashingUtils::HashString("LINE_COVERAGE_PERCENTAGE");
        static constexpr uint32_t FILE_PATH_HASH = ConstExprHashingUtils::HashString("FILE_PATH");


        ReportCodeCoverageSortByType GetReportCodeCoverageSortByTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINE_COVERAGE_PERCENTAGE_HASH)
          {
            return ReportCodeCoverageSortByType::LINE_COVERAGE_PERCENTAGE;
          }
          else if (hashCode == FILE_PATH_HASH)
          {
            return ReportCodeCoverageSortByType::FILE_PATH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportCodeCoverageSortByType>(hashCode);
          }

          return ReportCodeCoverageSortByType::NOT_SET;
        }

        Aws::String GetNameForReportCodeCoverageSortByType(ReportCodeCoverageSortByType enumValue)
        {
          switch(enumValue)
          {
          case ReportCodeCoverageSortByType::NOT_SET:
            return {};
          case ReportCodeCoverageSortByType::LINE_COVERAGE_PERCENTAGE:
            return "LINE_COVERAGE_PERCENTAGE";
          case ReportCodeCoverageSortByType::FILE_PATH:
            return "FILE_PATH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportCodeCoverageSortByTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
