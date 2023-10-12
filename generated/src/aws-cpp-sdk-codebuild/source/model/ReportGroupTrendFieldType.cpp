/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportGroupTrendFieldType.h>
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
      namespace ReportGroupTrendFieldTypeMapper
      {

        static constexpr uint32_t PASS_RATE_HASH = ConstExprHashingUtils::HashString("PASS_RATE");
        static constexpr uint32_t DURATION_HASH = ConstExprHashingUtils::HashString("DURATION");
        static constexpr uint32_t TOTAL_HASH = ConstExprHashingUtils::HashString("TOTAL");
        static constexpr uint32_t LINE_COVERAGE_HASH = ConstExprHashingUtils::HashString("LINE_COVERAGE");
        static constexpr uint32_t LINES_COVERED_HASH = ConstExprHashingUtils::HashString("LINES_COVERED");
        static constexpr uint32_t LINES_MISSED_HASH = ConstExprHashingUtils::HashString("LINES_MISSED");
        static constexpr uint32_t BRANCH_COVERAGE_HASH = ConstExprHashingUtils::HashString("BRANCH_COVERAGE");
        static constexpr uint32_t BRANCHES_COVERED_HASH = ConstExprHashingUtils::HashString("BRANCHES_COVERED");
        static constexpr uint32_t BRANCHES_MISSED_HASH = ConstExprHashingUtils::HashString("BRANCHES_MISSED");


        ReportGroupTrendFieldType GetReportGroupTrendFieldTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_RATE_HASH)
          {
            return ReportGroupTrendFieldType::PASS_RATE;
          }
          else if (hashCode == DURATION_HASH)
          {
            return ReportGroupTrendFieldType::DURATION;
          }
          else if (hashCode == TOTAL_HASH)
          {
            return ReportGroupTrendFieldType::TOTAL;
          }
          else if (hashCode == LINE_COVERAGE_HASH)
          {
            return ReportGroupTrendFieldType::LINE_COVERAGE;
          }
          else if (hashCode == LINES_COVERED_HASH)
          {
            return ReportGroupTrendFieldType::LINES_COVERED;
          }
          else if (hashCode == LINES_MISSED_HASH)
          {
            return ReportGroupTrendFieldType::LINES_MISSED;
          }
          else if (hashCode == BRANCH_COVERAGE_HASH)
          {
            return ReportGroupTrendFieldType::BRANCH_COVERAGE;
          }
          else if (hashCode == BRANCHES_COVERED_HASH)
          {
            return ReportGroupTrendFieldType::BRANCHES_COVERED;
          }
          else if (hashCode == BRANCHES_MISSED_HASH)
          {
            return ReportGroupTrendFieldType::BRANCHES_MISSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportGroupTrendFieldType>(hashCode);
          }

          return ReportGroupTrendFieldType::NOT_SET;
        }

        Aws::String GetNameForReportGroupTrendFieldType(ReportGroupTrendFieldType enumValue)
        {
          switch(enumValue)
          {
          case ReportGroupTrendFieldType::NOT_SET:
            return {};
          case ReportGroupTrendFieldType::PASS_RATE:
            return "PASS_RATE";
          case ReportGroupTrendFieldType::DURATION:
            return "DURATION";
          case ReportGroupTrendFieldType::TOTAL:
            return "TOTAL";
          case ReportGroupTrendFieldType::LINE_COVERAGE:
            return "LINE_COVERAGE";
          case ReportGroupTrendFieldType::LINES_COVERED:
            return "LINES_COVERED";
          case ReportGroupTrendFieldType::LINES_MISSED:
            return "LINES_MISSED";
          case ReportGroupTrendFieldType::BRANCH_COVERAGE:
            return "BRANCH_COVERAGE";
          case ReportGroupTrendFieldType::BRANCHES_COVERED:
            return "BRANCHES_COVERED";
          case ReportGroupTrendFieldType::BRANCHES_MISSED:
            return "BRANCHES_MISSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportGroupTrendFieldTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
